# bs-director

[BuckleScript](https://github.com/bloomberg/bucklescript) bindings to the [Director](https://github.com/flatiron/director) router.

```
npm i bs-director
```

## Usage

```reason
let router =
  DirectorRe.makeRouter {
    "/": fun () => Js.log "Navigated to tasks list",
    "/active": fun () => Js.log "Navigated active tasks list",
    "/profile/:userid": fun (userid: string) => Js.log ("Navigated to profile for: " ^ userid)
    "/completed": fun () => Js.log "Completed a task",
  };

DirectorRe.init router "/";
```
