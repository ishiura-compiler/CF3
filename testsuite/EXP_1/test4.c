#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
uint16_t x7 = 5706U;
static volatile int64_t t2 = 494687665LL;
static uint8_t x23 = 6U;
volatile int16_t x31 = INT16_MIN;
static uint32_t x32 = 2U;
int8_t x34 = INT8_MAX;
int8_t x35 = -1;
static int32_t t7 = -52940;
int16_t x41 = 6285;
int64_t t9 = -1LL;
int32_t x53 = INT32_MAX;
int16_t x56 = INT16_MIN;
uint16_t x65 = 1124U;
int32_t x67 = INT32_MAX;
uint64_t x69 = 776LLU;
volatile uint64_t t13 = 24LLU;
volatile uint16_t x73 = 3U;
static int16_t x74 = 0;
uint32_t x86 = 10U;
int64_t x88 = INT64_MAX;
int8_t x93 = INT8_MAX;
int32_t x101 = -1;
static int64_t x106 = INT64_MAX;
volatile int64_t t21 = 281LL;
int64_t x119 = INT64_MIN;
static int32_t x120 = INT32_MAX;
uint32_t x121 = UINT32_MAX;
volatile int64_t t24 = -162077014265LL;
int16_t x127 = INT16_MIN;
int32_t x130 = -1;
int32_t x131 = -1;
volatile int8_t x132 = -1;
int32_t t26 = 2;
static int32_t x134 = INT32_MIN;
uint64_t x136 = 665615537563LLU;
static int8_t x149 = -1;
uint8_t x153 = 10U;
int32_t x154 = 58;
int16_t x156 = -10531;
uint64_t x162 = 3736LLU;
int16_t x165 = 0;
int8_t x167 = INT8_MAX;
int8_t x169 = INT8_MIN;
static volatile uint8_t x171 = UINT8_MAX;
int32_t x172 = -1;
int32_t x176 = -1;
int16_t x180 = INT16_MIN;
static int8_t x181 = INT8_MAX;
static uint16_t x193 = 4U;
int32_t x198 = -1;
static int8_t x199 = -1;
int16_t x207 = INT16_MIN;
int8_t x211 = 0;
volatile uint32_t x213 = 167U;
int8_t x217 = -1;
volatile uint64_t x219 = UINT64_MAX;
int32_t t44 = 731833161;
uint32_t t45 = 92U;
static int64_t x244 = INT64_MAX;
static volatile int64_t t47 = 2438LL;
static int64_t x245 = -1LL;
volatile int64_t t49 = -661407622LL;
uint64_t x253 = 3932119LLU;
uint64_t x259 = UINT64_MAX;
int8_t x261 = 1;
int16_t x262 = INT16_MAX;
int16_t x266 = 10168;
uint64_t x267 = 13328358809591417LLU;
static uint8_t x269 = 37U;
int64_t x273 = -1LL;
volatile uint32_t t57 = 18U;
static uint32_t t58 = 6469U;
int32_t x294 = INT32_MIN;
static uint32_t x296 = 7621475U;
int64_t x303 = INT64_MAX;
static int32_t x306 = 6251;
static uint16_t x332 = 59U;
volatile uint32_t t65 = 320670631U;
uint16_t x336 = 5289U;
static volatile int16_t x346 = -1;
volatile uint32_t t68 = 7U;
volatile int32_t x355 = INT32_MAX;
uint8_t x356 = 79U;
volatile int64_t x368 = INT64_MAX;
static uint32_t x382 = 31441U;
uint64_t x386 = 2948509LLU;
int16_t x405 = INT16_MIN;
int16_t x411 = INT16_MIN;
int32_t x414 = -1;
static int32_t x415 = -1;
int32_t x424 = INT32_MIN;
int64_t t81 = 0LL;
uint64_t x427 = UINT64_MAX;
uint8_t x434 = UINT8_MAX;
int16_t x436 = INT16_MAX;
static volatile int32_t t83 = 877;
int32_t x441 = -1;
static int32_t x443 = -1;
volatile int32_t t85 = -187;
static uint64_t t88 = 3048566157743326LLU;
int32_t x461 = -1;
volatile uint32_t x469 = UINT32_MAX;
static uint32_t x477 = 44127U;
int32_t x478 = INT32_MIN;
static int8_t x479 = -1;
int64_t t94 = -1013312057159LL;
int64_t x486 = INT64_MIN;
volatile uint32_t t99 = 5071455U;


