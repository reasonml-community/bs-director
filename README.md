# [UNMAINTAINED] bs-director

[BuckleScript](https://github.com/bloomberg/bucklescript) bindings to the [Director](https://github.com/flatiron/director) router.

**NOTE: This repository is unmaintained.** If you'd like to maintain it, please either make an issue in the [meta repository](https://github.com/reasonml-community/meta/issues/new), or bring it up in Discord.

```
npm i bs-director
```

## Usage

```reason
let router =
  DirectorRe.makeRouter({
    "/": () => Js.log("Navigated to tasks list"),
    "/active": () => Js.log("Navigated active tasks list"),
    "/profile/:userid": (userid: string) => Js.log("Navigated to profile for: " ++ userid),
    "/completed": () => Js.log("Completed a task")
  });

/* Optional configuration */
DirectorRe.configure(router, {"foo": "bar"});

DirectorRe.init(router, "/");
```
