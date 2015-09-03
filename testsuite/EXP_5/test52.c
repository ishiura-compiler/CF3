#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
volatile int32_t t0 = 37548510;
int32_t x5 = INT32_MIN;
uint16_t x7 = UINT16_MAX;
uint64_t x23 = UINT64_MAX;
uint8_t x36 = 5U;
static volatile int8_t x41 = INT8_MIN;
int8_t x42 = -22;
static uint32_t x43 = UINT32_MAX;
static int8_t x48 = -1;
uint16_t x49 = 25579U;
volatile uint64_t x51 = 259632LLU;
int64_t x56 = 3118318170LL;
int64_t t11 = -14800841244LL;
volatile uint64_t t13 = 48133884886697LLU;
int8_t x73 = 0;
uint32_t x74 = UINT32_MAX;
int32_t t17 = -1725;
uint16_t x100 = 13U;
int64_t x104 = -8388789508369270LL;
static volatile uint64_t t20 = UINT64_MAX;
int8_t x117 = 0;
static int16_t x118 = 0;
static volatile int8_t x122 = INT8_MIN;
static uint8_t x126 = UINT8_MAX;
uint8_t x128 = 24U;
int32_t x132 = INT32_MIN;
static int32_t x133 = INT32_MAX;
int64_t x135 = -1LL;
static uint8_t x141 = UINT8_MAX;
int64_t x142 = INT64_MIN;
uint8_t x144 = 1U;
uint64_t t28 = 3048125416994989279LLU;
uint32_t x165 = 128787U;
static int32_t x171 = -1;
int16_t x174 = -1;
static volatile uint64_t x191 = UINT64_MAX;
static uint64_t t37 = 679980521141LLU;
volatile int32_t x197 = -1;
static volatile int64_t x200 = INT64_MAX;
int16_t x207 = 23;
int64_t x208 = INT64_MAX;
int8_t x210 = INT8_MIN;
uint64_t t41 = 18297060LLU;
int64_t x215 = INT64_MAX;
static uint16_t x216 = UINT16_MAX;
volatile int64_t t43 = -6837361412571605LL;
uint8_t x222 = UINT8_MAX;
volatile int16_t x230 = INT16_MIN;
int32_t t46 = -125981001;
int8_t x233 = -2;
int64_t x238 = -1LL;
int64_t t48 = -342293693LL;
volatile uint16_t x249 = 27U;
uint32_t x251 = 177699314U;
uint64_t x252 = UINT64_MAX;
static int16_t x259 = INT16_MIN;
int16_t x261 = -86;
uint64_t x268 = 4142661353378932LLU;
volatile uint64_t t56 = 2238180752251516590LLU;
static volatile uint8_t x276 = 107U;
volatile uint64_t t57 = 22045LLU;
volatile int8_t x280 = INT8_MAX;
int64_t x297 = INT64_MIN;
uint32_t x298 = UINT32_MAX;
int32_t x306 = -1;
static int64_t x316 = INT64_MIN;
static int64_t t65 = 3044947367361388025LL;
int32_t x320 = INT32_MIN;
int32_t x321 = -1;
static int32_t x331 = INT32_MAX;
static uint32_t x333 = UINT32_MAX;
volatile int32_t t71 = INT32_MAX;
int16_t x363 = INT16_MAX;
volatile uint32_t x364 = UINT32_MAX;
volatile int64_t t75 = 131385918704783984LL;
uint64_t x370 = UINT64_MAX;
int32_t x372 = -1;
static int32_t x378 = INT32_MAX;
static volatile int32_t t78 = -15927;
int16_t x382 = -6422;
int32_t x389 = INT32_MIN;
volatile int64_t t81 = -218183501050389986LL;
int64_t x396 = INT64_MAX;
static volatile int64_t x403 = INT64_MIN;
static int32_t x408 = INT32_MIN;
static volatile uint32_t t85 = 98795U;
static int8_t x423 = INT8_MIN;
static uint64_t x430 = UINT64_MAX;
volatile uint64_t t88 = UINT64_MAX;
int64_t x442 = INT64_MIN;
int64_t x443 = 469558694939LL;
int8_t x452 = INT8_MIN;
uint64_t t91 = 344678368751049LLU;
uint32_t x455 = 497U;
volatile uint16_t x460 = UINT16_MAX;
int64_t t93 = 11401255LL;
int16_t x462 = 839;
int16_t x467 = INT16_MIN;
uint8_t x470 = UINT8_MAX;
int16_t x472 = -10311;
uint32_t x473 = 6049U;
uint8_t x475 = 0U;
volatile uint64_t t97 = 755491694322345LLU;


