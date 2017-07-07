type t;

external makeRouter : Js.t {..} => t =
  "Router" [@@bs.module "director/build/director"] [@@bs.new];

external configure : t => Js.t {..} => unit = "configure" [@@bs.send];

external init : t => string => unit = "init" [@@bs.send];
