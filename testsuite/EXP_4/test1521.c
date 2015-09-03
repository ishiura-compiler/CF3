#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = -1;
int64_t x4 = INT64_MIN;
volatile int32_t t1 = 261;
int64_t x10 = INT64_MIN;
volatile int8_t x14 = -1;
static int16_t x15 = 84;
int64_t x16 = -118510228LL;
volatile int32_t t3 = 137206296;
int32_t x34 = 694;
int8_t x35 = INT8_MIN;
int8_t x39 = -1;
int8_t x40 = 6;
int32_t t9 = -12538;
uint16_t x44 = 44U;
int8_t x47 = INT8_MIN;
uint32_t x53 = UINT32_MAX;
static volatile int32_t t14 = 1;
int32_t x65 = -1;
int8_t x73 = 3;
static int64_t t19 = 701150585411913633LL;
int64_t x87 = INT64_MAX;
int16_t x89 = 75;
volatile int8_t x91 = 12;
uint64_t x94 = 2963561422066547772LLU;
int16_t x95 = 2;
int32_t x96 = INT32_MAX;
uint64_t x97 = 6011928815297201556LLU;
volatile uint64_t t24 = 3664LLU;
static int32_t t25 = -29769534;
int8_t x105 = INT8_MAX;
volatile uint16_t x107 = UINT16_MAX;
volatile uint16_t x108 = 51U;
static volatile int8_t x110 = INT8_MIN;
static int8_t x127 = -2;
int32_t t31 = 0;
uint16_t x139 = 205U;
volatile uint8_t x143 = UINT8_MAX;
int64_t x145 = INT64_MAX;
volatile uint16_t x160 = UINT16_MAX;
int8_t x165 = INT8_MAX;
uint64_t x166 = 1418567537LLU;
static uint64_t x167 = UINT64_MAX;
uint8_t x168 = 23U;
int8_t x172 = INT8_MAX;
static int16_t x179 = -101;
static int64_t x185 = INT64_MIN;
static int32_t x186 = 1;
static int64_t t46 = 113103966LL;
int16_t x192 = INT16_MAX;
volatile int32_t t49 = 3491;
int64_t t50 = -1094263320935329680LL;
int64_t t52 = -95066876871944LL;
volatile uint32_t x213 = UINT32_MAX;
int32_t t54 = -127833921;
static volatile int64_t x222 = INT64_MIN;
static volatile int16_t x223 = 172;
int64_t x224 = INT64_MAX;
volatile int64_t t55 = -13368555929396LL;
volatile int64_t t57 = 436024958930287386LL;
int16_t x234 = -92;
volatile uint32_t x242 = 1547219U;
int16_t x244 = -349;
int8_t x247 = INT8_MIN;
int32_t x249 = INT32_MIN;
static volatile int32_t t62 = 537;
int8_t x253 = -1;
int64_t x261 = INT64_MIN;
uint32_t x262 = 2285775U;
volatile int16_t x264 = 4;
uint64_t x267 = 92696430486910LLU;
int16_t x268 = INT16_MIN;
int32_t x269 = INT32_MIN;
static int16_t x272 = INT16_MIN;
int32_t x273 = INT32_MAX;
int16_t x277 = -602;
static int64_t x278 = -7520580643656LL;
int16_t x285 = INT16_MAX;
static volatile int32_t x290 = -1;
int64_t x295 = INT64_MIN;
volatile uint16_t x299 = UINT16_MAX;
uint16_t x300 = UINT16_MAX;
uint32_t x303 = UINT32_MAX;
static int8_t x308 = INT8_MIN;
int8_t x309 = 0;
int64_t x310 = INT64_MIN;
uint64_t x322 = 215956619LLU;
int16_t x323 = INT16_MIN;
static int32_t x330 = 39;
static int64_t x331 = INT64_MAX;
int32_t x332 = -1;
int32_t t83 = 15739084;
volatile int8_t x342 = -1;
static int8_t x347 = INT8_MAX;
volatile uint64_t x349 = 1618914091329694519LLU;
uint16_t x355 = 13037U;
int16_t x361 = INT16_MAX;
int32_t t90 = -624170608;
int64_t x365 = INT64_MIN;
int64_t x366 = -1LL;
int32_t x370 = -257504;
static int8_t x384 = INT8_MIN;
volatile int64_t t96 = -25831301774LL;
uint16_t x394 = UINT16_MAX;
int16_t x395 = -1;


