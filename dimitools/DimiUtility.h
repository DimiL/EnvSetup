/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */


#ifndef DimiUtility_h__
#define DimiUtility_h__

// Dimi's Always print message
#ifndef DMLOG
#define DMLOG(args)   \
  printf_stderr(args);  \
  printf_stderr("\n");

#define DDLOG(args) printf_stderr args
//#define DM_FENTRY() DMLOG("[Dimi]%s >>", __FUNCTION__)
//#define DM_FEXIT()  DMLOG("[Dimi]%s <<", __FUNCTION__)

static nsCString UriToString(nsIURI* aURI)
{
  nsCString s;
  if (aURI)
    aURI->GetAsciiSpec(s);
  return s;
}

#else
#endif

//TODO: 1. Remove (())
//      2. Add \n In the end
//      3. Add function >>, <<
//      4. Add break point inside function

#endif
