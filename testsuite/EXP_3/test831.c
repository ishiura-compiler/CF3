#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = UINT64_MAX;
static int64_t x14 = INT64_MIN;
int64_t x15 = -1LL;
int64_t x21 = INT64_MAX;
static int64_t x32 = 599744579LL;
uint64_t x41 = UINT64_MAX;
int16_t x59 = INT16_MAX;
volatile int64_t t13 = -1LL;
uint64_t x61 = 13LLU;
int8_t x63 = 0;
int16_t x66 = INT16_MIN;
int16_t x75 = INT16_MAX;
uint16_t x77 = 0U;
int64_t x80 = -1LL;
int32_t x83 = -1811093;
int8_t x88 = -10;
uint16_t x93 = UINT16_MAX;
static volatile int32_t x97 = INT32_MAX;
uint8_t x106 = 0U;
volatile int32_t x108 = INT32_MIN;
int16_t x109 = -1;
uint64_t t26 = UINT64_MAX;
uint64_t t27 = UINT64_MAX;
static volatile uint64_t x117 = 16241553130LLU;
int8_t x119 = INT8_MIN;
static int64_t x129 = -1LL;
volatile int64_t t32 = 755044832508628536LL;
int64_t x137 = INT64_MAX;
uint32_t x143 = 738544U;
int8_t x150 = -1;
uint64_t t36 = UINT64_MAX;
int8_t x160 = INT8_MIN;
volatile uint8_t x161 = UINT8_MAX;
uint64_t x170 = UINT64_MAX;
volatile uint8_t x175 = 2U;
volatile int16_t x176 = INT16_MAX;
uint64_t x177 = 4224707458724LLU;
int64_t x180 = -1LL;
uint16_t x183 = 247U;
int64_t t43 = -52898LL;
uint32_t x185 = UINT32_MAX;
int8_t x191 = -10;
static volatile int32_t x193 = 1;
uint8_t x200 = 35U;
uint8_t x214 = UINT8_MAX;
static uint16_t x215 = 299U;
static int16_t x218 = INT16_MIN;
int16_t x221 = INT16_MIN;
int16_t x224 = 171;
uint8_t x227 = 107U;
int8_t x232 = INT8_MIN;
uint8_t x237 = UINT8_MAX;
uint8_t x240 = 1U;
int64_t x246 = INT64_MIN;
uint8_t x253 = 1U;
int16_t x255 = -15;
uint8_t x260 = 1U;
uint32_t x261 = UINT32_MAX;
int16_t x262 = 15259;
volatile int64_t x270 = -1LL;
int16_t x272 = INT16_MIN;
volatile int64_t t65 = -85390510013719746LL;
uint8_t x282 = 59U;
volatile int32_t t68 = 756413;
volatile int32_t t69 = 9721;
int16_t x289 = INT16_MAX;
static uint16_t x291 = UINT16_MAX;
int32_t t72 = -12078528;
static volatile uint8_t x306 = UINT8_MAX;
volatile uint64_t t74 = 3500591778LLU;
volatile int64_t x310 = 118LL;
int16_t x324 = INT16_MIN;
uint32_t x325 = 113940U;
uint64_t t80 = 27LLU;
uint32_t x334 = UINT32_MAX;
int16_t x340 = -1593;
int64_t x349 = INT64_MIN;
int32_t x351 = -1;
int32_t x352 = 388560;
static uint32_t t86 = UINT32_MAX;
int64_t x366 = INT64_MIN;
static int64_t x371 = -83794515185LL;
static volatile uint8_t x382 = UINT8_MAX;
volatile int64_t t95 = 3604LL;
volatile int32_t x393 = INT32_MIN;
int64_t x394 = -3066515679LL;
static volatile int16_t x406 = 2;