void f0(void) {
	static volatile int32_t x1 = -1;
	int16_t x3 = INT16_MIN;
	int16_t x4 = -2082;

	t0 = (x1^((x2+x3)/x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 3700904128952LL;

	t1 = (x5^((x6+x7)/x8));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 29;
	volatile int64_t x14 = INT64_MAX;
	static int32_t x15 = INT32_MIN;
	static int16_t x16 = -2571;
	int64_t t2 = 75629916LL;

	t2 = (x13^((x14+x15)/x16));

	if (t2 != -3587464813188372LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 7U;
	static int8_t x18 = INT8_MAX;
	uint16_t x19 = 199U;
	uint32_t x20 = 57812883U;
	uint32_t t3 = 59U;

	t3 = (x17^((x18+x19)/x20));

	if (t3 != 7U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MAX;
	volatile int16_t x22 = -3;
	volatile int8_t x24 = 1;
	uint64_t t4 = 133860200347988391LLU;

	t4 = (x21^((x22+x23)/x24));

	if (t4 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	int64_t x30 = 11LL;
	int8_t x31 = -1;
	int8_t x32 = INT8_MAX;
	static int64_t t5 = 285109303617441774LL;

	t5 = (x29^((x30+x31)/x32));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = 12969755022198LLU;
	uint32_t x34 = 60305870U;
	int64_t x35 = -3758046850819275133LL;
	uint64_t t6 = 15315LLU;

	t6 = (x33^((x34+x35)/x36));

	if (t6 != 17695122912821598258LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 44;
	volatile int8_t x39 = -2;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t7 = -4037285;

	t7 = (x37^((x38+x39)/x40));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x44 = INT16_MIN;
	volatile uint32_t t8 = 486U;

	t8 = (x41^((x42+x43)/x44));

	if (t8 != 4294967169U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 8U;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = 3;
	volatile int32_t t9 = 379;

	t9 = (x45^((x46+x47)/x48));

	if (t9 != -65546) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x50 = 1U;
	int64_t x52 = INT64_MAX;
	static volatile uint64_t t10 = 7906871387374LLU;

	t10 = (x49^((x50+x51)/x52));

	if (t10 != 25579LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = 19U;
	int8_t x55 = INT8_MAX;

	t11 = (x53^((x54+x55)/x56));

	if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 197772810;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	static uint64_t x60 = 17629644LLU;
	static uint64_t t12 = 1LLU;

	t12 = (x57^((x58+x59)/x60));

	if (t12 != 522984853300LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = INT8_MIN;
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = -1679965;
	uint64_t x68 = 8512697921772039LLU;

	t13 = (x65^((x66+x67)/x68));

	if (t13 != 18446744073709549558LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = 63U;
	int32_t x71 = INT32_MIN;
	static int8_t x72 = INT8_MIN;
	volatile uint32_t t14 = 217034331U;

	t14 = (x69^((x70+x71)/x72));

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x75 = 73047459193LLU;
	static int16_t x76 = 3;
	volatile uint64_t t15 = 22080583091080587LLU;

	t15 = (x73^((x74+x75)/x76));

	if (t15 != 25780808829LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x81 = 8069LLU;
	int64_t x82 = -868383242804LL;
	static int16_t x83 = INT16_MAX;
	uint16_t x84 = UINT16_MAX;
	volatile uint64_t t16 = 13616706854LLU;

	t16 = (x81^((x82+x83)/x84));

	if (t16 != 18446744073696301071LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	int8_t x87 = INT8_MAX;
	uint8_t x88 = 87U;

	t17 = (x85^((x86+x87)/x88));

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 357113193U;
	static uint8_t x90 = 0U;
	volatile uint16_t x91 = 552U;
	uint16_t x92 = UINT16_MAX;
	uint32_t t18 = 1U;

	t18 = (x89^((x90+x91)/x92));

	if (t18 != 357113193U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x97 = 2U;
	int8_t x98 = INT8_MIN;
	static int32_t x99 = INT32_MAX;
	int32_t t19 = 174738;

	t19 = (x97^((x98+x99)/x100));

	if (t19 != 165191037) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = UINT64_MAX;
	volatile int32_t x102 = INT32_MIN;
	volatile uint8_t x103 = UINT8_MAX;

	t20 = (x101^((x102+x103)/x104));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x119 = 40578076U;
	uint16_t x120 = 2580U;
	static uint32_t t21 = 26627148U;

	t21 = (x117^((x118+x119)/x120));

	if (t21 != 15727U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x121 = 0U;
	int32_t x123 = 42;
	int16_t x124 = 944;
	volatile uint32_t t22 = 783350U;

	t22 = (x121^((x122+x123)/x124));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x127 = 44945267152185LL;
	uint64_t t23 = 683936249156697LLU;

	t23 = (x125^((x126+x127)/x128));

	if (t23 != 18446742200990086930LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = -1;
	int32_t x131 = 723661533;
	int32_t t24 = INT32_MIN;

	t24 = (x129^((x130+x131)/x132));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x134 = INT32_MIN;
	volatile int16_t x136 = -450;
	volatile int64_t t25 = 2598996516532LL;

	t25 = (x133^((x134+x135)/x136));

	if (t25 != 2142711462LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x137 = INT8_MAX;
	volatile int64_t x138 = -581135425455424LL;
	static int16_t x139 = INT16_MIN;
	volatile int32_t x140 = 254599062;
	volatile int64_t t26 = 713054295601025944LL;

	t26 = (x137^((x138+x139)/x140));

	if (t26 != -2282570LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x143 = INT8_MAX;
	static volatile int64_t t27 = 6089LL;

	t27 = (x141^((x142+x143)/x144));

	if (t27 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x145 = 5951678323LLU;
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = 73624436527104133LLU;

	t28 = (x145^((x146+x147)/x148));

	if (t28 != 5951678345LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x149 = 3U;
	static volatile int8_t x150 = INT8_MIN;
	int16_t x151 = -2187;
	int8_t x152 = -1;
	int32_t t29 = 107093496;

	t29 = (x149^((x150+x151)/x152));

	if (t29 != 2312) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x153 = 6U;
	static int64_t x154 = INT64_MAX;
	int64_t x155 = -6736565148189LL;
	volatile int64_t x156 = INT64_MIN;
	int64_t t30 = 392902449551867392LL;

	t30 = (x153^((x154+x155)/x156));

	if (t30 != 6LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MIN;
	static int16_t x158 = 0;
	int16_t x159 = INT16_MIN;
	volatile int64_t x160 = INT64_MIN;
	volatile int64_t t31 = 1119444015000751LL;

	t31 = (x157^((x158+x159)/x160));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = 971U;
	int32_t x162 = INT32_MAX;
	volatile int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	volatile int64_t t32 = 783546LL;

	t32 = (x161^((x162+x163)/x164));

	if (t32 != -4294968268LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x166 = 75U;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;
	volatile int64_t t33 = 3874158020672675380LL;

	t33 = (x165^((x166+x167)/x168));

	if (t33 != 72057594037799148LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = -1;
	int16_t x172 = INT16_MIN;
	int32_t t34 = 850983;

	t34 = (x169^((x170+x171)/x172));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x173 = UINT64_MAX;
	int32_t x175 = INT32_MAX;
	uint16_t x176 = 2U;
	volatile uint64_t t35 = 4788070681367295676LLU;

	t35 = (x173^((x174+x175)/x176));

	if (t35 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = INT32_MIN;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	static volatile int32_t x188 = -1;
	volatile uint32_t t36 = 3U;

	t36 = (x185^((x186+x187)/x188));

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = INT16_MIN;
	volatile int64_t x190 = INT64_MAX;
	int32_t x192 = INT32_MAX;

	t37 = (x189^((x190+x191)/x192));

	if (t37 != 18446744069414551554LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x193 = 1U;
	static int64_t x194 = -1LL;
	volatile uint16_t x195 = UINT16_MAX;
	int8_t x196 = -1;
	volatile int64_t t38 = -7489056367LL;

	t38 = (x193^((x194+x195)/x196));

	if (t38 != -65533LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x198 = 13;
	volatile int8_t x199 = INT8_MIN;
	volatile int64_t t39 = -3140767336779731829LL;

	t39 = (x197^((x198+x199)/x200));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = -1;
	uint8_t x206 = 0U;
	volatile int64_t t40 = 88541872767162LL;

	t40 = (x205^((x206+x207)/x208));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x209 = 108U;
	static int8_t x211 = -45;
	volatile uint64_t x212 = 790839841685LLU;

	t41 = (x209^((x210+x211)/x212));

	if (t41 != 23325483LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = -14;
	static int16_t x214 = -1;
	int64_t t42 = 113310670724162LL;

	t42 = (x213^((x214+x215)/x216));

	if (t42 != -140739635871758LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = 13U;
	uint32_t x218 = UINT32_MAX;
	static volatile int64_t x219 = 1910LL;
	int64_t x220 = 1LL;

	t43 = (x217^((x218+x219)/x220));

	if (t43 != 4294969208LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MAX;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = UINT16_MAX;
	static volatile int32_t t44 = 1;

	t44 = (x221^((x222+x223)/x224));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MAX;
	uint8_t x226 = 15U;
	static volatile int32_t x227 = 3;
	uint8_t x228 = UINT8_MAX;
	int32_t t45 = INT32_MAX;

	t45 = (x225^((x226+x227)/x228));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x229 = INT8_MAX;
	static int8_t x231 = -2;
	uint8_t x232 = 4U;

	t46 = (x229^((x230+x231)/x232));

	if (t46 != -8065) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x234 = INT32_MIN;
	static int16_t x235 = INT16_MAX;
	uint16_t x236 = 192U;
	int32_t t47 = 3;

	t47 = (x233^((x234+x235)/x236));

	if (t47 != 11184638) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x237 = INT32_MIN;
	int64_t x239 = -1LL;
	volatile int8_t x240 = -1;

	t48 = (x237^((x238+x239)/x240));

	if (t48 != -2147483646LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = -1;
	volatile uint16_t x242 = 2182U;
	int16_t x243 = INT16_MIN;
	static uint8_t x244 = UINT8_MAX;
	volatile int32_t t49 = 40730;

	t49 = (x241^((x242+x243)/x244));

	if (t49 != 118) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 6;
	uint64_t x246 = UINT64_MAX;
	uint8_t x247 = 1U;
	volatile uint8_t x248 = 1U;
	uint64_t t50 = 134263231515252417LLU;

	t50 = (x245^((x246+x247)/x248));

	if (t50 != 6LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x250 = 3803U;
	uint64_t t51 = 19966307LLU;

	t51 = (x249^((x250+x251)/x252));

	if (t51 != 27LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x254 = 158679579LLU;
	volatile int8_t x255 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;
	uint64_t t52 = 5198LLU;

	t52 = (x253^((x254+x255)/x256));

	if (t52 != 18446744071562690240LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = 77354070103LL;
	uint64_t x258 = UINT64_MAX;
	int64_t x260 = INT64_MIN;
	uint64_t t53 = 124155620248139LLU;

	t53 = (x257^((x258+x259)/x260));

	if (t53 != 77354070102LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x262 = UINT16_MAX;
	static uint64_t x263 = UINT64_MAX;
	volatile int8_t x264 = INT8_MAX;
	volatile uint64_t t54 = 1013246972LLU;

	t54 = (x261^((x262+x263)/x264));

	if (t54 != 18446744073709551022LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = 14U;
	static uint32_t x266 = 135591299U;
	static uint64_t x267 = 8456271032LLU;
	static uint64_t t55 = 7901891004LLU;

	t55 = (x265^((x266+x267)/x268));

	if (t55 != 14LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MAX;
	int32_t x271 = 47423;
	uint64_t x272 = UINT64_MAX;

	t56 = (x269^((x270+x271)/x272));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x273 = UINT32_MAX;
	uint64_t x274 = 313539046193736LLU;
	volatile uint64_t x275 = UINT64_MAX;

	t57 = (x273^((x274+x275)/x276));

	if (t57 != 2932358899285LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -14168;
	int32_t x278 = -5610;
	static uint16_t x279 = 19457U;
	int32_t t58 = 0;

	t58 = (x277^((x278+x279)/x280));

	if (t58 != -14139) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x281 = 0;
	int64_t x282 = 3101880637111017LL;
	int16_t x283 = 26;
	int16_t x284 = INT16_MAX;
	volatile int64_t t59 = -31928LL;

	t59 = (x281^((x282+x283)/x284));

	if (t59 != 94664773617LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x285 = UINT16_MAX;
	int8_t x286 = 8;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t60 = -31158LL;

	t60 = (x285^((x286+x287)/x288));

	if (t60 != -140739635871745LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x289 = INT16_MAX;
	static uint32_t x290 = 1447698887U;
	static volatile int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;
	uint32_t t61 = 1U;

	t61 = (x289^((x290+x291)/x292));

	if (t61 != 32767U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x299 = INT16_MIN;
	volatile int32_t x300 = INT32_MAX;
	static volatile int64_t t62 = -237267772532LL;

	t62 = (x297^((x298+x299)/x300));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x301 = -1LL;
	static uint8_t x302 = 1U;
	int8_t x303 = INT8_MIN;
	int64_t x304 = -2116956158827LL;
	volatile int64_t t63 = -4887108333LL;

	t63 = (x301^((x302+x303)/x304));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x305 = -1;
	static int16_t x307 = -1;
	static volatile uint64_t x308 = 7796420967979LLU;
	static uint64_t t64 = 2211274599LLU;

	t64 = (x305^((x306+x307)/x308));

	if (t64 != 18446744073707185563LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	static int16_t x315 = 14237;

	t65 = (x313^((x314+x315)/x316));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	uint8_t x319 = 2U;
	volatile int64_t t66 = -11LL;

	t66 = (x317^((x318+x319)/x320));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x322 = -1LL;
	int16_t x323 = 211;
	int64_t x324 = INT64_MIN;
	volatile int64_t t67 = -3368581932958580891LL;

	t67 = (x321^((x322+x323)/x324));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = INT32_MIN;
	static int32_t x330 = -1;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t68 = 191382;

	t68 = (x329^((x330+x331)/x332));

	if (t68 != -2139062144) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x334 = 475552U;
	int32_t x335 = 29144;
	uint64_t x336 = 1757109259LLU;
	uint64_t t69 = 1026390232342LLU;

	t69 = (x333^((x334+x335)/x336));

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x337 = UINT8_MAX;
	static int64_t x338 = -1LL;
	int32_t x339 = INT32_MAX;
	int8_t x340 = 7;
	volatile int64_t t70 = -176807769790817870LL;

	t70 = (x337^((x338+x339)/x340));

	if (t70 != 306783341LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = INT32_MIN;
	volatile int8_t x346 = 12;
	static int8_t x347 = -28;
	uint8_t x348 = 10U;

	t71 = (x345^((x346+x347)/x348));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = -1386047;
	uint32_t x350 = UINT32_MAX;
	int32_t x351 = INT32_MAX;
	volatile uint8_t x352 = 40U;
	uint32_t t72 = 205343440U;

	t72 = (x349^((x350+x351)/x352));

	if (t72 != 4242139890U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x353 = INT16_MAX;
	int16_t x354 = -1;
	volatile int16_t x355 = INT16_MIN;
	int8_t x356 = 1;
	int32_t t73 = 285087466;

	t73 = (x353^((x354+x355)/x356));

	if (t73 != -65536) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MAX;
	int64_t t74 = INT64_MIN;

	t74 = (x361^((x362+x363)/x364));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x365 = INT16_MIN;
	static int64_t x366 = -189358004LL;
	int32_t x367 = INT32_MAX;
	int32_t x368 = -1;

	t75 = (x365^((x366+x367)/x368));

	if (t75 != 1958141877LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x371 = UINT16_MAX;
	uint64_t t76 = 234217378149097463LLU;

	t76 = (x369^((x370+x371)/x372));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x373 = 528573180LLU;
	static int32_t x374 = -1;
	volatile int16_t x375 = 0;
	static uint64_t x376 = 13360369LLU;
	volatile uint64_t t77 = 6LLU;

	t77 = (x373^((x374+x375)/x376));

	if (t77 != 1380412621076LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x377 = UINT8_MAX;
	static int8_t x379 = INT8_MIN;
	int32_t x380 = 501335;

	t78 = (x377^((x378+x379)/x380));

	if (t78 != 4164) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x381 = 14575U;
	static int16_t x383 = INT16_MAX;
	static int32_t x384 = INT32_MAX;
	static int32_t t79 = 892;

	t79 = (x381^((x382+x383)/x384));

	if (t79 != 14575) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = -1;
	static uint8_t x386 = UINT8_MAX;
	static uint32_t x387 = 27U;
	uint64_t x388 = 61226780425LLU;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x385^((x386+x387)/x388));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x390 = 0;
	int64_t x391 = 19536LL;
	volatile int32_t x392 = INT32_MIN;

	t81 = (x389^((x390+x391)/x392));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = INT64_MAX;
	volatile int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	static volatile int64_t t82 = INT64_MAX;

	t82 = (x393^((x394+x395)/x396));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = INT32_MAX;
	int16_t x402 = 263;
	static volatile int16_t x404 = -1;
	int64_t t83 = -226651685886793193LL;

	t83 = (x401^((x402+x403)/x404));

	if (t83 != 9223372034707292422LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x405 = UINT16_MAX;
	int16_t x406 = -406;
	uint64_t x407 = 662130664874LLU;
	static uint64_t t84 = 245LLU;

	t84 = (x405^((x406+x407)/x408));

	if (t84 != 65535LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x409 = 6849926U;
	int32_t x410 = INT32_MIN;
	uint8_t x411 = 2U;
	int32_t x412 = -1;

	t85 = (x409^((x410+x411)/x412));

	if (t85 != 2140633720U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x421 = 26867309U;
	uint32_t x422 = 29133332U;
	int8_t x424 = INT8_MAX;
	volatile uint32_t t86 = 7461857U;

	t86 = (x421^((x422+x423)/x424));

	if (t86 != 26900094U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x429 = INT64_MIN;
	int64_t x431 = INT64_MAX;
	int8_t x432 = INT8_MAX;
	volatile uint64_t t87 = 770321167397765LLU;

	t87 = (x429^((x430+x431)/x432));

	if (t87 != 9295997013522923648LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x433 = -1;
	uint64_t x434 = 9365535558LLU;
	int64_t x435 = -1LL;
	volatile int16_t x436 = -1;

	t88 = (x433^((x434+x435)/x436));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = 3;
	int32_t x438 = 758253;
	static int64_t x439 = -58310967976539639LL;
	volatile int16_t x440 = INT16_MIN;
	volatile int64_t t89 = -22LL;

	t89 = (x437^((x438+x439)/x440));

	if (t89 != 1779509520746LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x441 = 1130455301957LLU;
	static int16_t x444 = -1;
	static uint64_t t90 = 112LLU;

	t90 = (x441^((x442+x443)/x444));

	if (t90 != 9223370480339915936LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x449 = 96750204054456LLU;
	uint16_t x450 = 43U;
	static int16_t x451 = 1;

	t91 = (x449^((x450+x451)/x452));

	if (t91 != 96750204054456LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x453 = INT16_MIN;
	static uint32_t x454 = 4745U;
	static int16_t x456 = -7;
	volatile uint32_t t92 = 24182594U;

	t92 = (x453^((x454+x455)/x456));

	if (t92 != 4294934528U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x457 = 23U;
	int32_t x458 = INT32_MAX;
	int64_t x459 = INT64_MIN;

	t93 = (x457^((x458+x459)/x460));

	if (t93 != -140739635838953LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x461 = -1;
	uint32_t x463 = UINT32_MAX;
	static int8_t x464 = -1;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x461^((x462+x463)/x464));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x465 = 14198732254102LLU;
	static int64_t x466 = -1LL;
	int16_t x468 = INT16_MIN;
	volatile uint64_t t95 = 12LLU;

	t95 = (x465^((x466+x467)/x468));

	if (t95 != 14198732254103LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x469 = INT8_MIN;
	int32_t x471 = 436546;
	volatile int32_t t96 = -20609;

	t96 = (x469^((x470+x471)/x472));

	if (t96 != 86) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x474 = 161148678093334LLU;
	volatile int32_t x476 = -1;

	t97 = (x473^((x474+x475)/x476));

	if (t97 != 6049LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x477 = 4U;
	int8_t x478 = -1;
	uint32_t x479 = 15U;
	volatile int64_t x480 = INT64_MAX;
	volatile int64_t t98 = -187501458243LL;

	t98 = (x477^((x478+x479)/x480));

	if (t98 != 4LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x481 = INT8_MIN;
	int16_t x482 = -1;
	volatile int16_t x483 = -1;
	int32_t x484 = -1;
	static int32_t t99 = 146199;

	t99 = (x481^((x482+x483)/x484));

	if (t99 != -126) { NG(); } else { ; }
	
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

