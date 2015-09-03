#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
int16_t x7 = -388;
uint8_t x10 = 0U;
int16_t x11 = 15;
int16_t x13 = INT16_MAX;
uint32_t x14 = 13936U;
static int8_t x17 = INT8_MAX;
int8_t x21 = -1;
volatile int64_t x46 = 0LL;
volatile int64_t t9 = 12767285LL;
volatile uint32_t x70 = 1U;
int64_t x78 = 532577LL;
int32_t x79 = INT32_MIN;
volatile uint8_t x83 = UINT8_MAX;
static int64_t t19 = 807021917267341LL;
static uint16_t x96 = 81U;
volatile int64_t t20 = -1826542670728LL;
volatile int16_t x97 = 4851;
volatile int32_t t21 = 6;
int64_t t22 = -46331553241LL;
volatile int64_t x111 = -1LL;
uint8_t x119 = 3U;
int32_t x120 = 2754205;
int8_t x129 = INT8_MAX;
uint8_t x131 = 6U;
static int8_t x133 = -1;
int8_t x141 = -3;
volatile int64_t x142 = -57808657LL;
int32_t x146 = -1;
static uint64_t x148 = UINT64_MAX;
int16_t x157 = INT16_MAX;
int32_t x160 = INT32_MAX;
static volatile int64_t t33 = 32248LL;
uint8_t x168 = UINT8_MAX;
int16_t x170 = 2961;
int8_t x171 = INT8_MAX;
int32_t t35 = -886231;
volatile int16_t x173 = 3833;
static uint16_t x174 = 5000U;
uint8_t x176 = UINT8_MAX;
uint32_t x178 = 11702U;
int32_t x181 = -1;
uint32_t x185 = 118822U;
uint32_t x186 = UINT32_MAX;
uint8_t x190 = 2U;
uint16_t x191 = 0U;
int32_t x204 = INT32_MIN;
static int16_t x211 = -1;
int16_t x212 = 1;
static int64_t t43 = 141712886LL;
volatile int32_t x217 = INT32_MIN;
static volatile int8_t x218 = INT8_MIN;
volatile uint8_t x233 = 48U;
int8_t x245 = INT8_MIN;
static int64_t x246 = INT64_MIN;
uint32_t t52 = 1U;
static volatile int64_t x258 = -1LL;
int16_t x263 = -1;
int32_t x271 = 4882473;
uint8_t x276 = UINT8_MAX;
int32_t t59 = 759;
int32_t x287 = -1;
static volatile int32_t t60 = 86;
uint32_t x293 = 234123016U;
volatile int8_t x300 = INT8_MAX;
int8_t x303 = INT8_MIN;
static int32_t x305 = INT32_MIN;
int64_t x309 = -1LL;
volatile int32_t x312 = INT32_MIN;
int32_t x322 = INT32_MIN;
uint16_t x324 = 1484U;
volatile int16_t x326 = INT16_MAX;
uint8_t x327 = 1U;
int32_t x334 = 91;
uint32_t x336 = 36704U;
uint32_t t74 = 1943482910U;
uint8_t x349 = 42U;
volatile uint64_t t77 = 62740LLU;
int16_t x384 = 2705;
int32_t t82 = -515478873;
static int16_t x386 = 6313;
static int64_t t83 = -4194LL;
volatile int8_t x389 = INT8_MAX;
int32_t x407 = INT32_MIN;
static uint32_t t88 = 3463365U;
volatile uint64_t t89 = 1941407LLU;
uint16_t x450 = 2U;
int16_t x460 = -1921;
volatile uint32_t x461 = 0U;
static volatile uint32_t x463 = 620724U;
int8_t x465 = INT8_MIN;
int64_t x466 = -2239167673923LL;
static volatile int64_t t99 = 115LL;


