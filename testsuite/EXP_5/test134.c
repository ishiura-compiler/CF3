#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int8_t x7 = INT8_MIN;
int32_t x9 = INT32_MIN;
uint64_t t2 = 15939LLU;
uint32_t x22 = UINT32_MAX;
int16_t x38 = INT16_MIN;
int8_t x45 = INT8_MIN;
int64_t x46 = INT64_MAX;
volatile int8_t x56 = -1;
volatile int16_t x57 = INT16_MIN;
int32_t x59 = INT32_MAX;
volatile int16_t x68 = INT16_MIN;
uint64_t t18 = 618529LLU;
static volatile int32_t t19 = 0;
int64_t x95 = 4094634306204883LL;
volatile int32_t x97 = 685;
int8_t x123 = -8;
static int64_t x130 = INT64_MAX;
int16_t x132 = 608;
int32_t x139 = 26049;
int64_t x160 = INT64_MAX;
uint8_t x168 = UINT8_MAX;
uint8_t x184 = UINT8_MAX;
int64_t x190 = INT64_MIN;
int8_t x192 = -1;
volatile uint32_t x208 = 1U;
int32_t x211 = 22;
int32_t t41 = -7669;
static int16_t x227 = 329;
volatile uint16_t x231 = 5360U;
int32_t x232 = INT32_MIN;
uint64_t x240 = 31LLU;
uint64_t t51 = 189767528LLU;
volatile uint32_t x282 = 7788602U;
int32_t x285 = -1;
uint16_t x286 = 956U;
int16_t x288 = INT16_MAX;
volatile uint8_t x295 = UINT8_MAX;
volatile int64_t t56 = -929697406935593LL;
volatile int64_t x304 = -25291LL;
uint64_t t58 = 1LLU;
int32_t x329 = -1;
static volatile int8_t x330 = INT8_MIN;
uint32_t x335 = UINT32_MAX;
int16_t x342 = INT16_MIN;
static uint32_t x348 = 3579240U;
int16_t x354 = -15011;
uint64_t x361 = UINT64_MAX;
int64_t x368 = 11507LL;
volatile int8_t x381 = INT8_MAX;
uint8_t x394 = 10U;
static int32_t x398 = INT32_MIN;
static int32_t t75 = 3764;
int64_t x405 = INT64_MIN;
static uint64_t x409 = 131192105515124513LLU;
uint64_t x411 = 3420LLU;
int64_t x412 = -1LL;
static int8_t x418 = 2;
static uint64_t x423 = UINT64_MAX;
volatile uint32_t x436 = 34U;
static volatile uint32_t t81 = 1381U;
uint16_t x437 = UINT16_MAX;
uint8_t x445 = 117U;
uint32_t x448 = 1785732031U;
static int32_t x451 = INT32_MIN;
int64_t t84 = 3921982492900771LL;
volatile uint16_t x455 = 1U;
static uint16_t x458 = 14U;
volatile int8_t x463 = INT8_MAX;
volatile uint64_t t89 = 71370083790124LLU;
volatile int64_t t90 = -66LL;
int32_t x483 = 521909098;
volatile uint32_t t91 = 93991U;
int64_t x492 = INT64_MAX;
volatile int64_t t93 = 728953575751369864LL;
static volatile int16_t x511 = INT16_MIN;
int8_t x520 = -1;
static volatile uint8_t x523 = UINT8_MAX;