void f0(void) {
	uint8_t x1 = 0U;
	static volatile uint32_t x2 = 58719U;
	volatile int8_t x3 = INT8_MAX;
	static volatile uint32_t t0 = 44063599U;

	t0 = (((x1+x2)+x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 18U;
	int8_t x6 = INT8_MIN;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 58970266;

	t1 = (((x5+x6)+x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 3674LL;
	int32_t x10 = -1;
	static volatile int16_t x11 = INT16_MAX;
	volatile int16_t x12 = 62;

	t2 = (((x9+x10)+x11)/x12);

	if (t2 != 587LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	volatile int8_t x18 = INT8_MIN;
	volatile uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MAX;
	volatile int32_t t3 = -1;

	t3 = (((x17+x18)+x19)/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	int16_t x22 = INT16_MAX;
	int64_t x24 = 1299LL;
	static int64_t t4 = -7701873502189LL;

	t4 = (((x21+x22)+x23)/x24);

	if (t4 != 25LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int32_t x30 = INT32_MIN;
	uint32_t t5 = 94643689U;

	t5 = (((x29+x30)+x31)/x32);

	if (t5 != 1073725439U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x33 = 82921U;
	int16_t x36 = INT16_MIN;
	uint32_t t6 = 24122U;

	t6 = (((x33+x34)+x35)/x36);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MIN;
	int32_t x38 = -1;
	int8_t x39 = 29;
	static int8_t x40 = INT8_MIN;

	t7 = (((x37+x38)+x39)/x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x42 = -1;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	volatile int64_t t8 = 567675800533LL;

	t8 = (((x41+x42)+x43)/x44);

	if (t8 != 4294967295LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = UINT8_MAX;
	static int64_t x46 = INT64_MIN;
	static uint8_t x47 = UINT8_MAX;
	static int32_t x48 = -1;

	t9 = (((x45+x46)+x47)/x48);

	if (t9 != 9223372036854775298LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = -39;
	static volatile uint32_t t10 = 1116795U;

	t10 = (((x53+x54)+x55)/x56);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = INT16_MAX;
	volatile uint32_t t11 = 1U;

	t11 = (((x57+x58)+x59)/x60);

	if (t11 != 65538U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x66 = INT16_MIN;
	int32_t x68 = -44;
	volatile int32_t t12 = 93101;

	t12 = (((x65+x66)+x67)/x68);

	if (t12 != -48805727) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MIN;
	volatile int64_t x72 = INT64_MAX;

	t13 = (((x69+x70)+x71)/x72);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x75 = 9302745545490182LL;
	int64_t x76 = INT64_MIN;
	int64_t t14 = 544920LL;

	t14 = (((x73+x74)+x75)/x76);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int16_t x78 = -339;
	int32_t x79 = INT32_MAX;
	int32_t x80 = -29445;
	volatile int32_t t15 = 1034;

	t15 = (((x77+x78)+x79)/x80);

	if (t15 != -72932) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = 1;
	uint32_t x82 = 1374284U;
	uint16_t x83 = 1084U;
	uint64_t x84 = 457LLU;
	static volatile uint64_t t16 = 459089540662025222LLU;

	t16 = (((x81+x82)+x83)/x84);

	if (t16 != 3009LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x85 = -1LL;
	int32_t x87 = INT32_MIN;
	volatile int64_t t17 = -371460615483157LL;

	t17 = (((x85+x86)+x87)/x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = -161717644700632LL;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	static uint32_t x92 = 11317U;
	volatile int64_t t18 = 59102LL;

	t18 = (((x89+x90)+x91)/x92);

	if (t18 != -14289987822LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = INT16_MIN;
	int8_t x95 = 43;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t19 = 6671901;

	t19 = (((x93+x94)+x95)/x96);

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	volatile int64_t x104 = -1LL;
	int64_t t20 = -141783884784871LL;

	t20 = (((x101+x102)+x103)/x104);

	if (t20 != -4294934526LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = INT16_MIN;
	static int32_t x107 = -355521412;
	int64_t x108 = -106104808LL;

	t21 = (((x105+x106)+x107)/x108);

	if (t21 != -86926994264LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x113 = 3;
	int8_t x114 = INT8_MAX;
	volatile uint16_t x115 = UINT16_MAX;
	int8_t x116 = 1;
	int32_t t22 = 528;

	t22 = (((x113+x114)+x115)/x116);

	if (t22 != 65665) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x117 = UINT32_MAX;
	uint64_t x118 = UINT64_MAX;
	uint64_t t23 = 1863883377452LLU;

	t23 = (((x117+x118)+x119)/x120);

	if (t23 != 4294967300LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x122 = INT64_MIN;
	int64_t x123 = -1LL;
	static uint32_t x124 = 1148024U;

	t24 = (((x121+x122)+x123)/x124);

	if (t24 != -8034128234740LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = 17642200226965186LL;
	uint16_t x126 = 1U;
	static uint32_t x128 = UINT32_MAX;
	int64_t t25 = 771245LL;

	t25 = (((x125+x126)+x127)/x128);

	if (t25 != 4107644LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = UINT16_MAX;

	t26 = (((x129+x130)+x131)/x132);

	if (t26 != -65533) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x135 = -1;
	uint64_t t27 = 2505650076874LLU;

	t27 = (((x133+x134)+x135)/x136);

	if (t27 != 27713812LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 1494767LLU;
	volatile int16_t x138 = -1;
	volatile int8_t x139 = INT8_MAX;
	int16_t x140 = -1;
	uint64_t t28 = 33375053LLU;

	t28 = (((x137+x138)+x139)/x140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = -4181;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = -2;
	int32_t t29 = -602;

	t29 = (((x141+x142)+x143)/x144);

	if (t29 != 2218) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x150 = 0U;
	uint16_t x151 = UINT16_MAX;
	static uint32_t x152 = UINT32_MAX;
	volatile uint32_t t30 = 16105U;

	t30 = (((x149+x150)+x151)/x152);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x155 = -1630;
	volatile int32_t t31 = -297129308;

	t31 = (((x153+x154)+x155)/x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MIN;
	uint8_t x163 = 0U;
	volatile int16_t x164 = 6426;
	volatile uint64_t t32 = 120267155796954LLU;

	t32 = (((x161+x162)+x163)/x164);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x166 = -1LL;
	int8_t x168 = INT8_MIN;
	volatile int64_t t33 = 38817614549LL;

	t33 = (((x165+x166)+x167)/x168);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x170 = 3U;
	int32_t t34 = -26820;

	t34 = (((x169+x170)+x171)/x172);

	if (t34 != -130) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int8_t x174 = 5;
	static int16_t x175 = 363;
	static int32_t t35 = -498990864;

	t35 = (((x173+x174)+x175)/x176);

	if (t35 != -65903) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = -1;
	int8_t x178 = INT8_MIN;
	uint32_t x179 = 85369U;
	static uint32_t t36 = 418576U;

	t36 = (((x177+x178)+x179)/x180);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x182 = INT32_MIN;
	static int64_t x183 = -1LL;
	static uint32_t x184 = 15590329U;
	int64_t t37 = 34124166401425LL;

	t37 = (((x181+x182)+x183)/x184);

	if (t37 != -137LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x194 = 1868940633U;
	static int64_t x195 = 1LL;
	uint32_t x196 = 51855U;
	static int64_t t38 = -665648LL;

	t38 = (((x193+x194)+x195)/x196);

	if (t38 != 36041LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x197 = 10045568372LL;
	int16_t x200 = INT16_MIN;
	volatile int64_t t39 = -147079413043627563LL;

	t39 = (((x197+x198)+x199)/x200);

	if (t39 != -306566LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x205 = 12U;
	int32_t x206 = -1;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t40 = -1;

	t40 = (((x205+x206)+x207)/x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MIN;
	static int32_t x212 = INT32_MAX;
	int32_t t41 = 0;

	t41 = (((x209+x210)+x211)/x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x214 = -1;
	int8_t x215 = 1;
	volatile int64_t x216 = INT64_MIN;
	volatile int64_t t42 = -209LL;

	t42 = (((x213+x214)+x215)/x216);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x218 = -431599045;
	volatile uint8_t x220 = 50U;
	uint64_t t43 = 780412587276854139LLU;

	t43 = (((x217+x218)+x219)/x220);

	if (t43 != 368934881465559051LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = -1;
	uint16_t x230 = 13322U;
	int16_t x231 = -1;
	int16_t x232 = INT16_MIN;

	t44 = (((x229+x230)+x231)/x232);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x233 = UINT32_MAX;
	static int8_t x234 = 1;
	int8_t x235 = -1;
	uint8_t x236 = UINT8_MAX;

	t45 = (((x233+x234)+x235)/x236);

	if (t45 != 16843009U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MAX;
	int8_t x239 = -15;
	uint64_t x240 = UINT64_MAX;
	uint64_t t46 = 35341LLU;

	t46 = (((x237+x238)+x239)/x240);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x241 = 3534645434358420LL;
	uint8_t x242 = UINT8_MAX;
	static int16_t x243 = 1759;

	t47 = (((x241+x242)+x243)/x244);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x246 = 4501322773753921LLU;
	int32_t x247 = 494687;
	uint32_t x248 = 103U;
	uint64_t t48 = 128767549211349LLU;

	t48 = (((x245+x246)+x247)/x248);

	if (t48 != 43702162856782LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = INT16_MIN;
	static int64_t x250 = -1LL;
	uint16_t x251 = 167U;
	static volatile int16_t x252 = 1426;

	t49 = (((x249+x250)+x251)/x252);

	if (t49 != -22LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x254 = -1;
	int32_t x255 = 94103;
	static int64_t x256 = 624871LL;
	static volatile uint64_t t50 = 41820616324779LLU;

	t50 = (((x253+x254)+x255)/x256);

	if (t50 != 6LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	volatile uint64_t t51 = 817LLU;

	t51 = (((x257+x258)+x259)/x260);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x263 = 20U;
	int8_t x264 = -1;
	volatile int32_t t52 = -158123879;

	t52 = (((x261+x262)+x263)/x264);

	if (t52 != -32788) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x265 = 279;
	int8_t x268 = -2;
	volatile uint64_t t53 = 22943773LLU;

	t53 = (((x265+x266)+x267)/x268);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x270 = -524516799LL;
	int32_t x271 = 95040768;
	int8_t x272 = -1;
	int64_t t54 = -23LL;

	t54 = (((x269+x270)+x271)/x272);

	if (t54 != 429475994LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x274 = INT8_MIN;
	int32_t x275 = -14070670;
	int64_t x276 = INT64_MAX;
	static volatile int64_t t55 = -23972363LL;

	t55 = (((x273+x274)+x275)/x276);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x281 = -1;
	volatile int8_t x282 = 60;
	static volatile uint32_t x283 = UINT32_MAX;
	int16_t x284 = INT16_MAX;
	static volatile uint32_t t56 = 1744016U;

	t56 = (((x281+x282)+x283)/x284);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x285 = 930U;
	volatile int8_t x286 = -5;
	uint32_t x287 = UINT32_MAX;
	int32_t x288 = INT32_MIN;

	t57 = (((x285+x286)+x287)/x288);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x289 = -32125;
	uint32_t x290 = 458U;
	uint32_t x291 = 13348U;
	volatile int16_t x292 = INT16_MIN;

	t58 = (((x289+x290)+x291)/x292);

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x293 = 31148LLU;
	int16_t x295 = INT16_MIN;
	static uint64_t t59 = 429391078629LLU;

	t59 = (((x293+x294)+x295)/x296);

	if (t59 != 2420364046534LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x297 = 36;
	static volatile int32_t x298 = 104444210;
	static int16_t x299 = INT16_MAX;
	uint16_t x300 = 5290U;
	static int32_t t60 = 53037620;

	t60 = (((x297+x298)+x299)/x300);

	if (t60 != 19749) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	volatile int16_t x304 = -1;
	volatile int64_t t61 = 4555905822152380383LL;

	t61 = (((x301+x302)+x303)/x304);

	if (t61 != -9223372036854742911LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = 184;
	static int64_t x307 = -7619LL;
	volatile uint8_t x308 = 1U;
	static volatile int64_t t62 = 36LL;

	t62 = (((x305+x306)+x307)/x308);

	if (t62 != -1184LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x309 = INT16_MAX;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = 0U;
	uint64_t x312 = 8141521928180LLU;
	uint64_t t63 = 907359800LLU;

	t63 = (((x309+x310)+x311)/x312);

	if (t63 != 1132880LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x313 = -583792274101679631LL;
	int64_t x314 = 1416538996155619LL;
	uint8_t x315 = 1U;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t64 = 25479743736LL;

	t64 = (((x313+x314)+x315)/x316);

	if (t64 != -8886484094079LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = 0;
	int8_t x330 = 6;
	static uint32_t x331 = 464847729U;

	t65 = (((x329+x330)+x331)/x332);

	if (t65 != 7878775U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	int64_t x335 = INT64_MAX;
	volatile int64_t t66 = 3920587LL;

	t66 = (((x333+x334)+x335)/x336);

	if (t66 != 1743878244820333LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x341 = 1836925LLU;
	uint16_t x342 = 476U;
	int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MAX;
	volatile uint64_t t67 = 45313127176717472LLU;

	t67 = (((x341+x342)+x343)/x344);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x345 = INT16_MIN;
	static volatile uint32_t x347 = 1466U;
	volatile int32_t x348 = 569998;

	t68 = (((x345+x346)+x347)/x348);

	if (t68 != 7535U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = UINT64_MAX;
	static uint16_t x350 = UINT16_MAX;
	volatile int32_t x351 = -1;
	int32_t x352 = 1;
	uint64_t t69 = 54662284582085603LLU;

	t69 = (((x349+x350)+x351)/x352);

	if (t69 != 65533LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x353 = 1U;
	volatile int32_t x354 = INT32_MIN;
	uint32_t t70 = 19171622U;

	t70 = (((x353+x354)+x355)/x356);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x365 = 10U;
	static int16_t x366 = INT16_MIN;
	static int32_t x367 = INT32_MAX;
	volatile int64_t t71 = -117026870325448301LL;

	t71 = (((x365+x366)+x367)/x368);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MIN;
	int32_t x371 = -2;
	static int32_t x372 = -187705;
	static volatile uint64_t t72 = 448LLU;

	t72 = (((x369+x370)+x371)/x372);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x381 = INT64_MIN;
	int16_t x383 = INT16_MAX;
	int64_t x384 = -1LL;
	int64_t t73 = 35702122886LL;

	t73 = (((x381+x382)+x383)/x384);

	if (t73 != 9223372036854711600LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x385 = INT64_MAX;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t74 = 747LLU;

	t74 = (((x385+x386)+x387)/x388);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x389 = 48U;
	uint16_t x390 = 3U;
	volatile int32_t x391 = -57;
	uint32_t x392 = 1286U;
	uint32_t t75 = 155643950U;

	t75 = (((x389+x390)+x391)/x392);

	if (t75 != 3339787U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MAX;
	static volatile uint32_t x395 = 847233209U;
	int8_t x396 = INT8_MIN;
	volatile uint32_t t76 = 278U;

	t76 = (((x393+x394)+x395)/x396);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x401 = 10912951U;
	int16_t x402 = INT16_MAX;
	uint32_t x403 = UINT32_MAX;
	static int32_t x404 = INT32_MIN;
	static uint32_t t77 = 4U;

	t77 = (((x401+x402)+x403)/x404);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x406 = -4832115;
	volatile uint32_t x407 = 1031470U;
	int64_t x408 = INT64_MAX;
	volatile int64_t t78 = 861526542LL;

	t78 = (((x405+x406)+x407)/x408);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x409 = 28U;
	static int64_t x410 = 6LL;
	int64_t x412 = INT64_MIN;
	volatile int64_t t79 = -250060475450733834LL;

	t79 = (((x409+x410)+x411)/x412);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x413 = 621U;
	int16_t x416 = INT16_MIN;
	volatile uint32_t t80 = 1U;

	t80 = (((x413+x414)+x415)/x416);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x421 = UINT8_MAX;
	int64_t x422 = -1LL;
	int8_t x423 = -9;

	t81 = (((x421+x422)+x423)/x424);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x425 = -1LL;
	static uint64_t x426 = 22LLU;
	uint16_t x428 = UINT16_MAX;
	volatile uint64_t t82 = 5711364072LLU;

	t82 = (((x425+x426)+x427)/x428);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x433 = 74U;
	int32_t x435 = INT32_MIN;

	t83 = (((x433+x434)+x435)/x436);

	if (t83 != -65537) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = 31;
	static volatile int8_t x438 = INT8_MIN;
	volatile int8_t x439 = INT8_MIN;
	volatile uint64_t x440 = UINT64_MAX;
	uint64_t t84 = 7662796186308966445LLU;

	t84 = (((x437+x438)+x439)/x440);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x442 = UINT16_MAX;
	int16_t x444 = -9;

	t85 = (((x441+x442)+x443)/x444);

	if (t85 != -7281) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x445 = 117770LLU;
	int16_t x446 = 9376;
	int32_t x447 = INT32_MAX;
	int16_t x448 = -1;
	uint64_t t86 = 637302LLU;

	t86 = (((x445+x446)+x447)/x448);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x449 = UINT32_MAX;
	int64_t x450 = INT64_MIN;
	int32_t x451 = INT32_MIN;
	int8_t x452 = -1;
	static volatile int64_t t87 = -1595LL;

	t87 = (((x449+x450)+x451)/x452);

	if (t87 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x453 = UINT64_MAX;
	int64_t x454 = -2637448310827LL;
	volatile int64_t x455 = INT64_MAX;
	static uint16_t x456 = UINT16_MAX;

	t88 = (((x453+x454)+x455)/x456);

	if (t88 != 140739595626862LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x457 = 4050604133695167462LL;
	volatile uint64_t x458 = UINT64_MAX;
	volatile int8_t x459 = INT8_MAX;
	int32_t x460 = 1;
	static volatile uint64_t t89 = 206545513980295889LLU;

	t89 = (((x457+x458)+x459)/x460);

	if (t89 != 4050604133695167588LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x462 = INT16_MIN;
	uint32_t x463 = UINT32_MAX;
	int16_t x464 = -1;
	volatile uint32_t t90 = 352U;

	t90 = (((x461+x462)+x463)/x464);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x465 = -3;
	int16_t x466 = INT16_MIN;
	int32_t x467 = 205;
	int64_t x468 = INT64_MIN;
	int64_t t91 = -44751583000LL;

	t91 = (((x465+x466)+x467)/x468);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x470 = 31342U;
	static volatile int32_t x471 = INT32_MAX;
	uint64_t x472 = 16894286LLU;
	uint64_t t92 = 2696614883LLU;

	t92 = (((x469+x470)+x471)/x472);

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x473 = -1LL;
	uint64_t x474 = UINT64_MAX;
	volatile int32_t x475 = 40098;
	int64_t x476 = 1LL;
	static uint64_t t93 = 77466215LLU;

	t93 = (((x473+x474)+x475)/x476);

	if (t93 != 40096LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x480 = INT64_MIN;

	t94 = (((x477+x478)+x479)/x480);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x481 = -1;
	int64_t x482 = 200956675LL;
	static uint8_t x483 = 9U;
	static volatile int32_t x484 = INT32_MIN;
	volatile int64_t t95 = -24984938LL;

	t95 = (((x481+x482)+x483)/x484);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x485 = UINT64_MAX;
	static int16_t x487 = INT16_MAX;
	volatile uint32_t x488 = UINT32_MAX;
	uint64_t t96 = 3490261LLU;

	t96 = (((x485+x486)+x487)/x488);

	if (t96 != 2147483648LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x489 = 8854313;
	static int64_t x490 = -235LL;
	int16_t x491 = 408;
	static int8_t x492 = 1;
	int64_t t97 = 9LL;

	t97 = (((x489+x490)+x491)/x492);

	if (t97 != 8854486LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x493 = INT8_MAX;
	static int16_t x494 = INT16_MAX;
	uint64_t x495 = UINT64_MAX;
	int16_t x496 = INT16_MAX;
	uint64_t t98 = 5774417864LLU;

	t98 = (((x493+x494)+x495)/x496);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x497 = 7U;
	int32_t x498 = 58881;
	uint8_t x499 = UINT8_MAX;
	volatile int16_t x500 = -5;

	t99 = (((x497+x498)+x499)/x500);

	if (t99 != 0U) { NG(); } else { ; }
	
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

