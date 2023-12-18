{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-23.05";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
        cc = pkgs.gcc12;

        deps = with pkgs; [
          glibc
          gnumake
          criterion
        ] ++ [ cc ];
      in
      {
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            gcovr
            ltrace
            valgrind
            python311Packages.compiledb
            man-pages
            man-pages-posix
            gdb
          ] ++ deps;
        };

        formatter = pkgs.nixpkgs-fmt;
      });
}