void f0(void) {
	int32_t x1 = -6195;
	int8_t x2 = -1;
	int16_t x3 = INT16_MAX;
	static int32_t t0 = -151;

	t0 = ((x1+(x2-x3))/x4);

	if (t0 != -306) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static uint8_t x6 = 1U;
	static int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -173073335;

	t1 = ((x5+(x6-x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 11693LLU;
	uint32_t x12 = 2464U;
	uint64_t t2 = 3526643640458588LLU;

	t2 = ((x9+(x10-x11))/x12);

	if (t2 != 4LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x15 = 5465U;
	volatile uint32_t x16 = UINT32_MAX;
	static uint32_t t3 = 1103783606U;

	t3 = ((x13+(x14-x15))/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	volatile uint32_t x19 = 8221051U;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -662556018LL;

	t4 = ((x17+(x18-x19))/x20);

	if (t4 != -4286746244LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = INT8_MIN;
	uint8_t x23 = 40U;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -1;

	t5 = ((x21+(x22-x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	static int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	int64_t x36 = 25613577269559LL;
	volatile uint64_t t6 = 3435866590325335LLU;

	t6 = ((x33+(x34-x35))/x36);

	if (t6 != 360096LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MAX;
	uint8_t x38 = 10U;
	int8_t x39 = -1;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t7 = -8;

	t7 = ((x37+(x38-x39))/x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 13327904382441LLU;
	static int64_t x42 = -1LL;
	int32_t x43 = -57;
	int64_t x44 = -2900LL;
	uint64_t t8 = 9174LLU;

	t8 = ((x41+(x42-x43))/x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	uint32_t x47 = 49U;
	int16_t x48 = INT16_MAX;

	t9 = ((x45+(x46-x47))/x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x49 = 1U;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MIN;
	uint32_t t10 = 106140U;

	t10 = ((x49+(x50-x51))/x52);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = 99;
	static uint8_t x58 = 4U;
	int32_t x59 = 34791;
	volatile int16_t x60 = 1167;
	volatile int32_t t11 = 2509390;

	t11 = ((x57+(x58-x59))/x60);

	if (t11 != -29) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	volatile int8_t x62 = 1;
	uint64_t x63 = 1LLU;
	volatile int8_t x64 = 14;
	static uint64_t t12 = 21150307LLU;

	t12 = ((x61+(x62-x63))/x64);

	if (t12 != 1317624576693539401LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = INT8_MIN;
	static int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MAX;
	volatile int32_t t13 = 188710415;

	t13 = ((x65+(x66-x67))/x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	uint64_t x71 = 197589435592LLU;
	int64_t x72 = 440163759261454LL;
	uint64_t t14 = 19LLU;

	t14 = ((x69+(x70-x71))/x72);

	if (t14 != 41908LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	uint32_t x74 = UINT32_MAX;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile uint64_t t15 = 126262463LLU;

	t15 = ((x73+(x74-x75))/x76);

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 3U;
	int16_t x80 = INT16_MIN;
	volatile int64_t t16 = 2129605080LL;

	t16 = ((x77+(x78-x79))/x80);

	if (t16 != -65552LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -1;
	uint8_t x82 = 15U;
	int32_t x84 = -10001;
	static volatile int32_t t17 = -821;

	t17 = ((x81+(x82-x83))/x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 29U;
	int64_t x86 = -1LL;
	int16_t x87 = 13748;
	int8_t x88 = INT8_MIN;
	int64_t t18 = -1334LL;

	t18 = ((x85+(x86-x87))/x88);

	if (t18 != 107LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -119;
	int64_t x90 = -302LL;
	volatile int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MAX;

	t19 = ((x89+(x90-x91))/x92);

	if (t19 != -65538LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x93 = INT64_MIN;
	volatile int16_t x94 = -1;
	int64_t x95 = -1LL;

	t20 = ((x93+(x94-x95))/x96);

	if (t20 != -113868790578454022LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x98 = INT8_MIN;
	static int32_t x99 = -1;
	int32_t x100 = -1;

	t21 = ((x97+(x98-x99))/x100);

	if (t21 != -4724) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	int32_t x102 = -1;
	static int64_t x103 = INT64_MIN;
	volatile int8_t x104 = INT8_MIN;

	t22 = ((x101+(x102-x103))/x104);

	if (t22 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -370826037LL;
	int8_t x110 = INT8_MIN;
	volatile int8_t x112 = -1;
	static volatile int64_t t23 = 7LL;

	t23 = ((x109+(x110-x111))/x112);

	if (t23 != 370826164LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = -882780006;
	volatile int64_t t24 = -22940288LL;

	t24 = ((x117+(x118-x119))/x120);

	if (t24 != 3348832797838LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x130 = 0U;
	volatile int64_t x132 = INT64_MAX;
	volatile int64_t t25 = -340661268867722LL;

	t25 = ((x129+(x130-x131))/x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x134 = 241U;
	uint16_t x135 = 1U;
	int16_t x136 = 24;
	volatile int32_t t26 = -21004887;

	t26 = ((x133+(x134-x135))/x136);

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x137 = INT32_MIN;
	volatile uint32_t x138 = 78988824U;
	int8_t x139 = 2;
	uint16_t x140 = 27U;
	uint32_t t27 = 1U;

	t27 = ((x137+(x138-x139))/x140);

	if (t27 != 82461943U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x143 = -1;
	int64_t x144 = INT64_MAX;
	static volatile int64_t t28 = 774LL;

	t28 = ((x141+(x142-x143))/x144);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = -1;
	uint16_t x147 = UINT16_MAX;
	volatile uint64_t t29 = 40528871LLU;

	t29 = ((x145+(x146-x147))/x148);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -1LL;
	int16_t x150 = -131;
	uint64_t x151 = 3130603LLU;
	static int64_t x152 = -1LL;
	volatile uint64_t t30 = 938LLU;

	t30 = ((x149+(x150-x151))/x152);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x153 = INT16_MIN;
	volatile uint8_t x154 = 56U;
	static int16_t x155 = INT16_MAX;
	int32_t x156 = INT32_MAX;
	static int32_t t31 = 209;

	t31 = ((x153+(x154-x155))/x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int32_t t32 = -10153;

	t32 = ((x157+(x158-x159))/x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x161 = INT16_MAX;
	int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MAX;
	uint32_t x164 = UINT32_MAX;

	t33 = ((x161+(x162-x163))/x164);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = -3720311;
	int8_t x166 = INT8_MIN;
	int32_t x167 = -1;
	int32_t t34 = 1608908;

	t34 = ((x165+(x166-x167))/x168);

	if (t34 != -14589) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = -1;
	int8_t x172 = INT8_MAX;

	t35 = ((x169+(x170-x171))/x172);

	if (t35 != 22) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x175 = -5971491319955LL;
	int64_t t36 = 70428LL;

	t36 = ((x173+(x174-x175))/x176);

	if (t36 != 23417613054LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 37556U;
	int32_t x179 = -425;
	uint8_t x180 = UINT8_MAX;
	volatile uint32_t t37 = 13357067U;

	t37 = ((x177+(x178-x179))/x180);

	if (t37 != 194U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x182 = INT32_MIN;
	static uint32_t x183 = 85593U;
	static int64_t x184 = INT64_MIN;
	volatile int64_t t38 = 30963LL;

	t38 = ((x181+(x182-x183))/x184);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x187 = -2067;
	uint64_t x188 = 7526LLU;
	uint64_t t39 = 587661296275064788LLU;

	t39 = ((x185+(x186-x187))/x188);

	if (t39 != 16LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t40 = 845259924439LL;

	t40 = ((x189+(x190-x191))/x192);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x201 = 344210374317445827LLU;
	int64_t x202 = 15037507545LL;
	volatile uint8_t x203 = 107U;
	static volatile uint64_t t41 = 45383555898918508LLU;

	t41 = ((x201+(x202-x203))/x204);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x205 = INT32_MAX;
	volatile int32_t x206 = INT32_MIN;
	volatile uint64_t x207 = 4584526869982395LLU;
	volatile int64_t x208 = INT64_MAX;
	uint64_t t42 = 26109LLU;

	t42 = ((x205+(x206-x207))/x208);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 104725691U;
	static int64_t x210 = 55323399LL;

	t43 = ((x209+(x210-x211))/x212);

	if (t43 != 160049091LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = -1;
	static uint32_t x215 = 129086510U;
	static volatile uint32_t x216 = 7U;
	volatile uint32_t t44 = 31594121U;

	t44 = ((x213+(x214-x215))/x216);

	if (t44 != 288342448U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x219 = -1LL;
	volatile uint16_t x220 = 2U;
	volatile int64_t t45 = 16013824737268LL;

	t45 = ((x217+(x218-x219))/x220);

	if (t45 != -1073741887LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 14976552LLU;
	static int8_t x222 = -25;
	static uint16_t x223 = UINT16_MAX;
	uint32_t x224 = UINT32_MAX;
	uint64_t t46 = 4543054035424376987LLU;

	t46 = ((x221+(x222-x223))/x224);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = -1;
	uint8_t x226 = 8U;
	uint16_t x227 = 4U;
	static int8_t x228 = 24;
	int32_t t47 = -1;

	t47 = ((x225+(x226-x227))/x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x234 = 0U;
	int64_t x235 = 324315807076LL;
	int8_t x236 = INT8_MAX;
	static volatile int64_t t48 = 4409LL;

	t48 = ((x233+(x234-x235))/x236);

	if (t48 != -2553667771LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x237 = 1029U;
	uint64_t x238 = 14029109LLU;
	static int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t49 = 248569093270LLU;

	t49 = ((x237+(x238-x239))/x240);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x247 = -4514419;
	int32_t x248 = 59;
	int64_t t50 = -1245503LL;

	t50 = ((x245+(x246-x247))/x248);

	if (t50 != -156328339607631551LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MAX;
	int16_t x251 = -1;
	static uint16_t x252 = UINT16_MAX;
	static int32_t t51 = -193309;

	t51 = ((x249+(x250-x251))/x252);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = 139;
	int16_t x254 = -6;
	static uint32_t x255 = 16020507U;
	static int8_t x256 = INT8_MIN;

	t52 = ((x253+(x254-x255))/x256);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x257 = 337070118U;
	uint64_t x259 = 523058154996824622LLU;
	volatile int8_t x260 = -1;
	static uint64_t t53 = 432950LLU;

	t53 = ((x257+(x258-x259))/x260);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = -4627791LL;
	int32_t x262 = 950735;
	volatile int64_t x264 = INT64_MIN;
	volatile int64_t t54 = -1360431328466339131LL;

	t54 = ((x261+(x262-x263))/x264);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x265 = INT64_MIN;
	volatile uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 5U;
	uint16_t x268 = UINT16_MAX;
	uint64_t t55 = 691LLU;

	t55 = ((x265+(x266-x267))/x268);

	if (t55 != 140739635871744LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MAX;
	int8_t x270 = INT8_MAX;
	uint64_t x272 = 136LLU;
	volatile uint64_t t56 = 2608625579LLU;

	t56 = ((x269+(x270-x271))/x272);

	if (t56 != 67818912035660981LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x273 = 1909214936457222LL;
	int64_t x274 = INT64_MIN;
	static uint64_t x275 = 105577015LLU;
	volatile uint64_t t57 = 266375136241LLU;

	t57 = ((x273+(x274-x275))/x276);

	if (t57 != 36177573536022180LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = 333LLU;
	static int32_t x278 = -199;
	uint16_t x279 = 25315U;
	uint64_t x280 = UINT64_MAX;
	uint64_t t58 = 1234565802936LLU;

	t58 = ((x277+(x278-x279))/x280);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = -629;
	int8_t x283 = -1;
	int8_t x284 = INT8_MIN;

	t59 = ((x281+(x282-x283))/x284);

	if (t59 != -16777211) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x285 = 0U;
	int16_t x286 = INT16_MAX;
	uint16_t x288 = UINT16_MAX;

	t60 = ((x285+(x286-x287))/x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x294 = 12U;
	volatile int32_t x295 = 414513723;
	uint32_t x296 = UINT32_MAX;
	uint32_t t61 = 622013U;

	t61 = ((x293+(x294-x295))/x296);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x297 = 118U;
	int8_t x298 = INT8_MAX;
	uint32_t x299 = 226222U;
	uint32_t t62 = 806U;

	t62 = ((x297+(x298-x299))/x300);

	if (t62 != 33816860U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x301 = INT8_MIN;
	static int16_t x302 = INT16_MIN;
	volatile int32_t x304 = INT32_MIN;
	int32_t t63 = 45623;

	t63 = ((x301+(x302-x303))/x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x306 = 448567LL;
	static int64_t x307 = -27LL;
	static int16_t x308 = -1;
	int64_t t64 = -17801LL;

	t64 = ((x305+(x306-x307))/x308);

	if (t64 != 2147035054LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x310 = 65047349U;
	int64_t x311 = -192180LL;
	int64_t t65 = 26575LL;

	t65 = ((x309+(x310-x311))/x312);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x313 = 4U;
	volatile int16_t x314 = -1;
	int64_t x315 = -1LL;
	static int8_t x316 = 1;
	volatile int64_t t66 = 836LL;

	t66 = ((x313+(x314-x315))/x316);

	if (t66 != 4LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = UINT64_MAX;
	volatile uint64_t x318 = 212476097427896LLU;
	int64_t x319 = INT64_MIN;
	static volatile int64_t x320 = -1LL;
	uint64_t t67 = 7336251LLU;

	t67 = ((x317+(x318-x319))/x320);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x321 = 58;
	static int16_t x323 = -1;
	int32_t t68 = 6;

	t68 = ((x321+(x322-x323))/x324);

	if (t68 != -1447091) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x325 = 7774U;
	volatile uint8_t x328 = UINT8_MAX;
	int32_t t69 = -2;

	t69 = ((x325+(x326-x327))/x328);

	if (t69 != 158) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = INT16_MAX;
	static int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	static uint32_t x332 = 111022649U;
	volatile uint64_t t70 = 1021724577438649717LLU;

	t70 = ((x329+(x330-x331))/x332);

	if (t70 != 83076490427LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x333 = 437U;
	uint8_t x335 = UINT8_MAX;
	static volatile uint32_t t71 = 60U;

	t71 = ((x333+(x334-x335))/x336);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x337 = -26;
	int8_t x338 = -1;
	int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MAX;
	int64_t t72 = -10616760LL;

	t72 = ((x337+(x338-x339))/x340);

	if (t72 != 72624976668147840LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 11U;
	uint64_t x342 = 53537604295214LLU;
	static int8_t x343 = INT8_MIN;
	static volatile int32_t x344 = INT32_MAX;
	volatile uint64_t t73 = 53305185745640LLU;

	t73 = ((x341+(x342-x343))/x344);

	if (t73 != 24930LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	int16_t x347 = -597;
	int32_t x348 = INT32_MIN;

	t74 = ((x345+(x346-x347))/x348);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x350 = 48LLU;
	uint32_t x351 = 53564U;
	int8_t x352 = -7;
	volatile uint64_t t75 = 7988255881488LLU;

	t75 = ((x349+(x350-x351))/x352);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int32_t x355 = 1;
	volatile int64_t x356 = 446LL;
	volatile int64_t t76 = 5523230559530LL;

	t76 = ((x353+(x354-x355))/x356);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;
	volatile uint64_t x360 = 7494LLU;

	t77 = ((x357+(x358-x359))/x360);

	if (t77 != 2461535104578265LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = -43;
	volatile int8_t x362 = INT8_MAX;
	uint16_t x363 = UINT16_MAX;
	int32_t x364 = 27286;
	volatile int32_t t78 = 50707619;

	t78 = ((x361+(x362-x363))/x364);

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x365 = 654;
	int32_t x366 = -1397591;
	volatile int8_t x367 = INT8_MAX;
	volatile int16_t x368 = -1;
	int32_t t79 = -2187931;

	t79 = ((x365+(x366-x367))/x368);

	if (t79 != 1397064) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = INT16_MIN;
	static uint32_t x370 = 121846U;
	int16_t x371 = -24;
	uint32_t x372 = 1458008786U;
	volatile uint32_t t80 = 174052U;

	t80 = ((x369+(x370-x371))/x372);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x373 = 14835U;
	int16_t x374 = 2205;
	int8_t x375 = -1;
	int64_t x376 = -1LL;
	static int64_t t81 = -1LL;

	t81 = ((x373+(x374-x375))/x376);

	if (t81 != -17041LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x381 = 0;
	int16_t x382 = INT16_MIN;
	static int32_t x383 = 385906224;

	t82 = ((x381+(x382-x383))/x384);

	if (t82 != -142676) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x385 = 2U;
	int64_t x387 = INT64_MAX;
	int16_t x388 = -1;

	t83 = ((x385+(x386-x387))/x388);

	if (t83 != 9223372036854769492LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MIN;
	static volatile uint32_t x392 = 126919U;
	volatile int64_t t84 = 18429LL;

	t84 = ((x389+(x390-x391))/x392);

	if (t84 != -72671326079683LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = -1LL;
	volatile int64_t x394 = INT64_MIN;
	static int16_t x395 = INT16_MIN;
	int32_t x396 = -1;
	volatile int64_t t85 = 119883952207457LL;

	t85 = ((x393+(x394-x395))/x396);

	if (t85 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MAX;
	volatile int8_t x399 = INT8_MAX;
	volatile int16_t x400 = -1;
	int32_t t86 = 0;

	t86 = ((x397+(x398-x399))/x400);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x405 = UINT32_MAX;
	volatile int8_t x406 = INT8_MIN;
	int32_t x408 = INT32_MIN;
	static volatile uint32_t t87 = 4449U;

	t87 = ((x405+(x406-x407))/x408);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x409 = INT8_MIN;
	uint32_t x410 = 23830209U;
	int8_t x411 = INT8_MIN;
	uint32_t x412 = UINT32_MAX;

	t88 = ((x409+(x410-x411))/x412);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x413 = UINT64_MAX;
	static int64_t x414 = -1LL;
	volatile uint16_t x415 = UINT16_MAX;
	uint8_t x416 = 51U;

	t89 = ((x413+(x414-x415))/x416);

	if (t89 != 361700864190382079LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x417 = 1U;
	int8_t x418 = -1;
	int8_t x419 = INT8_MAX;
	uint64_t x420 = 35479512469116LLU;
	uint64_t t90 = 3897975889LLU;

	t90 = ((x417+(x418-x419))/x420);

	if (t90 != 519926LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x429 = UINT16_MAX;
	uint8_t x430 = 1U;
	uint32_t x431 = 35U;
	int16_t x432 = -3;
	volatile uint32_t t91 = 2264662U;

	t91 = ((x429+(x430-x431))/x432);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MIN;
	static int32_t x435 = 466713327;
	int32_t x436 = -1;
	static int32_t t92 = -4464867;

	t92 = ((x433+(x434-x435))/x436);

	if (t92 != 466745840) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x437 = -1;
	int64_t x438 = 28707027290069300LL;
	static uint8_t x439 = UINT8_MAX;
	int64_t x440 = INT64_MIN;
	int64_t t93 = -982422131391LL;

	t93 = ((x437+(x438-x439))/x440);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x445 = -8;
	static volatile int16_t x446 = -1;
	int16_t x447 = -1;
	static int16_t x448 = INT16_MIN;
	volatile int32_t t94 = 1;

	t94 = ((x445+(x446-x447))/x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = 2519239211974603LL;
	static int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MIN;
	int64_t t95 = -102LL;

	t95 = ((x449+(x450-x451))/x452);

	if (t95 != -76881079467LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x453 = 1;
	static int8_t x454 = INT8_MIN;
	int64_t x455 = -1LL;
	int64_t x456 = 243010352423794LL;
	volatile int64_t t96 = 1432398035503345LL;

	t96 = ((x453+(x454-x455))/x456);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x457 = 1520U;
	static volatile int8_t x458 = 45;
	uint16_t x459 = 4850U;
	int32_t t97 = -27;

	t97 = ((x457+(x458-x459))/x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x462 = INT16_MAX;
	uint16_t x464 = 3372U;
	uint32_t t98 = 418471U;

	t98 = ((x461+(x462-x463))/x464);

	if (t98 != 1273540U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x467 = -237;
	volatile int32_t x468 = -34441;

	t99 = ((x465+(x466-x467))/x468);

	if (t99 != 65014595LL) { NG(); } else { ; }
	
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