void f0(void) {
	int8_t x1 = -1;
	uint8_t x3 = UINT8_MAX;
	int32_t t0 = -1;

	t0 = (x1^(x2^(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	static int32_t x7 = INT32_MIN;
	uint32_t x8 = 124U;

	t1 = (x5^(x6^(x7<x8)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MIN;
	int64_t t2 = 5167LL;

	t2 = (x9^(x10^(x11<x12)));

	if (t2 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -10;

	t3 = (x13^(x14^(x15<x16)));

	if (t3 != 9) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 13861U;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = -1;
	uint8_t x20 = UINT8_MAX;
	uint32_t t4 = 401110342U;

	t4 = (x17^(x18^(x19<x20)));

	if (t4 != 4294953435U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1U;
	uint8_t x22 = 28U;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	uint32_t t5 = 131161724U;

	t5 = (x21^(x22^(x23<x24)));

	if (t5 != 28U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	static int8_t x26 = INT8_MIN;
	int16_t x27 = -1;
	int8_t x28 = INT8_MAX;
	int32_t t6 = -2034656;

	t6 = (x25^(x26^(x27<x28)));

	if (t6 != 2147483521) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint32_t x30 = 1226125U;
	static int64_t x31 = -107539LL;
	volatile int16_t x32 = INT16_MAX;
	volatile uint64_t t7 = 499311286LLU;

	t7 = (x29^(x30^(x31<x32)));

	if (t7 != 18446744073708325491LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	volatile uint16_t x36 = 3532U;
	int32_t t8 = 2216259;

	t8 = (x33^(x34^(x35<x36)));

	if (t8 != -713) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = UINT16_MAX;

	t9 = (x37^(x38^(x39<x40)));

	if (t9 != -65410) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	uint16_t x42 = 1U;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t t10 = 2314173;

	t10 = (x41^(x42^(x43<x44)));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 305;
	int8_t x46 = INT8_MIN;
	volatile int64_t x48 = -7616348997773LL;
	volatile int32_t t11 = -14418002;

	t11 = (x45^(x46^(x47<x48)));

	if (t11 != -335) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MAX;
	uint8_t x51 = UINT8_MAX;
	volatile int8_t x52 = INT8_MIN;
	static volatile int64_t t12 = 22114LL;

	t12 = (x49^(x50^(x51<x52)));

	if (t12 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = -5;
	uint8_t x55 = 60U;
	uint16_t x56 = UINT16_MAX;
	volatile uint32_t t13 = 596081592U;

	t13 = (x53^(x54^(x55<x56)));

	if (t13 != 5U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	int64_t x59 = -2399217690LL;
	int32_t x60 = INT32_MIN;

	t14 = (x57^(x58^(x59<x60)));

	if (t14 != -130) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = 1173948224754127LL;
	int16_t x62 = INT16_MIN;
	static int16_t x63 = INT16_MAX;
	uint16_t x64 = 1335U;
	int64_t t15 = 1940LL;

	t15 = (x61^(x62^(x63<x64)));

	if (t15 != -1173948224745009LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 24058U;
	volatile int8_t x67 = INT8_MIN;
	int64_t x68 = -11304423054LL;
	int32_t t16 = -32946617;

	t16 = (x65^(x66^(x67<x68)));

	if (t16 != -24059) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 35;
	volatile int16_t x70 = INT16_MIN;
	static int64_t x71 = 28LL;
	int32_t x72 = -26;
	int32_t t17 = -8154843;

	t17 = (x69^(x70^(x71<x72)));

	if (t17 != -32733) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = 1008;
	int16_t x75 = INT16_MAX;
	int32_t x76 = -19909175;
	volatile int32_t t18 = -19;

	t18 = (x73^(x74^(x75<x76)));

	if (t18 != 1011) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -85367040;
	volatile int64_t x78 = INT64_MIN;
	volatile int16_t x79 = -1191;
	int32_t x80 = -1;

	t19 = (x77^(x78^(x79<x80)));

	if (t19 != 9223372036769408769LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int64_t x82 = -360446792LL;
	uint32_t x83 = 2165U;
	volatile int16_t x84 = INT16_MAX;
	static volatile int64_t t20 = -28966804871838LL;

	t20 = (x81^(x82^(x83<x84)));

	if (t20 != 1787036857LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MAX;
	int64_t x86 = INT64_MIN;
	int32_t x88 = -1;
	int64_t t21 = 297985012774136LL;

	t21 = (x85^(x86^(x87<x88)));

	if (t21 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = 0;

	t22 = (x89^(x90^(x91<x92)));

	if (t22 != -32693) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	uint64_t t23 = 15157LLU;

	t23 = (x93^(x94^(x95<x96)));

	if (t23 != 15483182651643003842LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	uint64_t x99 = 183LLU;
	int32_t x100 = 1;

	t24 = (x97^(x98^(x99<x100)));

	if (t24 != 12434815257698469268LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int16_t x102 = INT16_MIN;
	int8_t x103 = 52;
	int32_t x104 = 257202784;

	t25 = (x101^(x102^(x103<x104)));

	if (t25 != 32766) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = UINT64_MAX;
	static uint64_t t26 = 314984LLU;

	t26 = (x105^(x106^(x107<x108)));

	if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x111 = -95;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 62784779;

	t27 = (x109^(x110^(x111<x112)));

	if (t27 != 32640) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t28 = 4889675777LLU;

	t28 = (x113^(x114^(x115<x116)));

	if (t28 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int64_t x118 = INT64_MAX;
	volatile uint32_t x119 = 24548282U;
	int32_t x120 = INT32_MIN;
	int64_t t29 = -2LL;

	t29 = (x117^(x118^(x119<x120)));

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 15547U;
	uint8_t x122 = UINT8_MAX;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t30 = -415;

	t30 = (x121^(x122^(x123<x124)));

	if (t30 != 15428) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int8_t x126 = INT8_MIN;
	static uint64_t x128 = UINT64_MAX;

	t31 = (x125^(x126^(x127<x128)));

	if (t31 != 32641) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = 3232683930610066566LL;
	int16_t x132 = INT16_MAX;
	volatile uint64_t t32 = 4809661126LLU;

	t32 = (x129^(x130^(x131<x132)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	static int32_t x134 = INT32_MIN;
	static uint32_t x135 = 594256984U;
	int8_t x136 = -56;
	static int32_t t33 = 178569188;

	t33 = (x133^(x134^(x135<x136)));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = -1;
	int8_t x140 = INT8_MIN;
	int64_t t34 = INT64_MAX;

	t34 = (x137^(x138^(x139<x140)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = UINT32_MAX;
	static volatile int64_t x142 = INT64_MAX;
	int32_t x144 = -1;
	int64_t t35 = 1900056LL;

	t35 = (x141^(x142^(x143<x144)));

	if (t35 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 3074830842356767LLU;
	int32_t x147 = 7;
	static int8_t x148 = 1;
	uint64_t t36 = 2815LLU;

	t36 = (x145^(x146^(x147<x148)));

	if (t36 != 9220297206012419040LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int8_t x150 = 12;
	uint16_t x151 = 3076U;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -21917;

	t37 = (x149^(x150^(x151<x152)));

	if (t37 != -13) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	static int16_t x154 = -1;
	static int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -15;

	t38 = (x153^(x154^(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = 22308586;
	int32_t x158 = -643555;
	uint64_t x159 = 40750162LLU;
	static int32_t t39 = 16375;

	t39 = (x157^(x158^(x159<x160)));

	if (t39 != -22918921) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 57;
	int16_t x162 = -3;
	int64_t x163 = 68873093118174LL;
	static int8_t x164 = -1;
	volatile int32_t t40 = -376315125;

	t40 = (x161^(x162^(x163<x164)));

	if (t40 != -60) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t t41 = 432518991LLU;

	t41 = (x165^(x166^(x167<x168)));

	if (t41 != 1418567438LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	volatile int16_t x170 = 176;
	static int32_t x171 = INT32_MAX;
	static int32_t t42 = -148;

	t42 = (x169^(x170^(x171<x172)));

	if (t42 != -2147483472) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x173 = 1124U;
	uint32_t x174 = 8987U;
	static int8_t x175 = INT8_MIN;
	static int32_t x176 = 48;
	volatile uint32_t t43 = 31088U;

	t43 = (x173^(x174^(x175<x176)));

	if (t43 != 10110U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	int32_t x178 = INT32_MAX;
	volatile int16_t x180 = INT16_MIN;
	int32_t t44 = INT32_MIN;

	t44 = (x177^(x178^(x179<x180)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	volatile uint32_t x182 = 496447518U;
	uint8_t x183 = 58U;
	int16_t x184 = -29;
	uint32_t t45 = 35556U;

	t45 = (x181^(x182^(x183<x184)));

	if (t45 != 496455649U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = INT64_MAX;
	volatile int32_t x188 = 194999913;

	t46 = (x185^(x186^(x187<x188)));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = UINT8_MAX;
	int8_t x190 = 59;
	static uint16_t x191 = UINT16_MAX;
	int32_t t47 = 823167796;

	t47 = (x189^(x190^(x191<x192)));

	if (t47 != 196) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -97;
	int32_t x194 = -296141;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = -1LL;
	volatile int32_t t48 = -1894334;

	t48 = (x193^(x194^(x195<x196)));

	if (t48 != 296108) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MAX;
	int8_t x198 = -3;
	int8_t x199 = INT8_MIN;
	static int8_t x200 = INT8_MIN;

	t49 = (x197^(x198^(x199<x200)));

	if (t49 != -32766) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = 242777LL;
	int64_t x202 = -1LL;
	int64_t x203 = 48272667845698LL;
	volatile int32_t x204 = -1;

	t50 = (x201^(x202^(x203<x204)));

	if (t50 != -242778LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x205 = INT64_MIN;
	uint8_t x206 = 8U;
	volatile int16_t x207 = -182;
	int16_t x208 = INT16_MIN;
	volatile int64_t t51 = -1LL;

	t51 = (x205^(x206^(x207<x208)));

	if (t51 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	int64_t x210 = 13LL;
	int16_t x211 = 1;
	int16_t x212 = INT16_MIN;

	t52 = (x209^(x210^(x211<x212)));

	if (t52 != -32755LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 3U;
	static volatile int8_t x215 = -60;
	int8_t x216 = -1;
	volatile uint32_t t53 = 67U;

	t53 = (x213^(x214^(x215<x216)));

	if (t53 != 4294967293U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x217 = INT32_MAX;
	int32_t x218 = -7;
	int16_t x219 = 6565;
	static uint16_t x220 = 3922U;

	t54 = (x217^(x218^(x219<x220)));

	if (t54 != -2147483642) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = -1;

	t55 = (x221^(x222^(x223<x224)));

	if (t55 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MIN;
	int32_t x227 = -1577;
	int16_t x228 = 1;
	volatile int32_t t56 = 850;

	t56 = (x225^(x226^(x227<x228)));

	if (t56 != -2147483522) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 451739255695LL;
	int16_t x230 = -1;
	int32_t x231 = -64530060;
	uint16_t x232 = UINT16_MAX;

	t57 = (x229^(x230^(x231<x232)));

	if (t57 != -451739255695LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	static int16_t x235 = -1;
	int64_t x236 = -54223798727189228LL;
	volatile int32_t t58 = -1;

	t58 = (x233^(x234^(x235<x236)));

	if (t58 != -32677) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1LL;
	int16_t x238 = -1;
	volatile uint8_t x239 = 4U;
	static int8_t x240 = INT8_MAX;
	int64_t t59 = 286LL;

	t59 = (x237^(x238^(x239<x240)));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = 506920;
	static int32_t x243 = 0;
	uint32_t t60 = 318539312U;

	t60 = (x241^(x242^(x243<x244)));

	if (t60 != 1058811U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 3U;
	uint64_t x246 = UINT64_MAX;
	volatile uint16_t x248 = UINT16_MAX;
	volatile uint64_t t61 = 4LLU;

	t61 = (x245^(x246^(x247<x248)));

	if (t61 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = 25;
	int32_t x251 = -1;
	int16_t x252 = INT16_MAX;

	t62 = (x249^(x250^(x251<x252)));

	if (t62 != -2147483624) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = 4180424326577302LLU;
	volatile int64_t x255 = 146543345LL;
	int16_t x256 = -1;
	volatile uint64_t t63 = 11LLU;

	t63 = (x253^(x254^(x255<x256)));

	if (t63 != 18442563649382974313LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 12381243LLU;
	static uint8_t x258 = 1U;
	int8_t x259 = INT8_MIN;
	static uint32_t x260 = 23252U;
	volatile uint64_t t64 = 4990LLU;

	t64 = (x257^(x258^(x259<x260)));

	if (t64 != 12381242LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x263 = INT8_MIN;
	static volatile int64_t t65 = 1LL;

	t65 = (x261^(x262^(x263<x264)));

	if (t65 != -9223372036852490034LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	uint16_t x266 = 281U;
	volatile int32_t t66 = -4;

	t66 = (x265^(x266^(x267<x268)));

	if (t66 != -360) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x270 = 1024161208393LLU;
	volatile int8_t x271 = 3;
	volatile uint64_t t67 = 3LLU;

	t67 = (x269^(x270^(x271<x272)));

	if (t67 != 18446743051318843465LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x274 = INT8_MIN;
	static int64_t x275 = -831214399451777LL;
	int16_t x276 = -12;
	static volatile int32_t t68 = -1371;

	t68 = (x273^(x274^(x275<x276)));

	if (t68 != -2147483522) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x279 = 8628241893103318030LLU;
	uint8_t x280 = 1U;
	static int64_t t69 = 193966LL;

	t69 = (x277^(x278^(x279<x280)));

	if (t69 != 7520580643102LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 652U;
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 0U;
	volatile int16_t x284 = -1848;
	static int32_t t70 = 172;

	t70 = (x281^(x282^(x283<x284)));

	if (t70 != -32116) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = -1;
	int64_t x287 = INT64_MAX;
	int16_t x288 = INT16_MAX;
	int32_t t71 = 15418221;

	t71 = (x285^(x286^(x287<x288)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	static int32_t x291 = -8119;
	static int8_t x292 = -1;
	static volatile int32_t t72 = 471;

	t72 = (x289^(x290^(x291<x292)));

	if (t72 != -65535) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	uint16_t x294 = UINT16_MAX;
	int8_t x296 = -3;
	int32_t t73 = -27548622;

	t73 = (x293^(x294^(x295<x296)));

	if (t73 != 32769) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	volatile int64_t t74 = -185542LL;

	t74 = (x297^(x298^(x299<x300)));

	if (t74 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int64_t x302 = 200042446LL;
	volatile int64_t x304 = -11329246676LL;
	volatile int64_t t75 = -1469552690LL;

	t75 = (x301^(x302^(x303<x304)));

	if (t75 != 200022065LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 3241548136057115LLU;
	int32_t x306 = INT32_MIN;
	volatile int8_t x307 = -1;
	uint64_t t76 = 160LLU;

	t76 = (x305^(x306^(x307<x308)));

	if (t76 != 18443502525478603035LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x311 = 45063221294351715LL;
	int64_t x312 = INT64_MIN;
	int64_t t77 = INT64_MIN;

	t77 = (x309^(x310^(x311<x312)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	int32_t x314 = INT32_MIN;
	volatile uint8_t x315 = 0U;
	int64_t x316 = -1LL;
	int32_t t78 = INT32_MAX;

	t78 = (x313^(x314^(x315<x316)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MAX;
	int64_t x318 = INT64_MIN;
	static int64_t x319 = INT64_MAX;
	static int8_t x320 = INT8_MIN;
	static int64_t t79 = 32884792801248LL;

	t79 = (x317^(x318^(x319<x320)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -13;
	static int8_t x324 = -1;
	static volatile uint64_t t80 = 1530547535562LLU;

	t80 = (x321^(x322^(x323<x324)));

	if (t80 != 18446744073493595001LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -26LL;
	uint8_t x326 = UINT8_MAX;
	uint32_t x327 = 56U;
	uint64_t x328 = UINT64_MAX;
	volatile int64_t t81 = 540662312LL;

	t81 = (x325^(x326^(x327<x328)));

	if (t81 != -232LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 12;
	int32_t t82 = -1572442;

	t82 = (x329^(x330^(x331<x332)));

	if (t82 != 43) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = 95373;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = INT64_MAX;
	int8_t x336 = INT8_MAX;

	t83 = (x333^(x334^(x335<x336)));

	if (t83 != 95346) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	int16_t x338 = 3849;
	int64_t x339 = 1LL;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -291259;

	t84 = (x337^(x338^(x339<x340)));

	if (t84 != 3958) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int32_t x343 = -1;
	int8_t x344 = -1;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x341^(x342^(x343<x344)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	volatile int32_t x346 = INT32_MAX;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x345^(x346^(x347<x348)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = 9U;
	int16_t x351 = -1;
	static int32_t x352 = -1;
	volatile uint64_t t87 = 6LLU;

	t87 = (x349^(x350^(x351<x352)));

	if (t87 != 1618914091329694526LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	static int64_t x354 = -1LL;
	int64_t x356 = -3094422LL;
	volatile int64_t t88 = 25506LL;

	t88 = (x353^(x354^(x355<x356)));

	if (t88 != -256LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 0U;
	uint8_t x358 = 49U;
	static volatile uint32_t x359 = 13864U;
	int8_t x360 = INT8_MIN;
	int32_t t89 = 55;

	t89 = (x357^(x358^(x359<x360)));

	if (t89 != 48) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x362 = INT16_MAX;
	uint16_t x363 = UINT16_MAX;
	int64_t x364 = -1LL;

	t90 = (x361^(x362^(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x367 = UINT32_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x365^(x366^(x367<x368)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 636640808;

	t92 = (x369^(x370^(x371<x372)));

	if (t92 != 234017) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x374 = 116LLU;
	uint8_t x375 = 1U;
	int8_t x376 = INT8_MAX;
	uint64_t t93 = 149625448LLU;

	t93 = (x373^(x374^(x375<x376)));

	if (t93 != 9223372036854775925LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -1;
	int64_t x378 = -1LL;
	uint64_t x379 = UINT64_MAX;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t94 = -1017819508347LL;

	t94 = (x377^(x378^(x379<x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	static int8_t x382 = 4;
	int64_t x383 = INT64_MAX;
	int64_t t95 = -8230559600LL;

	t95 = (x381^(x382^(x383<x384)));

	if (t95 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	static int64_t x386 = INT64_MIN;
	static volatile int32_t x387 = INT32_MIN;
	uint8_t x388 = 1U;

	t96 = (x385^(x386^(x387<x388)));

	if (t96 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = UINT8_MAX;
	static volatile int32_t x390 = INT32_MAX;
	int8_t x391 = INT8_MIN;
	int8_t x392 = 0;
	int32_t t97 = -2;

	t97 = (x389^(x390^(x391<x392)));

	if (t97 != 2147483393) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int32_t x396 = 10282273;
	int32_t t98 = 12706051;

	t98 = (x393^(x394^(x395<x396)));

	if (t98 != -65535) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	volatile uint8_t x398 = 4U;
	uint64_t x399 = 3943LLU;
	uint8_t x400 = 35U;
	int64_t t99 = 744220819881555092LL;

	t99 = (x397^(x398^(x399<x400)));

	if (t99 != -5LL) { NG(); } else { ; }
	
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

