#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 4U;
int64_t x17 = INT64_MAX;
static int32_t x18 = INT32_MIN;
int16_t x29 = -111;
int64_t x30 = INT64_MAX;
static int64_t x31 = INT64_MIN;
volatile uint8_t x49 = UINT8_MAX;
int16_t x61 = 3065;
int16_t x62 = INT16_MIN;
volatile int32_t x64 = 3;
int64_t x71 = -134320228988525141LL;
volatile uint32_t x74 = 5U;
volatile int64_t t9 = -251349882181LL;
uint64_t x78 = 28914853LLU;
int16_t x86 = -1;
int8_t x88 = INT8_MIN;
volatile uint64_t t11 = 4440270542256785769LLU;
volatile uint16_t x100 = UINT16_MAX;
uint8_t x104 = UINT8_MAX;
int32_t x135 = INT32_MIN;
volatile uint32_t x136 = 1067072U;
uint32_t x137 = UINT32_MAX;
volatile int64_t t20 = -3LL;
static int8_t x153 = -51;
uint16_t x156 = UINT16_MAX;
volatile int8_t x172 = INT8_MIN;
volatile int64_t t26 = 7042372846LL;
static volatile uint8_t x177 = 5U;
static volatile int64_t x179 = INT64_MAX;
uint64_t x181 = UINT64_MAX;
volatile uint64_t x194 = 515388039079311132LLU;
static volatile int8_t x196 = -1;
uint64_t t31 = 27LLU;
uint32_t x202 = 21U;
volatile uint32_t t32 = 835194009U;
static uint32_t x211 = 619132423U;
static uint8_t x219 = 3U;
uint16_t x222 = 42U;
int8_t x225 = INT8_MAX;
int16_t x230 = INT16_MAX;
static uint16_t x240 = 1296U;
uint16_t x248 = 700U;
uint32_t x255 = UINT32_MAX;
int8_t x259 = INT8_MIN;
volatile int32_t t45 = -405;
volatile uint16_t x280 = 11378U;
static int16_t x284 = -1;
volatile uint8_t x298 = 112U;
uint16_t x300 = UINT16_MAX;
uint8_t x317 = 121U;
int32_t x321 = INT32_MIN;
volatile int32_t t58 = 0;
static int64_t x351 = INT64_MIN;
volatile int64_t t59 = -1018069336568LL;
static int64_t t60 = -1LL;
uint32_t x372 = UINT32_MAX;
static int64_t x373 = INT64_MIN;
uint32_t x376 = 35473U;
int8_t x385 = INT8_MIN;
uint32_t x386 = 1929192427U;
int64_t x394 = -1LL;
int64_t t65 = -29403886991LL;
uint16_t x398 = 1U;
int32_t x400 = INT32_MAX;
volatile uint64_t x401 = 101048LLU;
static uint32_t x407 = UINT32_MAX;
uint8_t x409 = 102U;
uint8_t x411 = 110U;
int32_t x420 = -110504322;
volatile int8_t x423 = -1;
int16_t x425 = INT16_MIN;
static volatile int64_t x427 = INT64_MAX;
int64_t t73 = -3615688LL;
int16_t x430 = 1;
int64_t x431 = -1LL;
volatile int64_t t74 = -3496626LL;
volatile uint8_t x443 = 7U;
uint16_t x450 = 15U;
int32_t x453 = -1;
volatile int32_t t78 = -144407735;
int16_t x465 = 10;
volatile uint64_t x467 = 37770416082665989LLU;
uint64_t x473 = 28517767127760912LLU;
volatile int64_t x476 = -1LL;
int16_t x477 = -14912;
int16_t x478 = 0;
uint8_t x487 = UINT8_MAX;
int32_t x488 = -1;
uint32_t x490 = UINT32_MAX;
uint16_t x492 = UINT16_MAX;
int64_t t84 = 411235405LL;
volatile uint32_t x502 = UINT32_MAX;
volatile int32_t x511 = -1;
volatile uint8_t x514 = 36U;
volatile uint8_t x524 = 62U;
uint64_t t92 = 31424005911LLU;
uint16_t x531 = 17U;
uint16_t x533 = 0U;
int32_t x536 = INT32_MIN;
int32_t x539 = INT32_MIN;
int16_t x541 = 2;
int16_t x545 = -1;


