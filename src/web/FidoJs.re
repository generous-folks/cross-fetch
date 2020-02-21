open Fido_types;

[@genType]
let getGeoService = Http.Client.get("https://geo.6play.fr/v1/geoInfo/");
