type t;

[@bs.module "director/build/director"] [@bs.new] external makeRouter : Js.t({..}) => t = "Router";

[@bs.send] external configure : (t, Js.t({..})) => unit = "configure";

[@bs.send] external init : (t, string) => unit = "init";

[@bs.send] external setRoute : (t, string) => unit = "setRoute";