void f0(void) {
	static uint16_t x2 = 12U;
	int32_t x3 = -963648146;
	static volatile uint8_t x4 = 63U;
	int32_t t0 = 611860;

	t0 = (((x1+x2)&x3)-x4);

	if (t0 != -63) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x19 = INT16_MIN;
	uint64_t x20 = 450506807544723859LLU;
	uint64_t t1 = 6LLU;

	t1 = (((x17+x18)&x19)-x20);

	if (t1 != 8772865227162535533LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x25 = 0U;
	int16_t x26 = -1;
	volatile uint64_t x27 = 3668992564325808LLU;
	volatile int8_t x28 = INT8_MAX;
	static uint64_t t2 = 1011802996378818648LLU;

	t2 = (((x25+x26)&x27)-x28);

	if (t2 != 3668992564325681LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x32 = INT16_MAX;
	int64_t t3 = -2286008850240991186LL;

	t3 = (((x29+x30)&x31)-x32);

	if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x50 = 2809289LL;
	static uint8_t x51 = 3U;
	uint32_t x52 = UINT32_MAX;
	int64_t t4 = -3069568468LL;

	t4 = (((x49+x50)&x51)-x52);

	if (t4 != -4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x53 = 240978593U;
	int64_t x54 = 1LL;
	volatile int8_t x55 = -51;
	uint8_t x56 = 0U;
	static int64_t t5 = -1261064LL;

	t5 = (((x53+x54)&x55)-x56);

	if (t5 != 240978560LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x63 = -90;
	volatile int32_t t6 = -1144;

	t6 = (((x61+x62)&x63)-x64);

	if (t6 != -29795) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = INT16_MAX;
	volatile int32_t x68 = -1;
	static int32_t t7 = -17;

	t7 = (((x65+x66)&x67)-x68);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x69 = INT64_MIN;
	static uint16_t x70 = 34U;
	volatile int32_t x72 = INT32_MIN;
	int64_t t8 = -45412228834LL;

	t8 = (((x69+x70)&x71)-x72);

	if (t8 != -9223372034707292126LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = 453;
	static int64_t x75 = INT64_MAX;
	int16_t x76 = -1;

	t9 = (((x73+x74)&x75)-x76);

	if (t9 != 459LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x77 = 321819U;
	int16_t x79 = -1;
	static int16_t x80 = INT16_MIN;
	volatile uint64_t t10 = 194356132LLU;

	t10 = (((x77+x78)&x79)-x80);

	if (t10 != 29269440LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x87 = 167337LLU;

	t11 = (((x85+x86)&x87)-x88);

	if (t11 != 134697LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x93 = INT16_MAX;
	static int16_t x94 = INT16_MIN;
	static volatile uint64_t x95 = 60734555930LLU;
	static volatile int16_t x96 = 3;
	uint64_t t12 = 18144913LLU;

	t12 = (((x93+x94)&x95)-x96);

	if (t12 != 60734555927LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x97 = -177932570LL;
	int64_t x98 = 1765506LL;
	static int8_t x99 = -26;
	int64_t t13 = -448927LL;

	t13 = (((x97+x98)&x99)-x100);

	if (t13 != -176232607LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x101 = 1077980401493LL;
	uint8_t x102 = 3U;
	uint16_t x103 = UINT16_MAX;
	volatile int64_t t14 = -6451338598147LL;

	t14 = (((x101+x102)&x103)-x104);

	if (t14 != 36441LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 84U;
	volatile int32_t x111 = -1;
	int64_t x112 = -1LL;
	static volatile int64_t t15 = -1474LL;

	t15 = (((x109+x110)&x111)-x112);

	if (t15 != 65620LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x121 = -13;
	int16_t x122 = INT16_MAX;
	static int8_t x123 = -13;
	volatile int16_t x124 = INT16_MIN;
	static int32_t t16 = -6;

	t16 = (((x121+x122)&x123)-x124);

	if (t16 != 65522) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x133 = 5994LL;
	int32_t x134 = INT32_MIN;
	volatile int64_t t17 = -1194565697028334LL;

	t17 = (((x133+x134)&x135)-x136);

	if (t17 != -2148550720LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x138 = INT64_MIN;
	volatile int64_t x139 = -1820LL;
	int16_t x140 = 902;
	volatile int64_t t18 = -199646951491LL;

	t18 = (((x137+x138)&x139)-x140);

	if (t18 != -9223372032559811234LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x141 = INT8_MIN;
	uint32_t x142 = 105U;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = UINT16_MAX;
	volatile uint32_t t19 = 67735488U;

	t19 = (((x141+x142)&x143)-x144);

	if (t19 != 2147418113U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x145 = 8U;
	static int64_t x146 = INT64_MIN;
	int16_t x147 = 7306;
	uint32_t x148 = UINT32_MAX;

	t20 = (((x145+x146)&x147)-x148);

	if (t20 != -4294967287LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x149 = -1;
	uint64_t x150 = 7961046881320271325LLU;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MAX;
	volatile uint64_t t21 = 12759467LLU;

	t21 = (((x149+x150)&x151)-x152);

	if (t21 != 7961046881320238977LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x154 = UINT32_MAX;
	int16_t x155 = 25;
	volatile uint32_t t22 = 6889U;

	t22 = (((x153+x154)&x155)-x156);

	if (t22 != 4294901769U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x157 = -1860;
	int64_t x158 = 42809LL;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;
	uint64_t t23 = 473LLU;

	t23 = (((x157+x158)&x159)-x160);

	if (t23 != 9223372036854816757LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x161 = -1;
	int8_t x162 = -2;
	volatile uint32_t x163 = UINT32_MAX;
	volatile int32_t x164 = -678058662;
	volatile uint32_t t24 = 516438987U;

	t24 = (((x161+x162)&x163)-x164);

	if (t24 != 678058659U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x165 = 3311U;
	int16_t x166 = 28;
	int64_t x167 = -6058197LL;
	uint64_t x168 = UINT64_MAX;
	uint64_t t25 = 496306547713LLU;

	t25 = (((x165+x166)&x167)-x168);

	if (t25 != 3340LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x169 = UINT8_MAX;
	uint8_t x170 = UINT8_MAX;
	int64_t x171 = -1LL;

	t26 = (((x169+x170)&x171)-x172);

	if (t26 != 638LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x178 = INT8_MIN;
	static int16_t x180 = INT16_MAX;
	int64_t t27 = 7LL;

	t27 = (((x177+x178)&x179)-x180);

	if (t27 != 9223372036854742918LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x182 = INT64_MAX;
	volatile int16_t x183 = INT16_MIN;
	uint64_t x184 = 91LLU;
	volatile uint64_t t28 = 2LLU;

	t28 = (((x181+x182)&x183)-x184);

	if (t28 != 9223372036854742949LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x189 = 931829470;
	uint64_t x190 = 269835078156259122LLU;
	int32_t x191 = -4;
	static int32_t x192 = INT32_MAX;
	volatile uint64_t t29 = 6LLU;

	t29 = (((x189+x190)&x191)-x192);

	if (t29 != 269835076940604945LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x193 = INT64_MAX;
	int32_t x195 = 0;
	volatile uint64_t t30 = 5852551821600296LLU;

	t30 = (((x193+x194)&x195)-x196);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x197 = 4172457968415457579LLU;
	static int16_t x198 = -1;
	uint8_t x199 = 9U;
	int64_t x200 = INT64_MAX;

	t31 = (((x197+x198)&x199)-x200);

	if (t31 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x201 = UINT16_MAX;
	uint8_t x203 = 1U;
	static int32_t x204 = INT32_MAX;

	t32 = (((x201+x202)&x203)-x204);

	if (t32 != 2147483649U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x205 = 4364049748093369158LL;
	int16_t x206 = 0;
	int8_t x207 = -5;
	volatile int8_t x208 = INT8_MAX;
	volatile int64_t t33 = -5892299129514651LL;

	t33 = (((x205+x206)&x207)-x208);

	if (t33 != 4364049748093369027LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	volatile int64_t t34 = 7424123586910402LL;

	t34 = (((x209+x210)&x211)-x212);

	if (t34 != 2147483655LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x217 = INT32_MAX;
	int64_t x218 = -1LL;
	static int32_t x220 = -16726800;
	volatile int64_t t35 = 4862077LL;

	t35 = (((x217+x218)&x219)-x220);

	if (t35 != 16726802LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x221 = 2834U;
	uint16_t x223 = 4U;
	uint8_t x224 = 1U;
	static uint32_t t36 = 17694789U;

	t36 = (((x221+x222)&x223)-x224);

	if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x226 = UINT8_MAX;
	static int16_t x227 = 0;
	int64_t x228 = -833736989437807LL;
	int64_t t37 = -2349884LL;

	t37 = (((x225+x226)&x227)-x228);

	if (t37 != 833736989437807LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x231 = -1;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t38 = 387403511;

	t38 = (((x229+x230)&x231)-x232);

	if (t38 != -32513) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x233 = 56;
	static int8_t x234 = -1;
	static uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t39 = 989;

	t39 = (((x233+x234)&x235)-x236);

	if (t39 != -32712) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x237 = 1607U;
	uint8_t x238 = 113U;
	uint64_t x239 = 65914521889619353LLU;
	uint64_t t40 = 10LLU;

	t40 = (((x237+x238)&x239)-x240);

	if (t40 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x241 = -6;
	int16_t x242 = -1;
	static int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MAX;
	volatile int32_t t41 = -264661347;

	t41 = (((x241+x242)&x243)-x244);

	if (t41 != -32895) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x245 = 78U;
	static volatile int32_t x246 = 713091;
	int8_t x247 = -1;
	volatile int32_t t42 = -28;

	t42 = (((x245+x246)&x247)-x248);

	if (t42 != 712469) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x249 = -1LL;
	uint16_t x250 = 57U;
	int8_t x251 = -1;
	int64_t x252 = 1LL;
	int64_t t43 = 2786669058952LL;

	t43 = (((x249+x250)&x251)-x252);

	if (t43 != 55LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x253 = INT32_MIN;
	static uint16_t x254 = UINT16_MAX;
	volatile int8_t x256 = -23;
	uint32_t t44 = 147219735U;

	t44 = (((x253+x254)&x255)-x256);

	if (t44 != 2147549206U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MAX;
	int32_t x260 = INT32_MIN;

	t45 = (((x257+x258)&x259)-x260);

	if (t45 != 2147483520) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x261 = 0U;
	int16_t x262 = INT16_MAX;
	int8_t x263 = INT8_MIN;
	static int32_t x264 = -428;
	volatile int32_t t46 = -51611668;

	t46 = (((x261+x262)&x263)-x264);

	if (t46 != 33068) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x269 = 55U;
	uint64_t x270 = 114LLU;
	int32_t x271 = -1;
	volatile int16_t x272 = 7539;
	static volatile uint64_t t47 = 122487478347749LLU;

	t47 = (((x269+x270)&x271)-x272);

	if (t47 != 18446744073709544246LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MAX;
	uint16_t x275 = UINT16_MAX;
	static int16_t x276 = -1;
	int64_t t48 = 42LL;

	t48 = (((x273+x274)&x275)-x276);

	if (t48 != 32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x277 = -1;
	int8_t x278 = INT8_MAX;
	static uint8_t x279 = 1U;
	volatile int32_t t49 = -366959419;

	t49 = (((x277+x278)&x279)-x280);

	if (t49 != -11378) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x281 = UINT64_MAX;
	int8_t x282 = -8;
	int64_t x283 = 1LL;
	volatile uint64_t t50 = 171521008981146273LLU;

	t50 = (((x281+x282)&x283)-x284);

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x289 = INT32_MAX;
	static int32_t x290 = -129;
	static int32_t x291 = -56538308;
	volatile int16_t x292 = INT16_MIN;
	static int32_t t51 = 112990517;

	t51 = (((x289+x290)&x291)-x292);

	if (t51 != 2090978108) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = UINT16_MAX;
	static volatile uint16_t x299 = 3131U;
	volatile int32_t t52 = -601;

	t52 = (((x297+x298)&x299)-x300);

	if (t52 != -65492) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x309 = -7;
	volatile uint16_t x310 = 3U;
	int64_t x311 = INT64_MAX;
	uint64_t x312 = 380569LLU;
	uint64_t t53 = 153895942LLU;

	t53 = (((x309+x310)&x311)-x312);

	if (t53 != 9223372036854395235LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x313 = -1;
	int32_t x314 = INT32_MAX;
	static uint16_t x315 = 1663U;
	volatile int16_t x316 = -1;
	int32_t t54 = 9447;

	t54 = (((x313+x314)&x315)-x316);

	if (t54 != 1663) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = -6;
	static uint8_t x320 = 1U;
	static int32_t t55 = 961697189;

	t55 = (((x317+x318)&x319)-x320);

	if (t55 != 375) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x322 = 41U;
	int8_t x323 = INT8_MIN;
	volatile int64_t x324 = 86251330LL;
	int64_t t56 = 8639062LL;

	t56 = (((x321+x322)&x323)-x324);

	if (t56 != -2233734978LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x325 = 3280070LLU;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = 6U;
	uint64_t t57 = 4088379460LLU;

	t57 = (((x325+x326)&x327)-x328);

	if (t57 != 3264LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x341 = 0;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = 0;
	static int8_t x344 = -1;

	t58 = (((x341+x342)&x343)-x344);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x349 = INT32_MAX;
	int16_t x350 = -1;
	int32_t x352 = INT32_MIN;

	t59 = (((x349+x350)&x351)-x352);

	if (t59 != 2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x365 = INT64_MIN;
	int64_t x366 = 422101707864249LL;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;

	t60 = (((x365+x366)&x367)-x368);

	if (t60 != -9222949935146926335LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x369 = -1;
	static volatile uint32_t x370 = UINT32_MAX;
	volatile int64_t x371 = INT64_MIN;
	int64_t t61 = 139387303319LL;

	t61 = (((x369+x370)&x371)-x372);

	if (t61 != -4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x374 = 777U;
	int8_t x375 = 0;
	volatile int64_t t62 = -839900LL;

	t62 = (((x373+x374)&x375)-x376);

	if (t62 != -35473LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile uint32_t t63 = 18U;

	t63 = (((x385+x386)&x387)-x388);

	if (t63 != 4076675947U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x389 = -221800;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 232914407143127LLU;
	int32_t x392 = -1;
	uint64_t t64 = 14483685558500LLU;

	t64 = (((x389+x390)&x391)-x392);

	if (t64 != 232914407134225LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x393 = INT8_MIN;
	int32_t x395 = -1;
	int32_t x396 = INT32_MIN;

	t65 = (((x393+x394)&x395)-x396);

	if (t65 != 2147483519LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x397 = 0;
	int32_t x399 = INT32_MAX;
	int32_t t66 = 79;

	t66 = (((x397+x398)&x399)-x400);

	if (t66 != -2147483646) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x402 = -3;
	int16_t x403 = 1;
	volatile uint64_t x404 = 3607189863513LLU;
	uint64_t t67 = 1LLU;

	t67 = (((x401+x402)&x403)-x404);

	if (t67 != 18446740466519688104LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x405 = -19;
	static volatile uint32_t x406 = 5U;
	uint32_t x408 = 6U;
	volatile uint32_t t68 = 1644U;

	t68 = (((x405+x406)&x407)-x408);

	if (t68 != 4294967276U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x410 = UINT16_MAX;
	uint32_t x412 = 1569638250U;
	volatile uint32_t t69 = 266765U;

	t69 = (((x409+x410)&x411)-x412);

	if (t69 != 2725329146U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x413 = UINT64_MAX;
	static int16_t x414 = INT16_MIN;
	static int64_t x415 = -1LL;
	static int16_t x416 = -10;
	uint64_t t70 = 182778444924LLU;

	t70 = (((x413+x414)&x415)-x416);

	if (t70 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x417 = INT8_MIN;
	volatile int64_t x418 = INT64_MAX;
	int64_t x419 = -89482629819442571LL;
	static int64_t t71 = 129161811233397046LL;

	t71 = (((x417+x418)&x419)-x420);

	if (t71 != 9133889407145837559LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x421 = 0;
	int16_t x422 = INT16_MAX;
	int16_t x424 = -4;
	volatile int32_t t72 = 52;

	t72 = (((x421+x422)&x423)-x424);

	if (t72 != 32771) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x426 = INT64_MAX;
	uint32_t x428 = 7317336U;

	t73 = (((x425+x426)&x427)-x428);

	if (t73 != 9223372036847425703LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x429 = UINT32_MAX;
	int64_t x432 = -127LL;

	t74 = (((x429+x430)&x431)-x432);

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x433 = UINT32_MAX;
	uint64_t x434 = UINT64_MAX;
	static int32_t x435 = -1;
	int8_t x436 = INT8_MAX;
	uint64_t t75 = 16830630354LLU;

	t75 = (((x433+x434)&x435)-x436);

	if (t75 != 4294967167LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x441 = INT16_MAX;
	uint32_t x442 = 12503213U;
	volatile uint32_t x444 = 1097816274U;
	uint32_t t76 = 0U;

	t76 = (((x441+x442)&x443)-x444);

	if (t76 != 3197151026U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x449 = -1;
	int32_t x451 = INT32_MAX;
	int16_t x452 = INT16_MIN;
	static int32_t t77 = 1943;

	t77 = (((x449+x450)&x451)-x452);

	if (t77 != 32782) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x454 = 0U;
	int8_t x455 = -45;
	int16_t x456 = INT16_MAX;

	t78 = (((x453+x454)&x455)-x456);

	if (t78 != -32812) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x457 = INT8_MIN;
	int8_t x458 = 0;
	static uint32_t x459 = UINT32_MAX;
	volatile int16_t x460 = INT16_MAX;
	static volatile uint32_t t79 = 2860U;

	t79 = (((x457+x458)&x459)-x460);

	if (t79 != 4294934401U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x466 = INT8_MAX;
	int8_t x468 = 0;
	static volatile uint64_t t80 = 559155032837091LLU;

	t80 = (((x465+x466)&x467)-x468);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x474 = INT8_MIN;
	int8_t x475 = INT8_MIN;
	static volatile uint64_t t81 = 945LLU;

	t81 = (((x473+x474)&x475)-x476);

	if (t81 != 28517767127760769LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x479 = 44;
	static int64_t x480 = INT64_MAX;
	int64_t t82 = 7821628LL;

	t82 = (((x477+x478)&x479)-x480);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x485 = 150001113890LLU;
	static int8_t x486 = 8;
	volatile uint64_t t83 = 29107276672LLU;

	t83 = (((x485+x486)&x487)-x488);

	if (t83 != 43LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x489 = 34U;
	int64_t x491 = 812842638564LL;

	t84 = (((x489+x490)&x491)-x492);

	if (t84 != -65503LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x493 = INT8_MIN;
	static int16_t x494 = 0;
	uint8_t x495 = 4U;
	volatile int32_t x496 = -1;
	volatile int32_t t85 = -87623;

	t85 = (((x493+x494)&x495)-x496);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x497 = 26U;
	int32_t x498 = -8904;
	int8_t x499 = INT8_MIN;
	volatile int64_t x500 = -155765567LL;
	int64_t t86 = 359876681553LL;

	t86 = (((x497+x498)&x499)-x500);

	if (t86 != 155756607LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x501 = 4;
	volatile int8_t x503 = INT8_MAX;
	uint16_t x504 = 227U;
	uint32_t t87 = 1446399908U;

	t87 = (((x501+x502)&x503)-x504);

	if (t87 != 4294967072U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x505 = 9;
	int16_t x506 = INT16_MAX;
	int64_t x507 = -42684281LL;
	int16_t x508 = -1;
	int64_t t88 = -20099774LL;

	t88 = (((x505+x506)&x507)-x508);

	if (t88 != 32769LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x509 = 15U;
	int32_t x510 = -1;
	int16_t x512 = INT16_MIN;
	static volatile int32_t t89 = -571138924;

	t89 = (((x509+x510)&x511)-x512);

	if (t89 != 32782) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x513 = 965246881304LLU;
	int64_t x515 = -90278424403112238LL;
	uint16_t x516 = 169U;
	uint64_t t90 = 30032759184667961LLU;

	t90 = (((x513+x514)&x515)-x516);

	if (t90 != 275214634343LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x521 = 6LLU;
	int16_t x522 = -1;
	int32_t x523 = INT32_MAX;
	volatile uint64_t t91 = 289653LLU;

	t91 = (((x521+x522)&x523)-x524);

	if (t91 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x525 = UINT64_MAX;
	uint64_t x526 = 2891868031623199517LLU;
	uint32_t x527 = UINT32_MAX;
	int64_t x528 = INT64_MIN;

	t92 = (((x525+x526)&x527)-x528);

	if (t92 != 9223372037562923804LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x529 = UINT16_MAX;
	uint8_t x530 = 64U;
	uint16_t x532 = UINT16_MAX;
	volatile int32_t t93 = -24623;

	t93 = (((x529+x530)&x531)-x532);

	if (t93 != -65518) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x534 = -1;
	int16_t x535 = -2;
	int32_t t94 = 4521772;

	t94 = (((x533+x534)&x535)-x536);

	if (t94 != 2147483646) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x537 = INT64_MIN;
	static uint64_t x538 = 9139548567548300547LLU;
	int64_t x540 = 22LL;
	uint64_t t95 = 1580LLU;

	t95 = (((x537+x538)&x539)-x540);

	if (t95 != 18362920603595309034LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x542 = UINT64_MAX;
	int64_t x543 = 3855831LL;
	int64_t x544 = INT64_MAX;
	volatile uint64_t t96 = 794LLU;

	t96 = (((x541+x542)&x543)-x544);

	if (t96 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x546 = -1;
	int8_t x547 = INT8_MIN;
	static int16_t x548 = INT16_MIN;
	volatile int32_t t97 = 46;

	t97 = (((x545+x546)&x547)-x548);

	if (t97 != 32640) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x549 = 1;
	int16_t x550 = INT16_MIN;
	volatile int16_t x551 = INT16_MIN;
	volatile int8_t x552 = 0;
	int32_t t98 = 1;

	t98 = (((x549+x550)&x551)-x552);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x553 = -1LL;
	uint64_t x554 = 6930180LLU;
	static uint16_t x555 = 8245U;
	volatile int8_t x556 = INT8_MIN;
	volatile uint64_t t99 = 19858852503678LLU;

	t99 = (((x553+x554)&x555)-x556);

	if (t99 != 8321LLU) { NG(); } else { ; }
	
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