void f0(void) {
	uint64_t x1 = 195LLU;
	int8_t x3 = INT8_MAX;
	int64_t x4 = INT64_MIN;
	volatile uint64_t t0 = 37843581848LLU;

	t0 = (x1/((x2+x3)&x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	volatile int64_t x6 = 39337914615775489LL;
	int32_t x8 = 1;
	int64_t t1 = 241082492600LL;

	t1 = (x5/((x6+x7)&x8));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	uint64_t x11 = 10225507135156LLU;
	int16_t x12 = -1;

	t2 = (x9/((x10+x11)&x12));

	if (t2 != 1803993LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = 2U;
	uint64_t x15 = 129257810240985126LLU;
	uint32_t x16 = 674U;
	volatile uint64_t t3 = 2589429491978857LLU;

	t3 = (x13/((x14+x15)&x16));

	if (t3 != 576460752303422464LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 1908;
	uint64_t x23 = 223778606908256LLU;
	int16_t x24 = -36;
	static uint64_t t4 = 15671173232242288LLU;

	t4 = (x21/((x22+x23)&x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	volatile int8_t x26 = 1;
	int8_t x27 = INT8_MIN;
	static volatile int8_t x28 = 5;
	int32_t t5 = -17379405;

	t5 = (x25/((x26+x27)&x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -5;
	int64_t x34 = 128379LL;
	static uint16_t x35 = 4U;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t6 = 15555054389302LLU;

	t6 = (x33/((x34+x35)&x36));

	if (t6 != 143685254852352LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 33442704508253937LL;
	volatile int8_t x39 = -1;
	static uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t7 = 586918408529242546LLU;

	t7 = (x37/((x38+x39)&x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = 416175717961LL;
	volatile int16_t x42 = -1;
	static uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t8 = 1709146LLU;

	t8 = (x41/((x42+x43)&x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	volatile int64_t t9 = 6958LL;

	t9 = (x45/((x46+x47)&x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	volatile uint64_t x50 = UINT64_MAX;
	uint16_t x51 = 325U;
	uint32_t x52 = 261761364U;
	volatile uint64_t t10 = 291913560LLU;

	t10 = (x49/((x50+x51)&x52));

	if (t10 != 56934395289227011LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 7U;
	volatile int8_t x54 = INT8_MIN;
	volatile int64_t x55 = 43256352550094212LL;
	volatile int64_t t11 = 16203004LL;

	t11 = (x53/((x54+x55)&x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = -1LL;
	uint64_t x60 = 139405260222LLU;
	uint64_t t12 = 26640098569550927LLU;

	t12 = (x57/((x58+x59)&x60));

	if (t12 != 9381417255LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = -7976421;
	static int8_t x62 = INT8_MAX;
	int16_t x63 = -101;
	int8_t x64 = INT8_MAX;
	int32_t t13 = -1539357;

	t13 = (x61/((x62+x63)&x64));

	if (t13 != -306785) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = 212510776;
	volatile int64_t x66 = -30319078LL;
	uint32_t x67 = 7137633U;
	volatile int64_t t14 = -1124LL;

	t14 = (x65/((x66+x67)&x68));

	if (t14 != -9LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	uint32_t x71 = UINT32_MAX;
	static int16_t x72 = INT16_MAX;
	uint32_t t15 = 58U;

	t15 = (x69/((x70+x71)&x72));

	if (t15 != 131590U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	volatile int16_t x78 = INT16_MIN;
	volatile uint16_t x79 = 8477U;
	int64_t x80 = INT64_MIN;
	int64_t t16 = -149585LL;

	t16 = (x77/((x78+x79)&x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = 28970U;
	int32_t x83 = 2016;
	volatile int16_t x84 = INT16_MAX;
	static volatile uint32_t t17 = 299493U;

	t17 = (x81/((x82+x83)&x84));

	if (t17 != 69304U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	static uint64_t x86 = 110964499230LLU;
	uint32_t x87 = UINT32_MAX;
	static volatile uint16_t x88 = 755U;

	t18 = (x85/((x86+x87)&x88));

	if (t18 != 34870971783950002LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -635890913;
	int32_t x90 = 0;
	int8_t x91 = INT8_MAX;
	int16_t x92 = 346;

	t19 = (x89/((x90+x91)&x92));

	if (t19 != -7065454) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = -1;
	int64_t x96 = 259957602308LL;
	volatile int64_t t20 = -125704552778LL;

	t20 = (x93/((x94+x95)&x96));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = 1858442451996644634LL;
	int8_t x99 = INT8_MIN;
	int32_t x100 = -634575;
	int64_t t21 = -4084038217949327837LL;

	t21 = (x97/((x98+x99)&x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -835LL;
	uint32_t x102 = 3U;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = 2263U;
	volatile int64_t t22 = 47078LL;

	t22 = (x101/((x102+x103)&x104));

	if (t22 != -278LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = 1;
	int16_t x106 = INT16_MIN;
	uint64_t x107 = 7466295LLU;
	int8_t x108 = INT8_MIN;
	static volatile uint64_t t23 = 21304234LLU;

	t23 = (x105/((x106+x107)&x108));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	static int32_t x110 = INT32_MIN;
	uint32_t x111 = 601930365U;
	static int16_t x112 = 534;
	static int64_t t24 = 961679656404172LL;

	t24 = (x109/((x110+x111)&x112));

	if (t24 != -17337165482809728LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1241;
	volatile int16_t x118 = -1;
	int16_t x119 = INT16_MAX;
	volatile int16_t x120 = -1;
	static volatile int32_t t25 = -173386257;

	t25 = (x117/((x118+x119)&x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	int32_t x124 = -1;
	static volatile int64_t t26 = 211LL;

	t26 = (x121/((x122+x123)&x124));

	if (t26 != 1024819115206086200LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = 3;
	uint8_t x126 = UINT8_MAX;
	uint64_t x127 = 4328433486706LLU;
	int8_t x128 = -11;
	volatile uint64_t t27 = 17925382686159435LLU;

	t27 = (x125/((x126+x127)&x128));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -1LL;
	volatile int32_t x131 = INT32_MIN;
	volatile int64_t t28 = -251206215LL;

	t28 = (x129/((x130+x131)&x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x137 = -1;
	int64_t x138 = 231230709428212639LL;
	int16_t x140 = -1;
	static volatile int64_t t29 = 1LL;

	t29 = (x137/((x138+x139)&x140));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MAX;
	int64_t x154 = 58310593LL;
	uint8_t x155 = 113U;
	int8_t x156 = 11;
	static int64_t t30 = 298LL;

	t30 = (x153/((x154+x155)&x156));

	if (t30 != 1073741823LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = 1;
	int8_t x158 = 7;
	uint16_t x159 = UINT16_MAX;
	int64_t t31 = 372009406919708LL;

	t31 = (x157/((x158+x159)&x160));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = 716993374;
	int32_t x163 = -31169092;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t32 = -435622129;

	t32 = (x161/((x162+x163)&x164));

	if (t32 != -38639) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = 3U;
	static int8_t x166 = INT8_MIN;
	static volatile int32_t x167 = -162;
	volatile int32_t t33 = 239654224;

	t33 = (x165/((x166+x167)&x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x169 = INT16_MIN;
	volatile uint32_t x170 = 1147693U;
	static int16_t x171 = INT16_MIN;
	int64_t x172 = -36618404929LL;
	volatile int64_t t34 = -120795730814912309LL;

	t34 = (x169/((x170+x171)&x172));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x173 = 1014767LL;
	int32_t x174 = 206693291;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = -3891;
	int64_t t35 = -363598178LL;

	t35 = (x173/((x174+x175)&x176));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	uint32_t x182 = UINT32_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	volatile uint32_t t36 = 80894510U;

	t36 = (x181/((x182+x183)&x184));

	if (t36 != 16909191U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = 2;
	volatile int32_t x186 = 7236;
	int8_t x187 = -1;
	static int16_t x188 = 130;
	int32_t t37 = -7152;

	t37 = (x185/((x186+x187)&x188));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = INT8_MIN;
	uint64_t x191 = 581075634339927856LLU;
	uint64_t t38 = 1548604438202872LLU;

	t38 = (x189/((x190+x191)&x192));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = INT32_MIN;
	static uint16_t x194 = UINT16_MAX;
	int32_t x195 = -193;
	uint8_t x196 = 124U;
	volatile int32_t t39 = 601099;

	t39 = (x193/((x194+x195)&x196));

	if (t39 != -35791394) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x205 = -1;
	int64_t x206 = -11192488369328LL;
	static uint64_t x207 = 12287955803015LLU;
	static uint64_t t40 = UINT64_MAX;

	t40 = (x205/((x206+x207)&x208));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x209 = 7;
	static int16_t x210 = INT16_MIN;
	int32_t x212 = INT32_MAX;

	t41 = (x209/((x210+x211)&x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x221 = UINT32_MAX;
	uint8_t x222 = UINT8_MAX;
	int32_t x223 = INT32_MIN;
	int32_t x224 = -1;
	uint32_t t42 = 116697232U;

	t42 = (x221/((x222+x223)&x224));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = INT8_MAX;
	volatile int32_t x226 = INT32_MIN;
	static int8_t x228 = -1;
	int32_t t43 = 5311;

	t43 = (x225/((x226+x227)&x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x229 = INT64_MIN;
	volatile uint64_t x230 = 3364342569122LLU;
	volatile uint64_t t44 = 15LLU;

	t44 = (x229/((x230+x231)&x232));

	if (t44 != 2742635LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x233 = INT64_MAX;
	uint64_t x234 = 103635LLU;
	uint16_t x235 = 28U;
	int8_t x236 = INT8_MAX;
	uint64_t t45 = 1803516744232LLU;

	t45 = (x233/((x234+x235)&x236));

	if (t45 != 83093441773466448LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	static uint8_t x239 = 26U;
	uint64_t t46 = 249609676LLU;

	t46 = (x237/((x238+x239)&x240));

	if (t46 != 709490156598541075LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MAX;
	volatile int16_t x243 = INT16_MAX;
	uint16_t x244 = UINT16_MAX;
	int32_t t47 = 23;

	t47 = (x241/((x242+x243)&x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = -1;
	int16_t x250 = INT16_MAX;
	int64_t x251 = -165274099959436LL;
	int16_t x252 = -1;
	int64_t t48 = 49114395646LL;

	t48 = (x249/((x250+x251)&x252));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = -2679735744LL;
	volatile int8_t x254 = INT8_MIN;
	static int64_t x255 = -768625043985830LL;
	int32_t x256 = 129;
	int64_t t49 = 54LL;

	t49 = (x253/((x254+x255)&x256));

	if (t49 != -20935435LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int16_t x266 = INT16_MIN;
	static int32_t x267 = -1;
	int16_t x268 = -3521;
	volatile int32_t t50 = -218793;

	t50 = (x265/((x266+x267)&x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 1137419407521310LLU;
	int16_t x276 = INT16_MIN;

	t51 = (x273/((x274+x275)&x276));

	if (t51 != 16218LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = INT32_MIN;
	volatile uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t52 = 826U;

	t52 = (x281/((x282+x283)&x284));

	if (t52 != 275U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x287 = INT16_MIN;
	int32_t t53 = 48747;

	t53 = (x285/((x286+x287)&x288));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x289 = INT64_MIN;
	int32_t x290 = -1;
	int64_t x291 = -117055LL;
	static uint16_t x292 = UINT16_MAX;
	volatile int64_t t54 = -1LL;

	t54 = (x289/((x290+x291)&x292));

	if (t54 != -658060219524456LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = -1;
	static int64_t x294 = -4155765096137456076LL;
	int16_t x296 = INT16_MIN;
	static volatile int64_t t55 = 15506254910452LL;

	t55 = (x293/((x294+x295)&x296));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = 338436989795LL;
	int64_t x298 = -6LL;
	uint32_t x299 = UINT32_MAX;
	uint16_t x300 = 14U;

	t56 = (x297/((x298+x299)&x300));

	if (t56 != 42304623724LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x301 = INT16_MAX;
	static volatile int8_t x302 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;
	volatile int64_t t57 = 228753925LL;

	t57 = (x301/((x302+x303)&x304));

	if (t57 != 618LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x305 = 1U;
	static int8_t x306 = -2;
	int8_t x307 = -1;
	volatile uint64_t x308 = UINT64_MAX;

	t58 = (x305/((x306+x307)&x308));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = -1;
	int64_t x311 = -487639781775291736LL;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t59 = 10651055022LLU;

	t59 = (x309/((x310+x311)&x312));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x317 = UINT8_MAX;
	static int8_t x318 = INT8_MIN;
	uint8_t x319 = 0U;
	static volatile int32_t x320 = 13701;
	int32_t t60 = 524;

	t60 = (x317/((x318+x319)&x320));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = INT16_MIN;
	uint32_t x326 = UINT32_MAX;
	volatile int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MAX;
	uint32_t t61 = 0U;

	t61 = (x325/((x326+x327)&x328));

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x331 = 13327241U;
	int64_t x332 = -14LL;
	int64_t t62 = 2162432173533LL;

	t62 = (x329/((x330+x331)&x332));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x333 = -1;
	int8_t x334 = -1;
	static int8_t x336 = -1;
	volatile uint32_t t63 = 7707781U;

	t63 = (x333/((x334+x335)&x336));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x341 = INT8_MIN;
	int64_t x343 = -17003524178188LL;
	int32_t x344 = 60642320;
	static volatile int64_t t64 = 28LL;

	t64 = (x341/((x342+x343)&x344));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x345 = INT64_MIN;
	static int16_t x346 = -5;
	int16_t x347 = INT16_MAX;
	volatile int64_t t65 = -1851416436114260000LL;

	t65 = (x345/((x346+x347)&x348));

	if (t65 != -1225208825299518LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x353 = 353011162U;
	volatile int32_t x355 = -4;
	int32_t x356 = -1;
	static uint32_t t66 = 1652606152U;

	t66 = (x353/((x354+x355)&x356));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x357 = -1LL;
	static uint8_t x358 = UINT8_MAX;
	int64_t x359 = 1267LL;
	int8_t x360 = INT8_MIN;
	int64_t t67 = -47162869177610LL;

	t67 = (x357/((x358+x359)&x360));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x362 = INT8_MIN;
	int64_t x363 = -6466911988LL;
	int64_t x364 = INT64_MAX;
	uint64_t t68 = 0LLU;

	t68 = (x361/((x362+x363)&x364));

	if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = -751201300LL;
	volatile uint32_t x366 = UINT32_MAX;
	volatile uint8_t x367 = 71U;
	int64_t t69 = -53187925747LL;

	t69 = (x365/((x366+x367)&x368));

	if (t69 != -11381837LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x369 = -1LL;
	static int16_t x370 = 0;
	int64_t x371 = -1LL;
	int32_t x372 = -1579642;
	static int64_t t70 = -29539180LL;

	t70 = (x369/((x370+x371)&x372));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x382 = -1;
	int8_t x383 = INT8_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t71 = 297772;

	t71 = (x381/((x382+x383)&x384));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x385 = 2040U;
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MIN;
	int8_t x388 = -1;
	uint32_t t72 = 1352959171U;

	t72 = (x385/((x386+x387)&x388));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = -1LL;
	uint32_t x390 = UINT32_MAX;
	int64_t x391 = 3652LL;
	static uint16_t x392 = UINT16_MAX;
	static volatile int64_t t73 = 2259LL;

	t73 = (x389/((x390+x391)&x392));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x393 = -1;
	int32_t x395 = INT32_MIN;
	int16_t x396 = -1;
	volatile int32_t t74 = -4;

	t74 = (x393/((x394+x395)&x396));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x397 = INT16_MIN;
	int16_t x399 = 6;
	int16_t x400 = INT16_MIN;

	t75 = (x397/((x398+x399)&x400));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x406 = 2U;
	int8_t x407 = -1;
	int64_t x408 = 449LL;
	int64_t t76 = INT64_MIN;

	t76 = (x405/((x406+x407)&x408));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x410 = 2U;
	uint64_t t77 = 262811729158866LLU;

	t77 = (x409/((x410+x411)&x412));

	if (t77 != 38337844978119LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x413 = 10;
	volatile uint32_t x414 = 176796983U;
	static int64_t x415 = -964516LL;
	int32_t x416 = -1;
	int64_t t78 = -423998151LL;

	t78 = (x413/((x414+x415)&x416));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x417 = 24281451LLU;
	uint8_t x419 = 3U;
	int16_t x420 = -7;
	volatile uint64_t t79 = 60LLU;

	t79 = (x417/((x418+x419)&x420));

	if (t79 != 24281451LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x421 = 1U;
	int16_t x422 = 127;
	int64_t x424 = INT64_MAX;
	volatile uint64_t t80 = 197LLU;

	t80 = (x421/((x422+x423)&x424));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x433 = INT8_MIN;
	volatile int8_t x434 = 0;
	int8_t x435 = -1;

	t81 = (x433/((x434+x435)&x436));

	if (t81 != 126322563U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x438 = 3391U;
	volatile int32_t x439 = INT32_MIN;
	uint64_t x440 = 508282880674LLU;
	volatile uint64_t t82 = 495089LLU;

	t82 = (x437/((x438+x439)&x440));

	if (t82 != 1927LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x446 = INT8_MIN;
	int64_t x447 = -263652430LL;
	volatile int64_t t83 = -4385061504LL;

	t83 = (x445/((x446+x447)&x448));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x449 = UINT16_MAX;
	int64_t x450 = 4712846LL;
	uint32_t x452 = 2996398U;

	t84 = (x449/((x450+x451)&x452));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x453 = INT8_MIN;
	int16_t x454 = 64;
	int16_t x456 = 111;
	int32_t t85 = 635565;

	t85 = (x453/((x454+x455)&x456));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = -1LL;
	volatile int8_t x459 = 31;
	static int32_t x460 = INT32_MAX;
	volatile int64_t t86 = -44572LL;

	t86 = (x457/((x458+x459)&x460));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x461 = 37U;
	int16_t x462 = INT16_MIN;
	static int8_t x464 = -31;
	volatile int32_t t87 = 46;

	t87 = (x461/((x462+x463)&x464));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x469 = UINT64_MAX;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = 57LLU;
	uint16_t x472 = UINT16_MAX;
	volatile uint64_t t88 = 1517349464784043LLU;

	t88 = (x469/((x470+x471)&x472));

	if (t88 != 281780250113947LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x473 = 46U;
	volatile int8_t x474 = -1;
	static int32_t x475 = -1;
	uint64_t x476 = 180218697560124LLU;

	t89 = (x473/((x474+x475)&x476));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x477 = INT64_MAX;
	int8_t x478 = 0;
	int64_t x479 = -1LL;
	int8_t x480 = INT8_MIN;

	t90 = (x477/((x478+x479)&x480));

	if (t90 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x481 = 69U;
	volatile uint8_t x482 = 4U;
	uint32_t x484 = 2632949U;

	t91 = (x481/((x482+x483)&x484));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x485 = INT32_MIN;
	int32_t x486 = -1;
	int16_t x487 = INT16_MIN;
	int16_t x488 = INT16_MAX;
	int32_t t92 = -108768615;

	t92 = (x485/((x486+x487)&x488));

	if (t92 != -65538) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x489 = 6829177;
	uint16_t x490 = 7602U;
	int16_t x491 = INT16_MIN;

	t93 = (x489/((x490+x491)&x492));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x501 = INT64_MIN;
	uint8_t x502 = 2U;
	volatile int32_t x503 = -24827985;
	int8_t x504 = -1;
	volatile int64_t t94 = -1506791LL;

	t94 = (x501/((x502+x503)&x504));

	if (t94 != 371490992113LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x505 = -1LL;
	int16_t x506 = INT16_MIN;
	static volatile uint32_t x507 = 42U;
	int16_t x508 = INT16_MAX;
	volatile int64_t t95 = -673828325393667277LL;

	t95 = (x505/((x506+x507)&x508));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x509 = INT16_MAX;
	int64_t x510 = INT64_MAX;
	int16_t x512 = -1;
	volatile int64_t t96 = -184250583032LL;

	t96 = (x509/((x510+x511)&x512));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x517 = -1LL;
	int16_t x518 = INT16_MAX;
	int64_t x519 = INT64_MIN;
	int64_t t97 = -30182388509LL;

	t97 = (x517/((x518+x519)&x520));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x521 = -1;
	int16_t x522 = -803;
	static int16_t x524 = -1;
	volatile int32_t t98 = 4921;

	t98 = (x521/((x522+x523)&x524));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x525 = UINT16_MAX;
	int32_t x526 = -7948497;
	int32_t x527 = -1;
	int64_t x528 = INT64_MIN;
	volatile int64_t t99 = 5101LL;

	t99 = (x525/((x526+x527)&x528));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

