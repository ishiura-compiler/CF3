#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = -35;
uint16_t x8 = 30U;
uint32_t x27 = UINT32_MAX;
static int64_t x38 = INT64_MIN;
uint64_t x39 = UINT64_MAX;
int32_t x41 = -1422;
static int8_t x52 = -1;
uint32_t x55 = 52074U;
uint32_t x71 = 11U;
int8_t x72 = INT8_MIN;
int64_t x77 = -1403843LL;
volatile uint32_t t13 = 932070U;
volatile int64_t x87 = -1853753167430307394LL;
static volatile int64_t t14 = 297518248955934077LL;
volatile int64_t x90 = INT64_MIN;
static int8_t x102 = INT8_MIN;
int8_t x115 = INT8_MAX;
uint32_t t20 = 1114240677U;
uint16_t x121 = 104U;
uint64_t x124 = UINT64_MAX;
uint32_t x126 = 7469273U;
volatile int64_t t23 = -211448766LL;
uint64_t t24 = 16447239474726936LLU;
int32_t x142 = INT32_MIN;
volatile int16_t x149 = -36;
int16_t x151 = INT16_MIN;
uint64_t x154 = UINT64_MAX;
uint64_t t28 = 61114LLU;
int8_t x163 = INT8_MAX;
uint64_t x164 = 1738LLU;
uint64_t t30 = 8059690256LLU;
int32_t x166 = -1;
uint64_t x170 = 323890LLU;
int16_t x174 = -1;
uint32_t x176 = 14U;
int8_t x191 = -1;
volatile uint64_t x192 = 3292246614575286251LLU;
static uint64_t x203 = 28487025LLU;
int16_t x211 = -289;
static int8_t x215 = INT8_MIN;
uint16_t x225 = 423U;
uint64_t x227 = UINT64_MAX;
static uint64_t t41 = 5476LLU;
static int64_t t42 = 107720409795742LL;
uint16_t x247 = 4U;
int64_t x250 = -367296868092328LL;
int16_t x257 = INT16_MIN;
int64_t x260 = -1462950LL;
uint64_t x261 = UINT64_MAX;
static int32_t x263 = 2558;
volatile uint64_t t49 = 4250807427LLU;
volatile int8_t x272 = 26;
volatile int32_t x276 = -2400344;
uint16_t x285 = UINT16_MAX;
int8_t x290 = -1;
int64_t t53 = -493806308LL;
int32_t x302 = -857;
int64_t x325 = -1LL;
static uint16_t x327 = 7230U;
int64_t x331 = INT64_MAX;
static uint16_t x333 = 427U;
static int64_t x337 = -1799937717051798070LL;
int16_t x339 = INT16_MAX;
int16_t x340 = INT16_MAX;
volatile uint64_t t63 = 0LLU;
int32_t x343 = -13673;
uint8_t x344 = UINT8_MAX;
static int32_t t64 = 15;
volatile int8_t x345 = -1;
static uint64_t t65 = 202286431LLU;
int16_t x353 = -60;
uint64_t x354 = UINT64_MAX;
int16_t x360 = INT16_MIN;
static volatile int16_t x361 = -620;
uint16_t x363 = 111U;
static uint64_t t69 = 341560041247170LLU;
static int16_t x366 = INT16_MIN;
static volatile uint64_t t73 = 259095879LLU;
static int8_t x387 = INT8_MIN;
volatile uint8_t x388 = 13U;
volatile int8_t x400 = INT8_MIN;
uint64_t t78 = 14350164827LLU;
int32_t x408 = -1;
int32_t x427 = INT32_MIN;
static int64_t x432 = -9248165290733725LL;
int32_t x446 = -297;
static int16_t x452 = -1;
uint64_t t86 = 6432845LLU;
static uint8_t x459 = UINT8_MAX;
uint64_t x460 = 30888546501330506LLU;
static int64_t x461 = INT64_MAX;
volatile int8_t x462 = INT8_MIN;
volatile int64_t t88 = 1539649732307748152LL;
int32_t x471 = -5;
uint32_t x495 = 749U;
int8_t x496 = INT8_MIN;
uint32_t x499 = 75245294U;
int32_t x503 = 3063;
uint64_t x509 = 4714900852560LLU;
volatile int16_t x512 = 1;
uint64_t t98 = 1720839001613595LLU;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	static int32_t x2 = INT32_MIN;
	static uint32_t x3 = UINT32_MAX;
	static int16_t x4 = -1;
	uint32_t t0 = 1U;

	t0 = (((x1%x2)^x3)*x4);

	if (t0 != 32768U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 1598184647356LLU;
	static int16_t x7 = -1;
	uint64_t t1 = 395755607025439239LLU;

	t1 = (((x5%x6)^x7)*x8);

	if (t1 != 18446700973131974956LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 7962U;
	uint8_t x10 = 3U;
	int16_t x11 = INT16_MAX;
	uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 2901443U;

	t2 = (((x9%x10)^x11)*x12);

	if (t2 != 4294934529U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;
	uint64_t t3 = 1235375480592122LLU;

	t3 = (((x13%x14)^x15)*x16);

	if (t3 != 18446743526101253761LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = -44358121779172407LL;
	uint32_t x26 = 106U;
	static uint8_t x28 = 4U;
	volatile int64_t t4 = 0LL;

	t4 = (((x25%x26)^x27)*x28);

	if (t4 != -17179868936LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x33 = 0U;
	volatile int16_t x34 = 1074;
	int16_t x35 = -31;
	volatile int64_t x36 = -1LL;
	int64_t t5 = 213LL;

	t5 = (((x33%x34)^x35)*x36);

	if (t5 != 31LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x37 = 89318LLU;
	uint16_t x40 = UINT16_MAX;
	static volatile uint64_t t6 = 7393105772LLU;

	t6 = (((x37%x38)^x39)*x40);

	if (t6 != 18446744067856030951LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x42 = INT64_MAX;
	int16_t x43 = INT16_MIN;
	volatile int16_t x44 = INT16_MAX;
	volatile int64_t t7 = 12744LL;

	t7 = (((x41%x42)^x43)*x44);

	if (t7 != 1027114382LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x45 = 1U;
	volatile uint32_t x46 = UINT32_MAX;
	uint64_t x47 = 64082749341LLU;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t8 = 28773194695LLU;

	t8 = (((x45%x46)^x47)*x48);

	if (t8 != 18446735871117636096LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -1;
	uint16_t x50 = UINT16_MAX;
	volatile int8_t x51 = INT8_MIN;
	int32_t t9 = -66484229;

	t9 = (((x49%x50)^x51)*x52);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint8_t x54 = 1U;
	int8_t x56 = 21;
	uint32_t t10 = 17437728U;

	t10 = (((x53%x54)^x55)*x56);

	if (t10 != 1093554U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x69 = UINT64_MAX;
	uint8_t x70 = 2U;
	volatile uint64_t t11 = 47LLU;

	t11 = (((x69%x70)^x71)*x72);

	if (t11 != 18446744073709550336LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x78 = UINT64_MAX;
	uint64_t x79 = UINT64_MAX;
	static int8_t x80 = INT8_MAX;
	volatile uint64_t t12 = 1LLU;

	t12 = (((x77%x78)^x79)*x80);

	if (t12 != 178287934LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = 19U;
	uint8_t x82 = 15U;
	static int8_t x83 = INT8_MIN;
	static volatile uint32_t x84 = 106062975U;

	t13 = (((x81%x82)^x83)*x84);

	if (t13 != 4028060284U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x85 = INT64_MIN;
	int64_t x86 = -1LL;
	volatile uint8_t x88 = 0U;

	t14 = (((x85%x86)^x87)*x88);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 6304LLU;
	uint64_t x91 = 1LLU;
	int32_t x92 = INT32_MAX;
	volatile uint64_t t15 = 5537175748LLU;

	t15 = (((x89%x90)^x91)*x92);

	if (t15 != 13539884394335LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x93 = INT8_MAX;
	static int16_t x94 = INT16_MAX;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = 229LLU;
	uint64_t t16 = 934681260014943LLU;

	t16 = (((x93%x94)^x95)*x96);

	if (t16 != 18446744073709551387LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = INT32_MIN;
	static int8_t x98 = 1;
	static uint8_t x99 = 5U;
	int8_t x100 = 1;
	volatile int32_t t17 = 59;

	t17 = (((x97%x98)^x99)*x100);

	if (t17 != 5) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = UINT16_MAX;
	uint8_t x103 = UINT8_MAX;
	static int32_t x104 = -1;
	int32_t t18 = 1;

	t18 = (((x101%x102)^x103)*x104);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = 0U;
	int8_t x106 = 46;
	volatile int8_t x107 = 22;
	int16_t x108 = INT16_MIN;
	static int32_t t19 = 1527;

	t19 = (((x105%x106)^x107)*x108);

	if (t19 != -720896) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = 0U;
	static int16_t x114 = INT16_MIN;
	int8_t x116 = INT8_MIN;

	t20 = (((x113%x114)^x115)*x116);

	if (t20 != 4294951040U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int8_t x118 = -1;
	int16_t x119 = -117;
	int64_t x120 = INT64_MAX;
	volatile uint64_t t21 = 14141457355513LLU;

	t21 = (((x117%x118)^x119)*x120);

	if (t21 != 9223372036854775925LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x122 = UINT32_MAX;
	static uint64_t x123 = 632186605395259LLU;
	volatile uint64_t t22 = 7LLU;

	t22 = (((x121%x122)^x123)*x124);

	if (t22 != 18446111887104156333LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x125 = 2;
	static volatile int64_t x127 = -1LL;
	static int8_t x128 = -1;

	t23 = (((x125%x126)^x127)*x128);

	if (t23 != 3LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = 99453488436749664LLU;
	static volatile int64_t x130 = -916805951LL;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;

	t24 = (((x129%x130)^x131)*x132);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x137 = UINT16_MAX;
	uint32_t x138 = 125643579U;
	volatile uint32_t x139 = 228229U;
	uint8_t x140 = 1U;
	static uint32_t t25 = 5546U;

	t25 = (((x137%x138)^x139)*x140);

	if (t25 != 230522U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	volatile int32_t x143 = 1;
	static int16_t x144 = -1;
	volatile int32_t t26 = 26;

	t26 = (((x141%x142)^x143)*x144);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x150 = -1LL;
	int16_t x152 = -111;
	volatile int64_t t27 = 35947845356155417LL;

	t27 = (((x149%x150)^x151)*x152);

	if (t27 != 3637248LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MAX;
	volatile int64_t x155 = INT64_MIN;
	static int64_t x156 = 462926713LL;

	t28 = (((x153%x154)^x155)*x156);

	if (t28 != 9223372095646468359LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x157 = 1460345U;
	static volatile uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MAX;
	static int64_t x160 = 48014LL;
	static volatile uint64_t t29 = 9LLU;

	t29 = (((x157%x158)^x159)*x160);

	if (t29 != 18446744003592498772LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	static int8_t x162 = INT8_MIN;

	t30 = (((x161%x162)^x163)*x164);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = 0U;
	static int32_t x167 = INT32_MAX;
	volatile uint32_t x168 = 3U;
	uint32_t t31 = 1724214U;

	t31 = (((x165%x166)^x167)*x168);

	if (t31 != 2147483645U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = 1916;
	int32_t x171 = -33;
	uint16_t x172 = 4819U;
	uint64_t t32 = 142200618218549515LLU;

	t32 = (((x169%x170)^x171)*x172);

	if (t32 != 18446744073700467801LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int32_t x175 = 354028552;
	uint32_t t33 = 8U;

	t33 = (((x173%x174)^x175)*x176);

	if (t33 != 661432432U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x177 = UINT8_MAX;
	volatile uint64_t x178 = 680182598633LLU;
	int8_t x179 = 1;
	int16_t x180 = INT16_MIN;
	uint64_t t34 = 523683163041LLU;

	t34 = (((x177%x178)^x179)*x180);

	if (t34 != 18446744073701228544LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = -54577LL;
	uint32_t x186 = UINT32_MAX;
	uint8_t x187 = 17U;
	volatile int8_t x188 = INT8_MAX;
	int64_t t35 = 12LL;

	t35 = (((x185%x186)^x187)*x188);

	if (t35 != -6929374LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = -1;
	volatile uint64_t t36 = 1718410359004877508LLU;

	t36 = (((x189%x190)^x191)*x192);

	if (t36 != 15154497459134265365LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MIN;
	volatile int32_t x202 = INT32_MAX;
	int8_t x204 = -1;
	uint64_t t37 = 846203LLU;

	t37 = (((x201%x202)^x203)*x204);

	if (t37 != 28487026LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x209 = -1;
	static int32_t x210 = -8976421;
	int16_t x212 = INT16_MAX;
	static int32_t t38 = 1026397425;

	t38 = (((x209%x210)^x211)*x212);

	if (t38 != 9436896) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x213 = 3806U;
	uint64_t x214 = 19973045919623721LLU;
	uint32_t x216 = 519858703U;
	volatile uint64_t t39 = 3065151799928642LLU;

	t39 = (((x213%x214)^x215)*x216);

	if (t39 != 18446742126318850178LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = INT16_MIN;
	uint64_t x222 = 496202135LLU;
	static volatile uint16_t x223 = 0U;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t40 = 13765044928256361LLU;

	t40 = (((x221%x222)^x223)*x224);

	if (t40 != 17402558919707983872LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x226 = 9U;
	int32_t x228 = 6762303;

	t41 = (((x225%x226)^x227)*x228);

	if (t41 != 18446744073702789313LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x229 = 2U;
	static int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MAX;
	int8_t x232 = 0;

	t42 = (((x229%x230)^x231)*x232);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = INT32_MAX;
	static volatile int8_t x239 = -1;
	static volatile uint32_t x240 = 63131U;
	static uint64_t t43 = 243404348226193LLU;

	t43 = (((x237%x238)^x239)*x240);

	if (t43 != 18446744073709299092LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = -1;
	uint16_t x242 = 3U;
	uint8_t x243 = 5U;
	uint16_t x244 = 54U;
	volatile int32_t t44 = 6;

	t44 = (((x241%x242)^x243)*x244);

	if (t44 != -324) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = -3;
	volatile uint16_t x246 = 64U;
	volatile uint64_t x248 = 41LLU;
	uint64_t t45 = 1611456LLU;

	t45 = (((x245%x246)^x247)*x248);

	if (t45 != 18446744073709551329LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x249 = INT32_MIN;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	int64_t t46 = -4984826597908085LL;

	t46 = (((x249%x250)^x251)*x252);

	if (t46 != -4611685743549480960LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	int64_t t47 = -52LL;

	t47 = (((x257%x258)^x259)*x260);

	if (t47 != 47937945600LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x262 = -1;
	uint64_t x264 = 504136435773253125LLU;
	volatile uint64_t t48 = 391056565LLU;

	t48 = (((x261%x262)^x263)*x264);

	if (t48 != 16755661622022432246LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x265 = 3LLU;
	volatile int64_t x266 = 14969735156790LL;
	uint8_t x267 = 86U;
	static uint16_t x268 = 227U;

	t49 = (((x265%x266)^x267)*x268);

	if (t49 != 19295LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x269 = 7U;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 1900532689U;
	volatile uint32_t t50 = 108650750U;

	t50 = (((x269%x270)^x271)*x272);

	if (t50 != 2169209788U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	static volatile uint32_t x275 = 456594818U;
	volatile uint32_t t51 = 2591U;

	t51 = (((x273%x274)^x275)*x276);

	if (t51 != 827808592U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x286 = 1578U;
	volatile int32_t x287 = 23;
	static int8_t x288 = INT8_MIN;
	volatile uint32_t t52 = 820713U;

	t52 = (((x285%x286)^x287)*x288);

	if (t52 != 4294858496U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = INT32_MIN;
	static int8_t x291 = -1;
	volatile int64_t x292 = INT64_MAX;

	t53 = (((x289%x290)^x291)*x292);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x293 = -1;
	static uint32_t x294 = UINT32_MAX;
	static int64_t x295 = -2473040LL;
	int16_t x296 = INT16_MIN;
	int64_t t54 = 141018829603051LL;

	t54 = (((x293%x294)^x295)*x296);

	if (t54 != 81036574720LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = INT16_MIN;
	int8_t x303 = 1;
	static volatile int8_t x304 = 18;
	volatile int32_t t55 = 0;

	t55 = (((x301%x302)^x303)*x304);

	if (t55 != -3618) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x305 = 121LLU;
	int64_t x306 = -3626349162141311LL;
	uint8_t x307 = 21U;
	int64_t x308 = -1LL;
	volatile uint64_t t56 = 6486892689831360LLU;

	t56 = (((x305%x306)^x307)*x308);

	if (t56 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x309 = 0U;
	volatile uint8_t x310 = 30U;
	uint64_t x311 = 4554000974214876201LLU;
	static int32_t x312 = INT32_MIN;
	volatile uint64_t t57 = 1574114LLU;

	t57 = (((x309%x310)^x311)*x312);

	if (t57 != 18199567174668910592LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x317 = 7493U;
	static int64_t x318 = -1LL;
	volatile int64_t x319 = -1LL;
	static uint16_t x320 = 811U;
	int64_t t58 = 89536312182513LL;

	t58 = (((x317%x318)^x319)*x320);

	if (t58 != -811LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = UINT32_MAX;
	volatile int64_t x323 = -1LL;
	uint32_t x324 = 56941728U;
	volatile int64_t t59 = -17912477613704083LL;

	t59 = (((x321%x322)^x323)*x324);

	if (t59 != -244560993728126112LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x326 = UINT8_MAX;
	int8_t x328 = INT8_MIN;
	volatile int64_t t60 = 58380901LL;

	t60 = (((x325%x326)^x327)*x328);

	if (t60 != 925568LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x329 = INT16_MAX;
	uint8_t x330 = 6U;
	int8_t x332 = -1;
	volatile int64_t t61 = -62532LL;

	t61 = (((x329%x330)^x331)*x332);

	if (t61 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x334 = -1LL;
	int32_t x335 = INT32_MAX;
	volatile int8_t x336 = INT8_MIN;
	int64_t t62 = -17807598LL;

	t62 = (((x333%x334)^x335)*x336);

	if (t62 != -274877906816LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x338 = 242105005LLU;

	t63 = (((x337%x338)^x339)*x340);

	if (t63 != 4027253726027LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MIN;

	t64 = (((x341%x342)^x343)*x344);

	if (t64 != -3486615) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x346 = 181975735LL;
	uint32_t x347 = 553U;
	uint64_t x348 = 306433311136215182LLU;

	t65 = (((x345%x346)^x347)*x348);

	if (t65 != 14703386367632305332LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = 3791LL;
	int32_t x351 = -1;
	static int16_t x352 = INT16_MAX;
	volatile int64_t t66 = 35759828918LL;

	t66 = (((x349%x350)^x351)*x352);

	if (t66 != -99447845LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x355 = -1;
	volatile uint16_t x356 = UINT16_MAX;
	uint64_t t67 = 742930530081583LLU;

	t67 = (((x353%x354)^x355)*x356);

	if (t67 != 3866565LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x357 = UINT8_MAX;
	volatile int16_t x358 = INT16_MAX;
	uint16_t x359 = 4510U;
	static int32_t t68 = -15;

	t68 = (((x357%x358)^x359)*x360);

	if (t68 != -145784832) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x362 = UINT8_MAX;
	uint64_t x364 = 46035LLU;

	t69 = (((x361%x362)^x363)*x364);

	if (t69 != 18446744073709413511LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x365 = INT8_MIN;
	static uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	uint64_t t70 = 3613407287407522LLU;

	t70 = (((x365%x366)^x367)*x368);

	if (t70 != 18446744073705390080LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 791948U;
	volatile int32_t x375 = 484722;
	static int32_t x376 = INT32_MIN;
	uint32_t t71 = 230U;

	t71 = (((x373%x374)^x375)*x376);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x377 = -3;
	volatile int64_t x378 = INT64_MAX;
	volatile uint64_t x379 = 23700437792LLU;
	int32_t x380 = INT32_MAX;
	uint64_t t72 = 228LLU;

	t72 = (((x377%x378)^x379)*x380);

	if (t72 != 4443929629625416483LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x381 = INT8_MAX;
	static uint32_t x382 = 28327973U;
	volatile uint64_t x383 = 6596449866757036261LLU;
	uint16_t x384 = 8U;

	t73 = (((x381%x382)^x383)*x384);

	if (t73 != 15878110786637186256LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MIN;
	int64_t t74 = 6094445639776LL;

	t74 = (((x385%x386)^x387)*x388);

	if (t74 != -27917285773LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x389 = INT16_MAX;
	uint8_t x390 = UINT8_MAX;
	uint64_t x391 = 720637871282596LLU;
	static int64_t x392 = 1477LL;
	uint64_t t75 = 37LLU;

	t75 = (((x389%x390)^x391)*x392);

	if (t75 != 1064382135884475527LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x393 = INT32_MAX;
	int16_t x394 = 11;
	int16_t x395 = -16229;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t76 = 112779264327049972LLU;

	t76 = (((x393%x394)^x395)*x396);

	if (t76 != 16230LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x397 = -1;
	uint16_t x398 = 318U;
	uint16_t x399 = 13U;
	static volatile int32_t t77 = -230811127;

	t77 = (((x397%x398)^x399)*x400);

	if (t77 != 1792) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x401 = INT64_MIN;
	volatile int32_t x402 = INT32_MAX;
	uint32_t x403 = UINT32_MAX;
	static uint64_t x404 = 438915394468311412LLU;

	t78 = (((x401%x402)^x403)*x404);

	if (t78 != 4060951389239243124LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x405 = -1;
	int32_t x406 = -526754849;
	uint32_t x407 = 121U;
	uint32_t t79 = 19065U;

	t79 = (((x405%x406)^x407)*x408);

	if (t79 != 122U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = -1;
	int32_t x410 = INT32_MIN;
	volatile int8_t x411 = INT8_MIN;
	volatile uint32_t x412 = 11U;
	static uint32_t t80 = 55860266U;

	t80 = (((x409%x410)^x411)*x412);

	if (t80 != 1397U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x417 = 123U;
	int64_t x418 = -1293709821515LL;
	int64_t x419 = INT64_MIN;
	uint64_t x420 = 3195644593484691314LLU;
	volatile uint64_t t81 = 15419732018LLU;

	t81 = (((x417%x418)^x419)*x420);

	if (t81 != 5682659450716447686LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x425 = -41676;
	uint32_t x426 = 301553417U;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t82 = 11U;

	t82 = (((x425%x426)^x427)*x428);

	if (t82 != 2074305866U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x429 = INT8_MAX;
	uint32_t x430 = UINT32_MAX;
	static uint32_t x431 = 14U;
	int64_t t83 = -1060LL;

	t83 = (((x429%x430)^x431)*x432);

	if (t83 != -1045042677852910925LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x441 = 1419U;
	int8_t x442 = -16;
	volatile int16_t x443 = 1;
	int16_t x444 = INT16_MIN;
	volatile int32_t t84 = 7;

	t84 = (((x441%x442)^x443)*x444);

	if (t84 != -327680) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x445 = INT16_MIN;
	int8_t x447 = 3;
	int16_t x448 = 7962;
	int32_t t85 = 1;

	t85 = (((x445%x446)^x447)*x448);

	if (t85 != -788238) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x449 = UINT32_MAX;
	uint64_t x450 = 29LLU;
	int32_t x451 = INT32_MAX;

	t86 = (((x449%x450)^x451)*x452);

	if (t86 != 18446744071562067984LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = INT32_MAX;
	int8_t x458 = -1;
	uint64_t t87 = 188617470186LLU;

	t87 = (((x457%x458)^x459)*x460);

	if (t87 != 7876579357839279030LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x463 = -1LL;
	volatile int8_t x464 = INT8_MIN;

	t88 = (((x461%x462)^x463)*x464);

	if (t88 != 16384LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x469 = 657U;
	volatile int64_t x470 = -1LL;
	uint8_t x472 = 41U;
	int64_t t89 = 861582748563LL;

	t89 = (((x469%x470)^x471)*x472);

	if (t89 != -205LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x473 = INT8_MIN;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	static uint16_t x476 = 3U;
	int32_t t90 = -105;

	t90 = (((x473%x474)^x475)*x476);

	if (t90 != -387) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x477 = 27U;
	int64_t x478 = INT64_MIN;
	int32_t x479 = INT32_MIN;
	static volatile uint64_t x480 = UINT64_MAX;
	uint64_t t91 = 3706083156LLU;

	t91 = (((x477%x478)^x479)*x480);

	if (t91 != 2147483621LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x485 = 5719073;
	int64_t x486 = INT64_MAX;
	int16_t x487 = INT16_MIN;
	int16_t x488 = -16323;
	static int64_t t92 = 192844LL;

	t92 = (((x485%x486)^x487)*x488);

	if (t92 != 93317921757LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x493 = -113;
	uint32_t x494 = 2U;
	static volatile uint32_t t93 = 23U;

	t93 = (((x493%x494)^x495)*x496);

	if (t93 != 4294871552U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x497 = -53;
	uint32_t x498 = UINT32_MAX;
	uint8_t x500 = UINT8_MAX;
	uint32_t t94 = 33841006U;

	t94 = (((x497%x498)^x499)*x500);

	if (t94 != 2287291355U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x501 = -1;
	int64_t x502 = -1LL;
	volatile int8_t x504 = -1;
	volatile int64_t t95 = -64990470295LL;

	t95 = (((x501%x502)^x503)*x504);

	if (t95 != -3063LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x510 = 1569173664498337588LLU;
	uint8_t x511 = UINT8_MAX;
	uint64_t t96 = 46022LLU;

	t96 = (((x509%x510)^x511)*x512);

	if (t96 != 4714900852655LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x513 = 1U;
	int16_t x514 = -1;
	static int64_t x515 = 89817LL;
	static uint8_t x516 = UINT8_MAX;
	int64_t t97 = -163876LL;

	t97 = (((x513%x514)^x515)*x516);

	if (t97 != 22903335LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x517 = 18132481684322LL;
	uint64_t x518 = UINT64_MAX;
	uint16_t x519 = 0U;
	static volatile int32_t x520 = 7;

	t98 = (((x517%x518)^x519)*x520);

	if (t98 != 126927371790254LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x521 = 0;
	static uint64_t x522 = 68023809LLU;
	uint16_t x523 = UINT16_MAX;
	volatile int64_t x524 = 63836346805753LL;
	volatile uint64_t t99 = 36256412691946819LLU;

	t99 = (((x521%x522)^x523)*x524);

	if (t99 != 4183514987915022855LLU) { NG(); } else { ; }
	
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

