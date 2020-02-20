let fetch = (~path: string) =>
  Js.Promise.(
    Fetch.fetch(path)
    |> then_(Fetch.Response.text)
    |> then_(text => print_endline(text) |> resolve)
  );
