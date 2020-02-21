let get = (path: string, ()) =>
  Js.Promise.(
    Fetch.fetchWithInit(path, Fetch.RequestInit.make(~mode=CORS, ()))
    |> then_(Fetch.Response.json)
    |> then_(json => Js.Json.decodeObject(json) |> resolve)
    |> then_(opt => Belt.Option.getExn(opt) |> resolve)
    |> then_(items => Js.log(items) |> resolve)
  );