void f0(void) {
	uint16_t x1 = 56U;
	static volatile int8_t x2 = -49;
	uint64_t x3 = 35741491532436169LLU;
	int8_t x4 = INT8_MIN;

	t0 = ((x1|x2)|(x3%x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 461352196632LLU;
	volatile int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x5|x6)|(x7%x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 17U;
	int8_t x10 = -1;
	static uint8_t x11 = 0U;
	static int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 1871LL;

	t2 = ((x9|x10)|(x11%x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	static int32_t x16 = -337;
	volatile int64_t t3 = 380756141LL;

	t3 = ((x13|x14)|(x15%x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 31;
	int64_t x18 = INT64_MAX;
	volatile uint64_t x19 = UINT64_MAX;
	volatile int16_t x20 = 419;
	uint64_t t4 = 754556042168LLU;

	t4 = ((x17|x18)|(x19%x20));

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 25U;
	uint64_t x23 = 9116260344626LLU;
	int64_t x24 = 35333115832LL;
	volatile uint64_t t5 = 27046939947LLU;

	t5 = ((x21|x22)|(x23%x24));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	uint16_t x27 = 241U;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -42649;

	t6 = ((x25|x26)|(x27%x28));

	if (t6 != -14) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = 3270;
	volatile uint16_t x30 = UINT16_MAX;
	int8_t x31 = -1;
	volatile int64_t t7 = 12961225LL;

	t7 = ((x29|x30)|(x31%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MAX;
	int64_t x36 = INT64_MIN;
	static volatile int64_t t8 = 281676236969959005LL;

	t8 = ((x33|x34)|(x35%x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	uint32_t x38 = 3471U;
	int8_t x39 = -1;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = 0LL;

	t9 = ((x37|x38)|(x39%x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = 2582;
	volatile int64_t x43 = INT64_MIN;
	uint8_t x44 = 8U;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41|x42)|(x43%x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	uint8_t x50 = 0U;
	int16_t x51 = -1;
	int16_t x52 = INT16_MAX;
	volatile int32_t t11 = -5;

	t11 = ((x49|x50)|(x51%x52));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 151U;
	uint32_t x54 = 27U;
	static int32_t x55 = INT32_MIN;
	int16_t x56 = -1;
	static uint32_t t12 = 497U;

	t12 = ((x53|x54)|(x55%x56));

	if (t12 != 159U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 185273771663317645LL;
	uint32_t x58 = 3978U;
	volatile int16_t x60 = INT16_MAX;

	t13 = ((x57|x58)|(x59%x60));

	if (t13 != 185273771663318927LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = INT64_MIN;
	volatile int16_t x64 = -1;
	static uint64_t t14 = 11LLU;

	t14 = ((x61|x62)|(x63%x64));

	if (t14 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x65 = 1LL;
	static int16_t x67 = 7;
	static int64_t x68 = INT64_MAX;
	int64_t t15 = 470852159733731LL;

	t15 = ((x65|x66)|(x67%x68));

	if (t15 != -32761LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = INT16_MIN;
	static int16_t x70 = INT16_MAX;
	int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t16 = 63192;

	t16 = ((x69|x70)|(x71%x72));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	uint16_t x74 = UINT16_MAX;
	uint16_t x76 = 978U;
	int32_t t17 = 67969080;

	t17 = ((x73|x74)|(x75%x76));

	if (t17 != -2147418113) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x78 = 1204192561LLU;
	volatile int16_t x79 = 4;
	static volatile uint64_t t18 = 4618359832685593LLU;

	t18 = ((x77|x78)|(x79%x80));

	if (t18 != 1204192561LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = 15U;
	int64_t x82 = 1LL;
	uint8_t x84 = 1U;
	volatile int64_t t19 = -1LL;

	t19 = ((x81|x82)|(x83%x84));

	if (t19 != 15LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = 14809;
	int8_t x87 = -1;
	static volatile int32_t t20 = -24657368;

	t20 = ((x85|x86)|(x87%x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 0U;
	uint32_t x90 = UINT32_MAX;
	int8_t x91 = INT8_MIN;
	int16_t x92 = -1;
	uint32_t t21 = UINT32_MAX;

	t21 = ((x89|x90)|(x91%x92));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = -1LL;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MAX;
	static volatile int64_t t22 = -13270803LL;

	t22 = ((x93|x94)|(x95%x96));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x98 = -42;
	int64_t x99 = -1LL;
	static volatile int16_t x100 = -1;
	volatile int64_t t23 = 549587LL;

	t23 = ((x97|x98)|(x99%x100));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = -6;
	int64_t x102 = -484696171261844LL;
	int32_t x103 = INT32_MAX;
	static volatile uint16_t x104 = 888U;
	int64_t t24 = 1LL;

	t24 = ((x101|x102)|(x103%x104));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	int8_t x107 = -11;
	int32_t t25 = 0;

	t25 = ((x105|x106)|(x107%x108));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x110 = 2230;
	volatile uint64_t x111 = UINT64_MAX;
	static int16_t x112 = 2604;

	t26 = ((x109|x110)|(x111%x112));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 2715U;
	volatile int8_t x114 = INT8_MIN;
	static uint64_t x115 = 170939965639887LLU;
	static uint8_t x116 = UINT8_MAX;

	t27 = ((x113|x114)|(x115%x116));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = INT64_MIN;
	volatile int8_t x120 = INT8_MIN;
	static uint64_t t28 = 4185273041493LLU;

	t28 = ((x117|x118)|(x119%x120));

	if (t28 != 9223372053096328938LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 6U;
	int16_t x122 = INT16_MAX;
	int32_t x123 = -1;
	int64_t x124 = INT64_MIN;
	int64_t t29 = 7404012LL;

	t29 = ((x121|x122)|(x123%x124));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 309108LL;
	int32_t x126 = -1;
	int32_t x127 = -8;
	uint32_t x128 = 13U;
	int64_t t30 = -44109931159562763LL;

	t30 = ((x125|x126)|(x127%x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x130 = INT64_MAX;
	int16_t x131 = 846;
	int16_t x132 = INT16_MIN;
	volatile int64_t t31 = -13LL;

	t31 = ((x129|x130)|(x131%x132));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -1;
	int64_t x134 = INT64_MAX;
	static int32_t x135 = -1;
	int16_t x136 = 248;

	t32 = ((x133|x134)|(x135%x136));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x138 = 0U;
	int32_t x139 = 25890027;
	uint16_t x140 = 79U;
	static int64_t t33 = INT64_MAX;

	t33 = ((x137|x138)|(x139%x140));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 0;
	int8_t x142 = INT8_MIN;
	uint16_t x144 = UINT16_MAX;
	static uint32_t t34 = 810481581U;

	t34 = ((x141|x142)|(x143%x144));

	if (t34 != 4294967291U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 27U;
	int32_t x146 = INT32_MIN;
	volatile int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MAX;
	uint32_t t35 = 12U;

	t35 = ((x145|x146)|(x147%x148));

	if (t35 != 2147483775U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = 43U;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = -963840735368071531LL;

	t36 = ((x149|x150)|(x151%x152));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 11004953U;
	int64_t x154 = 1130135660072LL;
	static int8_t x155 = -1;
	int16_t x156 = -1;
	static volatile int64_t t37 = 44600048037921829LL;

	t37 = ((x153|x154)|(x155%x156));

	if (t37 != 1130146295353LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = INT8_MIN;
	volatile int16_t x158 = -1;
	int32_t x159 = INT32_MIN;
	int32_t t38 = -9908873;

	t38 = ((x157|x158)|(x159%x160));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x162 = 2U;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 61U;
	static int32_t t39 = -276461;

	t39 = ((x161|x162)|(x163%x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	volatile int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = ((x169|x170)|(x171%x172));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MAX;
	uint64_t x174 = 271552774129LLU;
	uint64_t t41 = 3LLU;

	t41 = ((x173|x174)|(x175%x176));

	if (t41 != 271552774143LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = INT64_MIN;
	static int64_t x179 = 23502659567060906LL;
	volatile uint64_t t42 = 112794039202LLU;

	t42 = ((x177|x178)|(x179%x180));

	if (t42 != 9223376261562234532LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = 96;
	static int16_t x182 = -1;
	int64_t x184 = INT64_MIN;

	t43 = ((x181|x182)|(x183%x184));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x186 = INT64_MAX;
	uint32_t x187 = 8309507U;
	int64_t x188 = 30112036260606LL;
	volatile int64_t t44 = INT64_MAX;

	t44 = ((x185|x186)|(x187%x188));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	static uint64_t x190 = 149547LLU;
	int16_t x192 = INT16_MIN;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x189|x190)|(x191%x192));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x194 = 123U;
	static volatile uint32_t x195 = 15U;
	int16_t x196 = -1;
	uint32_t t46 = 1U;

	t46 = ((x193|x194)|(x195%x196));

	if (t46 != 127U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = -1LL;
	static int8_t x198 = INT8_MIN;
	volatile int32_t x199 = -1;
	volatile int64_t t47 = 1418118766571737LL;

	t47 = ((x197|x198)|(x199%x200));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	int32_t x202 = INT32_MIN;
	volatile uint64_t x203 = 2461LLU;
	static volatile int32_t x204 = -1;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x201|x202)|(x203%x204));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	static int64_t x206 = INT64_MIN;
	static int64_t x207 = INT64_MIN;
	volatile int8_t x208 = -9;
	static volatile int64_t t49 = -1052042747045183LL;

	t49 = ((x205|x206)|(x207%x208));

	if (t49 != -8LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MAX;
	static volatile uint16_t x211 = UINT16_MAX;
	int16_t x212 = -1;
	volatile int32_t t50 = INT32_MAX;

	t50 = ((x209|x210)|(x211%x212));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	uint32_t x216 = 2624U;
	volatile uint32_t t51 = 37190U;

	t51 = ((x213|x214)|(x215%x216));

	if (t51 != 2147484159U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x217 = -2;
	uint32_t x219 = 2U;
	int64_t x220 = 534073037430782LL;
	int64_t t52 = -144278045228961LL;

	t52 = ((x217|x218)|(x219%x220));

	if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x222 = 20;
	int16_t x223 = -1;
	static volatile int32_t t53 = -43665;

	t53 = ((x221|x222)|(x223%x224));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -19418250986489LL;
	int8_t x226 = INT8_MIN;
	int64_t x228 = INT64_MAX;
	int64_t t54 = -32457094435771048LL;

	t54 = ((x225|x226)|(x227%x228));

	if (t54 != -17LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x229 = 84U;
	uint32_t x230 = 11U;
	uint8_t x231 = 1U;
	volatile uint32_t t55 = 20U;

	t55 = ((x229|x230)|(x231%x232));

	if (t55 != 95U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = 7640;
	volatile uint64_t x234 = 524LLU;
	int16_t x235 = INT16_MIN;
	int64_t x236 = 1LL;
	uint64_t t56 = 3246419917271LLU;

	t56 = ((x233|x234)|(x235%x236));

	if (t56 != 8156LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x238 = -1047540419420LL;
	int8_t x239 = INT8_MIN;
	int64_t t57 = -560393326188LL;

	t57 = ((x237|x238)|(x239%x240));

	if (t57 != -1047540419329LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x241 = 1;
	uint32_t x242 = 6U;
	int64_t x243 = 53239770154647969LL;
	int8_t x244 = INT8_MIN;
	static int64_t t58 = -1176641133109411048LL;

	t58 = ((x241|x242)|(x243%x244));

	if (t58 != 39LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MAX;
	int64_t x247 = 48049508LL;
	int64_t x248 = -1LL;
	volatile int64_t t59 = 196072944619464LL;

	t59 = ((x245|x246)|(x247%x248));

	if (t59 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MAX;
	volatile int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MAX;
	volatile int64_t t60 = -2125087435174574887LL;

	t60 = ((x249|x250)|(x251%x252));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x254 = UINT16_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t61 = -5479;

	t61 = ((x253|x254)|(x255%x256));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x258 = 111U;
	int16_t x259 = INT16_MIN;
	volatile int64_t t62 = -106040290LL;

	t62 = ((x257|x258)|(x259%x260));

	if (t62 != -9223372036854775697LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x263 = 1338330U;
	uint64_t x264 = 437426611312431459LLU;
	uint64_t t63 = 19165111LLU;

	t63 = ((x261|x262)|(x263%x264));

	if (t63 != 4294967295LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	int32_t x267 = -3;
	volatile uint16_t x268 = 14U;
	volatile int32_t t64 = -4;

	t64 = ((x265|x266)|(x267%x268));

	if (t64 != -3) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	int16_t x271 = -2;

	t65 = ((x269|x270)|(x271%x272));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = -5293LL;
	volatile uint8_t x274 = 90U;
	static int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MAX;
	int64_t t66 = 16974557089LL;

	t66 = ((x273|x274)|(x275%x276));

	if (t66 != -5LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = -1;
	volatile int32_t x278 = INT32_MIN;
	uint64_t x279 = 481491652LLU;
	static volatile uint32_t x280 = 6U;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x277|x278)|(x279%x280));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MAX;
	int8_t x283 = -1;
	uint16_t x284 = UINT16_MAX;

	t68 = ((x281|x282)|(x283%x284));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = UINT8_MAX;
	int8_t x286 = 48;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = -4;

	t69 = ((x285|x286)|(x287%x288));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x290 = 478613262091LL;
	int32_t x292 = -392797;
	volatile int64_t t70 = 36075LL;

	t70 = ((x289|x290)|(x291%x292));

	if (t70 != 478613274623LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = -10555;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x293|x294)|(x295%x296));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 1U;
	int32_t x298 = -7344002;
	int16_t x299 = INT16_MIN;
	static int32_t x300 = INT32_MAX;

	t72 = ((x297|x298)|(x299%x300));

	if (t72 != -3969) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = UINT32_MAX;
	volatile uint8_t x302 = 30U;
	int32_t x303 = 3;
	static int64_t x304 = -1039LL;
	volatile int64_t t73 = -493LL;

	t73 = ((x301|x302)|(x303%x304));

	if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x307 = 359530759934LLU;
	int16_t x308 = INT16_MAX;

	t74 = ((x305|x306)|(x307%x308));

	if (t74 != 18446744073709548543LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 42U;
	uint16_t x311 = 9698U;
	volatile uint16_t x312 = 2U;
	volatile int64_t t75 = -59876LL;

	t75 = ((x309|x310)|(x311%x312));

	if (t75 != 126LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 891282190U;
	int64_t x314 = 118LL;
	uint16_t x315 = UINT16_MAX;
	static int32_t x316 = INT32_MIN;
	volatile int64_t t76 = 10361071LL;

	t76 = ((x313|x314)|(x315%x316));

	if (t76 != 891289599LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = -1;
	volatile int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x317|x318)|(x319%x320));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MAX;
	volatile int32_t x322 = 122626149;
	uint8_t x323 = 1U;
	int64_t t78 = INT64_MAX;

	t78 = ((x321|x322)|(x323%x324));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = -1;
	static int32_t x327 = 81527;
	volatile int64_t x328 = -1LL;
	int64_t t79 = 0LL;

	t79 = ((x325|x326)|(x327%x328));

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 89U;
	int64_t x331 = 723129LL;
	uint64_t x332 = 59715043289552105LLU;

	t80 = ((x329|x330)|(x331%x332));

	if (t80 != 18446744071562791161LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = 66U;
	static int8_t x335 = INT8_MIN;
	static int64_t x336 = 577574985135611LL;
	int64_t t81 = 92458766LL;

	t81 = ((x333|x334)|(x335%x336));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 96U;
	static volatile uint32_t x338 = UINT32_MAX;
	volatile uint32_t x339 = UINT32_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = ((x337|x338)|(x339%x340));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = -270690828;
	static int8_t x343 = INT8_MIN;
	int64_t x344 = -1914808504992593LL;
	int64_t t83 = 22295181970058LL;

	t83 = ((x341|x342)|(x343%x344));

	if (t83 != -12LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -2428621218856404588LL;
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = -1LL;
	volatile int16_t x348 = INT16_MAX;
	static volatile int64_t t84 = -464453LL;

	t84 = ((x345|x346)|(x347%x348));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x350 = 530069U;
	volatile int64_t t85 = -753LL;

	t85 = ((x349|x350)|(x351%x352));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x353 = INT8_MAX;
	static uint32_t x354 = 1U;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -232226189;

	t86 = ((x353|x354)|(x355%x356));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MAX;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t87 = -3484599;

	t87 = ((x357|x358)|(x359%x360));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MAX;
	int32_t x362 = -94;
	volatile uint32_t x363 = UINT32_MAX;
	int64_t x364 = 76293231981949264LL;
	int64_t t88 = 15464LL;

	t88 = ((x361|x362)|(x363%x364));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x365 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	static volatile uint64_t x368 = 79992529927LLU;
	volatile uint64_t t89 = 1221847059264LLU;

	t89 = ((x365|x366)|(x367%x368));

	if (t89 != 9223372114164187135LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x369 = 1;
	static int64_t x370 = INT64_MIN;
	int32_t x372 = -1;
	int64_t t90 = -187949LL;

	t90 = ((x369|x370)|(x371%x372));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = 0U;
	int8_t x374 = INT8_MAX;
	volatile int16_t x375 = INT16_MIN;
	static volatile uint32_t x376 = UINT32_MAX;
	static volatile uint32_t t91 = 1059951949U;

	t91 = ((x373|x374)|(x375%x376));

	if (t91 != 4294934655U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	int64_t x378 = -1LL;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = 530898964666893LLU;
	uint64_t t92 = UINT64_MAX;

	t92 = ((x377|x378)|(x379%x380));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	uint32_t x384 = 439660887U;
	static uint32_t t93 = UINT32_MAX;

	t93 = ((x381|x382)|(x383%x384));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 1U;
	uint8_t x386 = 1U;
	volatile int32_t x387 = INT32_MIN;
	static uint64_t x388 = UINT64_MAX;
	uint64_t t94 = 414LLU;

	t94 = ((x385|x386)|(x387%x388));

	if (t94 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x389 = UINT8_MAX;
	int32_t x390 = -55;
	volatile int16_t x391 = -1;
	int64_t x392 = -1LL;

	t95 = ((x389|x390)|(x391%x392));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x395 = 12;
	static volatile uint32_t x396 = 996309716U;
	static volatile int64_t t96 = -1571182884324597LL;

	t96 = ((x393|x394)|(x395%x396));

	if (t96 != -919032019LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = UINT8_MAX;
	volatile int32_t x398 = -10369;
	int32_t x399 = INT32_MIN;
	volatile uint32_t x400 = 612277U;
	static uint32_t t97 = UINT32_MAX;

	t97 = ((x397|x398)|(x399%x400));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = INT32_MIN;
	volatile int8_t x402 = INT8_MIN;
	int32_t x403 = -6;
	int64_t x404 = INT64_MIN;
	int64_t t98 = -1124830437134262207LL;

	t98 = ((x401|x402)|(x403%x404));

	if (t98 != -6LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x405 = UINT8_MAX;
	uint32_t x407 = 13298U;
	int32_t x408 = 258322;
	volatile uint32_t t99 = 113469U;

	t99 = ((x405|x406)|(x407%x408));

	if (t99 != 13311U) { NG(); } else { ; }
	
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

