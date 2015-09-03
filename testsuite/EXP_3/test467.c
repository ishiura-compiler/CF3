#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
uint64_t x12 = 710061883864LLU;
volatile uint64_t t2 = 1276065844884LLU;
int8_t x13 = 6;
uint32_t x16 = 90393U;
int8_t x21 = 1;
static uint32_t x27 = UINT32_MAX;
static int32_t x28 = -6;
uint8_t x35 = 1U;
static int32_t x40 = -1;
volatile uint32_t x44 = 35U;
volatile int16_t x48 = -1;
static int16_t x49 = 7435;
int16_t x53 = INT16_MIN;
static volatile uint64_t t12 = 152618101718679054LLU;
static int64_t t13 = 1915139384486021LL;
int16_t x74 = INT16_MIN;
int64_t x78 = INT64_MIN;
static int16_t x97 = INT16_MAX;
uint64_t x100 = 641316543102671279LLU;
int16_t x101 = 28;
int8_t x109 = 3;
uint32_t x127 = 30U;
int64_t x142 = INT64_MAX;
static int8_t x151 = -11;
static int64_t t25 = -149858883LL;
uint32_t x158 = UINT32_MAX;
int16_t x166 = -5590;
int32_t t28 = 92321388;
int8_t x190 = INT8_MIN;
int32_t t31 = -273055;
int64_t x223 = 1031487LL;
int16_t x224 = 2451;
volatile int32_t t36 = -49609;
int32_t x244 = INT32_MIN;
uint32_t x247 = 29912U;
int64_t x250 = INT64_MIN;
int16_t x258 = 2480;
int32_t x267 = 0;
volatile int8_t x274 = INT8_MIN;
int32_t x285 = INT32_MIN;
volatile int64_t t50 = 251LL;
uint32_t x293 = 96U;
volatile int64_t x295 = 26435888LL;
int8_t x296 = INT8_MIN;
static volatile int64_t t51 = -4297LL;
int16_t x297 = -1;
uint64_t x306 = 2LLU;
int8_t x310 = INT8_MIN;
static int8_t x316 = INT8_MAX;
volatile uint32_t t58 = 33178U;
int32_t x343 = 2050458;
int32_t x346 = -1;
static int8_t x352 = INT8_MIN;
static uint8_t x353 = UINT8_MAX;
static volatile uint32_t t62 = 42U;
static int16_t x358 = INT16_MIN;
int64_t x359 = 1LL;
volatile int64_t t63 = 64017282829437LL;
int8_t x377 = 4;
int32_t x378 = -1;
static uint32_t t65 = 7981U;
int32_t x384 = 174;
int16_t x388 = INT16_MAX;
int64_t x393 = -1LL;
static int8_t x396 = 1;
uint64_t x398 = 4301049747230814LLU;
int32_t x418 = INT32_MAX;
static int8_t x420 = -1;
volatile int64_t x422 = -6214LL;
uint8_t x426 = 1U;
static int32_t t80 = 1;
uint16_t x461 = UINT16_MAX;
static int16_t x464 = INT16_MAX;
volatile uint64_t x467 = 563159489350LLU;
uint32_t t83 = 27169640U;
uint64_t x489 = UINT64_MAX;
volatile uint64_t x490 = 997876983LLU;
volatile int8_t x496 = INT8_MIN;
static int64_t x503 = -541LL;
static int32_t x506 = INT32_MIN;
int64_t t88 = -29933LL;
uint64_t t90 = 1684969145524676670LLU;
uint32_t x531 = UINT32_MAX;
static volatile int64_t x535 = -308437205507LL;
int64_t t93 = 0LL;
volatile int64_t t94 = -445847LL;
int32_t x546 = INT32_MAX;
int8_t x557 = INT8_MAX;
static volatile uint32_t t97 = 52416302U;
static int32_t x565 = INT32_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x3 = -1LL;
	static int64_t x4 = -228206430216283195LL;
	static int64_t t0 = 7LL;

	t0 = ((x1<=x2)|(x3*x4));

	if (t0 != 228206430216283195LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile uint16_t x6 = 7329U;
	uint16_t x7 = 16285U;
	volatile int32_t x8 = -1;
	int32_t t1 = -975;

	t1 = ((x5<=x6)|(x7*x8));

	if (t1 != -16285) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MAX;
	int8_t x11 = 63;

	t2 = ((x9<=x10)|(x11*x12));

	if (t2 != 44733898683433LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	uint16_t x15 = 12U;
	uint32_t t3 = 210U;

	t3 = ((x13<=x14)|(x15*x16));

	if (t3 != 1084717U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = 3;
	int64_t x23 = 0LL;
	int64_t x24 = INT64_MAX;
	static int64_t t4 = 31275212458148547LL;

	t4 = ((x21<=x22)|(x23*x24));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -2;
	int16_t x26 = -21;
	static uint32_t t5 = 24126904U;

	t5 = ((x25<=x26)|(x27*x28));

	if (t5 != 6U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = -5273641300LL;
	static uint64_t x30 = UINT64_MAX;
	int64_t x31 = 3LL;
	int8_t x32 = 0;
	volatile int64_t t6 = -145950674188LL;

	t6 = ((x29<=x30)|(x31*x32));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 187563U;
	static int64_t x34 = -4LL;
	volatile int16_t x36 = 25;
	volatile int32_t t7 = -336;

	t7 = ((x33<=x34)|(x35*x36));

	if (t7 != 25) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 7529856LLU;
	volatile int32_t x38 = -1336;
	uint16_t x39 = UINT16_MAX;
	volatile int32_t t8 = -27;

	t8 = ((x37<=x38)|(x39*x40));

	if (t8 != -65535) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MAX;
	static volatile int16_t x43 = INT16_MAX;
	uint32_t t9 = 24766U;

	t9 = ((x41<=x42)|(x43*x44));

	if (t9 != 1146845U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 3U;
	volatile int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MAX;
	volatile int64_t t10 = -30341903347784330LL;

	t10 = ((x45<=x46)|(x47*x48));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 49U;
	int32_t x52 = INT32_MIN;
	uint32_t t11 = 79694390U;

	t11 = ((x49<=x50)|(x51*x52));

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x54 = INT64_MAX;
	int16_t x55 = INT16_MIN;
	uint64_t x56 = 2503226320650LLU;

	t12 = ((x53<=x54)|(x55*x56));

	if (t12 != 18364718353634492417LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MAX;
	int64_t x58 = -1LL;
	volatile uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;

	t13 = ((x57<=x58)|(x59*x60));

	if (t13 != -4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	int32_t x75 = -1;
	volatile int32_t x76 = -334557;
	int32_t t14 = 107;

	t14 = ((x73<=x74)|(x75*x76));

	if (t14 != 334557) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x77 = 27U;
	static int8_t x79 = -16;
	uint16_t x80 = 119U;
	int32_t t15 = 8185;

	t15 = ((x77<=x78)|(x79*x80));

	if (t15 != -1904) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -5;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = -1;
	int16_t x88 = INT16_MAX;
	volatile int32_t t16 = 18863408;

	t16 = ((x85<=x86)|(x87*x88));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x98 = 1410LL;
	static int64_t x99 = INT64_MAX;
	volatile uint64_t t17 = 1LLU;

	t17 = ((x97<=x98)|(x99*x100));

	if (t17 != 8582055493752104529LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x102 = INT16_MIN;
	int32_t x103 = -1;
	static volatile int8_t x104 = INT8_MIN;
	int32_t t18 = -1405;

	t18 = ((x101<=x102)|(x103*x104));

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x110 = INT8_MIN;
	volatile int8_t x111 = INT8_MIN;
	static int16_t x112 = INT16_MAX;
	int32_t t19 = -9395;

	t19 = ((x109<=x110)|(x111*x112));

	if (t19 != -4194176) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = UINT64_MAX;
	uint16_t x118 = UINT16_MAX;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	uint32_t t20 = 13095247U;

	t20 = ((x117<=x118)|(x119*x120));

	if (t20 != 2147483648U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	int32_t x123 = -1;
	int8_t x124 = -1;
	int32_t t21 = -3;

	t21 = ((x121<=x122)|(x123*x124));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = 2669U;
	volatile int16_t x126 = 371;
	int8_t x128 = -1;
	uint32_t t22 = 276U;

	t22 = ((x125<=x126)|(x127*x128));

	if (t22 != 4294967266U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x141 = 922U;
	static uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MIN;
	volatile uint32_t t23 = 52U;

	t23 = ((x141<=x142)|(x143*x144));

	if (t23 != 32769U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x145 = INT64_MAX;
	static int32_t x146 = -1;
	uint8_t x147 = 0U;
	int32_t x148 = -1;
	int32_t t24 = 37910911;

	t24 = ((x145<=x146)|(x147*x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x149 = 1U;
	volatile int8_t x150 = -1;
	volatile int64_t x152 = -1722314LL;

	t25 = ((x149<=x150)|(x151*x152));

	if (t25 != 18945455LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int16_t x159 = INT16_MAX;
	uint16_t x160 = 1214U;
	static volatile int32_t t26 = 11004049;

	t26 = ((x157<=x158)|(x159*x160));

	if (t26 != 39779139) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x161 = -52454;
	int16_t x162 = INT16_MIN;
	int16_t x163 = -783;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t27 = 275508;

	t27 = ((x161<=x162)|(x163*x164));

	if (t27 != -199665) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x165 = INT16_MAX;
	int16_t x167 = -1;
	int8_t x168 = -9;

	t28 = ((x165<=x166)|(x167*x168));

	if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x173 = 14195U;
	uint16_t x174 = UINT16_MAX;
	static int16_t x175 = INT16_MIN;
	int32_t x176 = 185;
	volatile int32_t t29 = 42440229;

	t29 = ((x173<=x174)|(x175*x176));

	if (t29 != -6062079) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x189 = INT64_MIN;
	uint16_t x191 = 47U;
	int8_t x192 = INT8_MAX;
	int32_t t30 = 0;

	t30 = ((x189<=x190)|(x191*x192));

	if (t30 != 5969) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x201 = 1U;
	volatile uint64_t x202 = 29908904LLU;
	int32_t x203 = 7648;
	uint8_t x204 = 2U;

	t31 = ((x201<=x202)|(x203*x204));

	if (t31 != 15297) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x209 = 105203010446479046LL;
	int64_t x210 = INT64_MAX;
	int64_t x211 = -1LL;
	static int32_t x212 = 9;
	volatile int64_t t32 = -207231410054LL;

	t32 = ((x209<=x210)|(x211*x212));

	if (t32 != -9LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x217 = -30;
	int32_t x218 = -12468916;
	uint32_t x219 = 3168U;
	static int8_t x220 = -5;
	uint32_t t33 = 103U;

	t33 = ((x217<=x218)|(x219*x220));

	if (t33 != 4294951456U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x221 = 83LL;
	static int8_t x222 = INT8_MIN;
	volatile int64_t t34 = -3945536373796LL;

	t34 = ((x221<=x222)|(x223*x224));

	if (t34 != 2528174637LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x225 = INT32_MIN;
	int32_t x226 = 17035460;
	int8_t x227 = -1;
	volatile uint16_t x228 = 48U;
	static volatile int32_t t35 = 115592610;

	t35 = ((x225<=x226)|(x227*x228));

	if (t35 != -47) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x229 = 0U;
	int32_t x230 = INT32_MIN;
	uint8_t x231 = 7U;
	static int16_t x232 = 1;

	t36 = ((x229<=x230)|(x231*x232));

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	uint64_t x236 = 191898LLU;
	uint64_t t37 = 597LLU;

	t37 = ((x233<=x234)|(x235*x236));

	if (t37 != 12576035431LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x237 = 15;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t38 = 98474040014332LLU;

	t38 = ((x237<=x238)|(x239*x240));

	if (t38 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x241 = 107U;
	static int16_t x242 = -1;
	int16_t x243 = 1;
	volatile int32_t t39 = -3960767;

	t39 = ((x241<=x242)|(x243*x244));

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x245 = 87219025213595LL;
	volatile int16_t x246 = INT16_MIN;
	int32_t x248 = -1;
	volatile uint32_t t40 = 2U;

	t40 = ((x245<=x246)|(x247*x248));

	if (t40 != 4294937384U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x249 = INT32_MIN;
	volatile uint32_t x251 = 68813911U;
	uint8_t x252 = 5U;
	volatile uint32_t t41 = 244285986U;

	t41 = ((x249<=x250)|(x251*x252));

	if (t41 != 344069555U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x253 = 85734067606434LLU;
	uint64_t x254 = 12882590111678162LLU;
	uint16_t x255 = 103U;
	static int32_t x256 = -1;
	int32_t t42 = -2281965;

	t42 = ((x253<=x254)|(x255*x256));

	if (t42 != -103) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x257 = 3899LLU;
	static int32_t x259 = -16469988;
	uint32_t x260 = 7U;
	static volatile uint32_t t43 = 885065U;

	t43 = ((x257<=x258)|(x259*x260));

	if (t43 != 4179677380U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x261 = 189728020U;
	static int64_t x262 = 180327062576875105LL;
	static int16_t x263 = 6;
	static uint64_t x264 = UINT64_MAX;
	volatile uint64_t t44 = 19343464583LLU;

	t44 = ((x261<=x262)|(x263*x264));

	if (t44 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x265 = -1;
	int64_t x266 = INT64_MIN;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t45 = 67057;

	t45 = ((x265<=x266)|(x267*x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = -1;
	uint16_t x271 = 7554U;
	static volatile int8_t x272 = INT8_MIN;
	static volatile int32_t t46 = 447643848;

	t46 = ((x269<=x270)|(x271*x272));

	if (t46 != -966911) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x273 = 3961103581364096LLU;
	int8_t x275 = -44;
	static int64_t x276 = -172LL;
	volatile int64_t t47 = -1046941327912LL;

	t47 = ((x273<=x274)|(x275*x276));

	if (t47 != 7569LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x277 = INT32_MAX;
	uint8_t x278 = UINT8_MAX;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = -1;
	int32_t t48 = -40;

	t48 = ((x277<=x278)|(x279*x280));

	if (t48 != -65535) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x286 = 7377;
	int16_t x287 = -11;
	static volatile int16_t x288 = 54;
	int32_t t49 = 212699835;

	t49 = ((x285<=x286)|(x287*x288));

	if (t49 != -593) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x289 = -113600112;
	static int64_t x290 = INT64_MAX;
	uint32_t x291 = UINT32_MAX;
	volatile int64_t x292 = -1LL;

	t50 = ((x289<=x290)|(x291*x292));

	if (t50 != -4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x294 = 1838U;

	t51 = ((x293<=x294)|(x295*x296));

	if (t51 != -3383793663LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MAX;
	volatile int32_t t52 = 110184799;

	t52 = ((x297<=x298)|(x299*x300));

	if (t52 != -1073709056) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x305 = UINT16_MAX;
	static int16_t x307 = INT16_MAX;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t53 = -114;

	t53 = ((x305<=x306)|(x307*x308));

	if (t53 != 2147385345) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x309 = -1LL;
	volatile int8_t x311 = -1;
	int16_t x312 = INT16_MAX;
	volatile int32_t t54 = 52533499;

	t54 = ((x309<=x310)|(x311*x312));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = UINT32_MAX;
	static uint8_t x314 = UINT8_MAX;
	int8_t x315 = -2;
	static volatile int32_t t55 = -50663;

	t55 = ((x313<=x314)|(x315*x316));

	if (t55 != -254) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x317 = 10;
	volatile int64_t x318 = INT64_MAX;
	uint32_t x319 = 25071U;
	uint32_t x320 = UINT32_MAX;
	uint32_t t56 = 2298U;

	t56 = ((x317<=x318)|(x319*x320));

	if (t56 != 4294942225U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x321 = 7;
	uint16_t x322 = 29U;
	volatile int64_t x323 = -280904628214426015LL;
	static int16_t x324 = 0;
	volatile int64_t t57 = -1781026001083LL;

	t57 = ((x321<=x322)|(x323*x324));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x329 = -1;
	int32_t x330 = -8;
	uint32_t x331 = 2U;
	uint32_t x332 = 90814356U;

	t58 = ((x329<=x330)|(x331*x332));

	if (t58 != 181628712U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x341 = 1473LL;
	int16_t x342 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t59 = 671552LLU;

	t59 = ((x341<=x342)|(x343*x344));

	if (t59 != 18446744073707501158LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x345 = 41;
	uint32_t x347 = 3374224U;
	uint64_t x348 = 48038547954816LLU;
	volatile uint64_t t60 = 3998LLU;

	t60 = ((x345<=x346)|(x347*x348));

	if (t60 != 14518868844614649856LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = -2343;
	volatile uint64_t x351 = 19824462326520LLU;
	uint64_t t61 = 3045127620LLU;

	t61 = ((x349<=x350)|(x351*x352));

	if (t61 != 18444206542531757057LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x354 = INT64_MAX;
	uint32_t x355 = 707634391U;
	volatile int8_t x356 = -1;

	t62 = ((x353<=x354)|(x355*x356));

	if (t62 != 3587332905U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x357 = INT64_MAX;
	volatile uint16_t x360 = 21571U;

	t63 = ((x357<=x358)|(x359*x360));

	if (t63 != 21571LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x365 = 591899713;
	uint64_t x366 = 156706LLU;
	volatile int8_t x367 = INT8_MAX;
	static int8_t x368 = -1;
	volatile int32_t t64 = 0;

	t64 = ((x365<=x366)|(x367*x368));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x379 = 93315U;
	uint32_t x380 = UINT32_MAX;

	t65 = ((x377<=x378)|(x379*x380));

	if (t65 != 4294873981U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x381 = INT8_MIN;
	volatile int32_t x382 = 193656;
	volatile uint64_t x383 = 354586277628932720LLU;
	static volatile uint64_t t66 = 134170045200LLU;

	t66 = ((x381<=x382)|(x383*x384));

	if (t66 != 6357780086305638433LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x385 = INT8_MAX;
	volatile int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	int32_t t67 = -931096;

	t67 = ((x385<=x386)|(x387*x388));

	if (t67 != 8355585) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x389 = INT32_MIN;
	uint32_t x390 = 44425U;
	uint16_t x391 = 8U;
	static int64_t x392 = 9991LL;
	static volatile int64_t t68 = 69727626201176LL;

	t68 = ((x389<=x390)|(x391*x392));

	if (t68 != 79928LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x394 = -1;
	uint64_t x395 = 5245460651LLU;
	volatile uint64_t t69 = 737552321LLU;

	t69 = ((x393<=x394)|(x395*x396));

	if (t69 != 5245460651LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x397 = 252U;
	int16_t x399 = -4834;
	int8_t x400 = INT8_MIN;
	int32_t t70 = 10775;

	t70 = ((x397<=x398)|(x399*x400));

	if (t70 != 618753) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x401 = 0U;
	static uint16_t x402 = UINT16_MAX;
	uint8_t x403 = 34U;
	uint8_t x404 = 6U;
	volatile int32_t t71 = -3;

	t71 = ((x401<=x402)|(x403*x404));

	if (t71 != 205) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x409 = INT8_MIN;
	int32_t x410 = -106879307;
	static uint8_t x411 = 84U;
	static volatile uint16_t x412 = 3U;
	int32_t t72 = 0;

	t72 = ((x409<=x410)|(x411*x412));

	if (t72 != 252) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x413 = 1811574344LLU;
	int16_t x414 = 12605;
	uint64_t x415 = UINT64_MAX;
	static int32_t x416 = -1;
	uint64_t t73 = 221059LLU;

	t73 = ((x413<=x414)|(x415*x416));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x417 = 139U;
	uint32_t x419 = 3424289U;
	uint32_t t74 = 88377725U;

	t74 = ((x417<=x418)|(x419*x420));

	if (t74 != 4291543007U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x421 = -1LL;
	int16_t x423 = INT16_MIN;
	volatile uint32_t x424 = 10986U;
	uint32_t t75 = 2U;

	t75 = ((x421<=x422)|(x423*x424));

	if (t75 != 3934978048U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x425 = -14;
	static int16_t x427 = 26;
	uint8_t x428 = 1U;
	int32_t t76 = -637498;

	t76 = ((x425<=x426)|(x427*x428));

	if (t76 != 27) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x429 = -1LL;
	volatile int32_t x430 = INT32_MAX;
	uint32_t x431 = 8819541U;
	uint8_t x432 = 0U;
	uint32_t t77 = 459U;

	t77 = ((x429<=x430)|(x431*x432));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x433 = -1;
	int32_t x434 = INT32_MIN;
	int32_t x435 = -27990856;
	int64_t x436 = -1LL;
	volatile int64_t t78 = -9LL;

	t78 = ((x433<=x434)|(x435*x436));

	if (t78 != 27990856LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x441 = INT16_MIN;
	int32_t x442 = -773;
	uint32_t x443 = UINT32_MAX;
	uint8_t x444 = 1U;
	uint32_t t79 = UINT32_MAX;

	t79 = ((x441<=x442)|(x443*x444));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = -1225;
	int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	uint8_t x448 = 50U;

	t80 = ((x445<=x446)|(x447*x448));

	if (t80 != -1638400) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x462 = INT32_MIN;
	int64_t x463 = -1LL;
	volatile int64_t t81 = 1LL;

	t81 = ((x461<=x462)|(x463*x464));

	if (t81 != -32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x465 = -541124203;
	int32_t x466 = INT32_MIN;
	int16_t x468 = INT16_MIN;
	volatile uint64_t t82 = 1920963482LLU;

	t82 = ((x465<=x466)|(x467*x468));

	if (t82 != 18428290463562530816LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x469 = INT32_MAX;
	volatile int64_t x470 = -1LL;
	static int8_t x471 = INT8_MIN;
	uint32_t x472 = UINT32_MAX;

	t83 = ((x469<=x470)|(x471*x472));

	if (t83 != 128U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x477 = 0U;
	static volatile int16_t x478 = INT16_MAX;
	int8_t x479 = -1;
	volatile int8_t x480 = INT8_MIN;
	int32_t t84 = -1602020;

	t84 = ((x477<=x478)|(x479*x480));

	if (t84 != 129) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x491 = UINT8_MAX;
	static int64_t x492 = 2126LL;
	volatile int64_t t85 = -657104353947LL;

	t85 = ((x489<=x490)|(x491*x492));

	if (t85 != 542130LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x493 = 12U;
	int8_t x494 = INT8_MAX;
	int8_t x495 = INT8_MIN;
	int32_t t86 = -21;

	t86 = ((x493<=x494)|(x495*x496));

	if (t86 != 16385) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x501 = 1691419;
	uint16_t x502 = UINT16_MAX;
	int8_t x504 = INT8_MIN;
	int64_t t87 = 157237LL;

	t87 = ((x501<=x502)|(x503*x504));

	if (t87 != 69248LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x505 = 7663589U;
	uint8_t x507 = 3U;
	volatile int64_t x508 = -1LL;

	t88 = ((x505<=x506)|(x507*x508));

	if (t88 != -3LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x513 = INT32_MIN;
	uint16_t x514 = UINT16_MAX;
	int32_t x515 = -1;
	static uint16_t x516 = UINT16_MAX;
	volatile int32_t t89 = -37;

	t89 = ((x513<=x514)|(x515*x516));

	if (t89 != -65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x521 = 77U;
	uint8_t x522 = 43U;
	uint64_t x523 = 1LLU;
	int32_t x524 = -8819;

	t90 = ((x521<=x522)|(x523*x524));

	if (t90 != 18446744073709542797LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x525 = INT32_MIN;
	static int64_t x526 = INT64_MIN;
	static uint16_t x527 = 20264U;
	uint64_t x528 = 128038231640LLU;
	volatile uint64_t t91 = 31609556LLU;

	t91 = ((x525<=x526)|(x527*x528));

	if (t91 != 2594566725952960LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x529 = 3135LL;
	volatile uint32_t x530 = 7385U;
	int8_t x532 = INT8_MIN;
	uint32_t t92 = 92U;

	t92 = ((x529<=x530)|(x531*x532));

	if (t92 != 129U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x533 = -1;
	int64_t x534 = -1LL;
	static int32_t x536 = -214;

	t93 = ((x533<=x534)|(x535*x536));

	if (t93 != 66005561978499LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x541 = 0LL;
	int16_t x542 = INT16_MIN;
	int64_t x543 = 0LL;
	int32_t x544 = -1;

	t94 = ((x541<=x542)|(x543*x544));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x545 = 59U;
	int8_t x547 = -1;
	int16_t x548 = INT16_MIN;
	int32_t t95 = 29216;

	t95 = ((x545<=x546)|(x547*x548));

	if (t95 != 32769) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x549 = INT64_MIN;
	static uint32_t x550 = 11745U;
	uint64_t x551 = 11LLU;
	int16_t x552 = INT16_MIN;
	volatile uint64_t t96 = 1886529001LLU;

	t96 = ((x549<=x550)|(x551*x552));

	if (t96 != 18446744073709191169LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x558 = -1;
	volatile uint32_t x559 = 15363U;
	static uint8_t x560 = 5U;

	t97 = ((x557<=x558)|(x559*x560));

	if (t97 != 76815U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x561 = INT32_MIN;
	uint64_t x562 = UINT64_MAX;
	int64_t x563 = -1LL;
	static int8_t x564 = INT8_MAX;
	static volatile int64_t t98 = 100024LL;

	t98 = ((x561<=x562)|(x563*x564));

	if (t98 != -127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x566 = 10;
	int16_t x567 = INT16_MIN;
	int8_t x568 = -1;
	int32_t t99 = -110;

	t99 = ((x565<=x566)|(x567*x568));

	if (t99 != 32769) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

