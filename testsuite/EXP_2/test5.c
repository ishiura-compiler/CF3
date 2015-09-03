#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 160280LLU;
volatile int64_t x8 = INT64_MAX;
volatile uint64_t t1 = 85LLU;
volatile int8_t x11 = INT8_MIN;
uint64_t t4 = 13LLU;
int16_t x27 = INT16_MIN;
uint8_t x39 = 1U;
int16_t x40 = INT16_MIN;
static int8_t x63 = INT8_MIN;
static int8_t x65 = -1;
volatile int8_t x66 = INT8_MIN;
volatile uint16_t x69 = UINT16_MAX;
volatile uint32_t x75 = 1868397208U;
uint32_t x76 = 40606U;
uint32_t t15 = 641504U;
int16_t x89 = -3;
int16_t x93 = -4;
int8_t x103 = INT8_MAX;
int16_t x114 = INT16_MAX;
int8_t x116 = INT8_MIN;
int64_t x120 = INT64_MIN;
uint64_t t23 = 16288766LLU;
int32_t x129 = 304872971;
static int64_t x131 = -4259342588894LL;
int32_t x145 = INT32_MIN;
static int32_t x148 = INT32_MIN;
static int16_t x155 = 624;
volatile int64_t t29 = -1537639868121047LL;
int64_t x158 = INT64_MIN;
volatile uint8_t x161 = 0U;
int16_t x163 = -1;
int32_t t31 = -4;
static uint16_t x173 = 0U;
int16_t x176 = INT16_MIN;
volatile int64_t x177 = INT64_MIN;
int64_t x187 = -1LL;
int8_t x196 = -1;
int16_t x198 = 31;
int16_t x201 = INT16_MIN;
uint8_t x208 = UINT8_MAX;
int16_t x222 = INT16_MIN;
uint32_t x225 = 1732U;
int32_t x229 = -27;
int16_t x234 = 7;
static uint8_t x236 = 101U;
int32_t x238 = INT32_MAX;
uint64_t x248 = 133085968LLU;
int64_t x252 = 33156992834187548LL;
static uint32_t x258 = 99U;
int32_t x259 = INT32_MAX;
int64_t x262 = -1LL;
static int64_t x265 = -1LL;
static int16_t x267 = INT16_MIN;
uint16_t x276 = 7U;
static volatile int32_t t53 = 12;
uint32_t x280 = 249359U;
volatile int8_t x287 = -1;
volatile uint16_t x301 = 7U;
int16_t x303 = INT16_MIN;
int32_t x304 = -1;
uint16_t x318 = 972U;
volatile int64_t x319 = INT64_MIN;
int8_t x323 = 15;
static volatile uint64_t t62 = 648711LLU;
uint64_t x326 = 1LLU;
int32_t x330 = -1;
int64_t x338 = -881185923915760396LL;
static uint16_t x340 = 9U;
volatile int64_t t66 = 20122587369LL;
uint32_t x343 = 2615U;
int8_t x354 = INT8_MIN;
int64_t x356 = INT64_MIN;
int64_t t70 = 51919120097140LL;
volatile int8_t x361 = INT8_MAX;
volatile int64_t t72 = 17351279052056803LL;
uint64_t x366 = UINT64_MAX;
static int16_t x376 = -1;
int16_t x382 = 7;
int64_t x383 = -1LL;
int32_t x390 = 4016;
int16_t x398 = 916;
static int64_t t80 = 6LL;
int16_t x407 = -1;
static volatile int32_t t81 = -17;
int32_t t82 = 1310009;
int32_t x439 = INT32_MIN;
static int64_t x443 = -1LL;
int16_t x444 = INT16_MAX;
uint64_t x445 = UINT64_MAX;
static int64_t x448 = -42773830007LL;
uint32_t x454 = 19566513U;
int16_t x456 = -6015;
volatile uint64_t t89 = 45LLU;
uint64_t x467 = UINT64_MAX;
int8_t x475 = -1;
volatile uint64_t t93 = 19110LLU;
uint32_t x479 = UINT32_MAX;
static int32_t x493 = 23;
volatile int32_t x494 = INT32_MAX;


void f0(void) {
	int32_t x1 = -1190609;
	static int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MAX;
	uint64_t x4 = 2594903LLU;

	t0 = ((x1+(x2+x3))%x4);

	if (t0 != 1992389LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 24LLU;
	int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MAX;

	t1 = ((x5+(x6+x7))%x8);

	if (t1 != 152LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	volatile uint8_t x10 = 5U;
	static volatile int8_t x12 = 9;
	int32_t t2 = -137523;

	t2 = ((x9+(x10+x11))%x12);

	if (t2 != -7) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int16_t x14 = -278;
	int8_t x15 = 19;
	uint8_t x16 = 3U;
	static int32_t t3 = 9753048;

	t3 = ((x13+(x14+x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -6212LL;
	volatile uint64_t x22 = UINT64_MAX;
	int32_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;

	t4 = ((x21+(x22+x23))%x24);

	if (t4 != 26554LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 1002927424LLU;
	static int8_t x26 = INT8_MIN;
	uint64_t x28 = 4841LLU;
	uint64_t t5 = 804447058794LLU;

	t5 = ((x25+(x26+x27))%x28);

	if (t5 != 3922LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	int8_t x30 = -1;
	int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = -9;

	t6 = ((x29+(x30+x31))%x32);

	if (t6 != -8) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = -1;
	volatile int64_t t7 = -27709LL;

	t7 = ((x37+(x38+x39))%x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MAX;
	static uint8_t x42 = 1U;
	static volatile int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;
	int64_t t8 = 30LL;

	t8 = ((x41+(x42+x43))%x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = 59U;
	volatile uint16_t x46 = 485U;
	volatile uint8_t x47 = UINT8_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t9 = 14020223045LLU;

	t9 = ((x45+(x46+x47))%x48);

	if (t9 != 799LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = -1;
	int16_t x54 = 3573;
	int32_t x55 = -114;
	int64_t x56 = INT64_MIN;
	int64_t t10 = 65667074032LL;

	t10 = ((x53+(x54+x55))%x56);

	if (t10 != 3458LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x64 = INT16_MAX;
	volatile uint32_t t11 = 25959446U;

	t11 = ((x61+(x62+x63))%x64);

	if (t11 != 32641U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x67 = UINT8_MAX;
	static uint32_t x68 = 15123U;
	uint32_t t12 = 978047U;

	t12 = ((x65+(x66+x67))%x68);

	if (t12 != 126U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x70 = INT8_MIN;
	static uint16_t x71 = 2U;
	int8_t x72 = INT8_MAX;
	volatile int32_t t13 = -1;

	t13 = ((x69+(x70+x71))%x72);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -1LL;
	volatile int64_t x74 = INT64_MIN;
	int64_t t14 = -20307LL;

	t14 = ((x73+(x74+x75))%x76);

	if (t14 != -1917LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 67U;
	int8_t x78 = -1;
	int16_t x79 = -1;
	uint8_t x80 = UINT8_MAX;

	t15 = ((x77+(x78+x79))%x80);

	if (t15 != 65U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 7682U;
	static int16_t x86 = -1670;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = UINT32_MAX;
	static uint32_t t16 = 52U;

	t16 = ((x85+(x86+x87))%x88);

	if (t16 != 4294940540U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x90 = INT16_MAX;
	static int64_t x91 = -12661LL;
	int64_t x92 = -1LL;
	int64_t t17 = 182998LL;

	t17 = ((x89+(x90+x91))%x92);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x94 = INT64_MIN;
	uint32_t x95 = 2418U;
	volatile int64_t x96 = -1LL;
	volatile int64_t t18 = -18387LL;

	t18 = ((x93+(x94+x95))%x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = -7301181669608025LL;
	volatile int16_t x102 = -198;
	int64_t x104 = INT64_MIN;
	volatile int64_t t19 = 0LL;

	t19 = ((x101+(x102+x103))%x104);

	if (t19 != -7301181669608096LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x109 = 114292833U;
	int8_t x110 = -44;
	uint8_t x111 = 1U;
	int32_t x112 = -1;
	uint32_t t20 = 1042573U;

	t20 = ((x109+(x110+x111))%x112);

	if (t20 != 114292790U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x115 = 0U;
	int32_t t21 = 27294;

	t21 = ((x113+(x114+x115))%x116);

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x117 = INT8_MIN;
	int8_t x118 = 0;
	int64_t x119 = -22408802856074119LL;
	int64_t t22 = 1LL;

	t22 = ((x117+(x118+x119))%x120);

	if (t22 != -22408802856074247LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = 15;
	uint64_t x126 = UINT64_MAX;
	volatile int32_t x127 = INT32_MIN;
	uint64_t x128 = 2LLU;

	t23 = ((x125+(x126+x127))%x128);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x130 = 5U;
	static volatile uint32_t x132 = 12223U;
	volatile int64_t t24 = 10978090839545LL;

	t24 = ((x129+(x130+x131))%x132);

	if (t24 != -5714LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = 4673U;
	static int64_t x134 = -1LL;
	int32_t x135 = INT32_MAX;
	uint32_t x136 = 30608U;
	volatile int64_t t25 = 4461213113308LL;

	t25 = ((x133+(x134+x135))%x136);

	if (t25 != 431LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = INT64_MIN;
	static uint8_t x142 = 2U;
	static int8_t x143 = INT8_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t26 = 14916433486850186LL;

	t26 = ((x141+(x142+x143))%x144);

	if (t26 != -254LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x146 = UINT32_MAX;
	volatile uint64_t x147 = 1503050LLU;
	uint64_t t27 = 2052729531LLU;

	t27 = ((x145+(x146+x147))%x148);

	if (t27 != 2148986697LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = UINT8_MAX;
	volatile uint64_t x150 = 174966219721390607LLU;
	volatile int32_t x151 = -4;
	uint16_t x152 = 7156U;
	uint64_t t28 = 2173662608155085360LLU;

	t28 = ((x149+(x150+x151))%x152);

	if (t28 != 338LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = 46LL;
	int8_t x154 = INT8_MAX;
	int32_t x156 = INT32_MIN;

	t29 = ((x153+(x154+x155))%x156);

	if (t29 != 797LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = UINT64_MAX;
	uint64_t x159 = 2LLU;
	volatile uint32_t x160 = 1831470U;
	static volatile uint64_t t30 = 379351902LLU;

	t30 = ((x157+(x158+x159))%x160);

	if (t30 != 723249LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x162 = -1;
	uint8_t x164 = UINT8_MAX;

	t31 = ((x161+(x162+x163))%x164);

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = 37U;
	int32_t x170 = -1225;
	static int8_t x171 = INT8_MAX;
	static volatile int8_t x172 = -6;
	uint32_t t32 = 18U;

	t32 = ((x169+(x170+x171))%x172);

	if (t32 != 4294966235U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x174 = -1;
	volatile int32_t x175 = INT32_MAX;
	int32_t t33 = 10;

	t33 = ((x173+(x174+x175))%x176);

	if (t33 != 32766) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x178 = 33571U;
	int16_t x179 = INT16_MAX;
	uint16_t x180 = 48U;
	int64_t t34 = 665565130LL;

	t34 = ((x177+(x178+x179))%x180);

	if (t34 != -30LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x185 = 20155U;
	int64_t x186 = 13104LL;
	int32_t x188 = INT32_MAX;
	volatile int64_t t35 = 47204LL;

	t35 = ((x185+(x186+x187))%x188);

	if (t35 != 33258LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x193 = 151054067115LLU;
	int8_t x194 = INT8_MIN;
	static int8_t x195 = 0;
	uint64_t t36 = 26335486053160442LLU;

	t36 = ((x193+(x194+x195))%x196);

	if (t36 != 151054066987LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x197 = 181711697672285LLU;
	volatile int32_t x199 = -1;
	static int16_t x200 = INT16_MIN;
	static volatile uint64_t t37 = 91707LLU;

	t37 = ((x197+(x198+x199))%x200);

	if (t37 != 181711697672315LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t38 = 5933LL;

	t38 = ((x201+(x202+x203))%x204);

	if (t38 != 2147450879LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = -13204;
	uint64_t x207 = 12646386714475LLU;
	volatile uint64_t t39 = 7743541639153636LLU;

	t39 = ((x205+(x206+x207))%x208);

	if (t39 != 208LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x209 = -1LL;
	int8_t x210 = -1;
	int32_t x211 = -1;
	int16_t x212 = 1167;
	volatile int64_t t40 = -22593295LL;

	t40 = ((x209+(x210+x211))%x212);

	if (t40 != -3LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x223 = 2U;
	int32_t x224 = INT32_MIN;
	static int64_t t41 = -128399181LL;

	t41 = ((x221+(x222+x223))%x224);

	if (t41 != -32766LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x226 = 11U;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = 13U;
	uint32_t t42 = 1643U;

	t42 = ((x225+(x226+x227))%x228);

	if (t42 != 12U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x230 = 127;
	int16_t x231 = 54;
	uint8_t x232 = 21U;
	static int32_t t43 = 6460;

	t43 = ((x229+(x230+x231))%x232);

	if (t43 != 7) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = 55U;
	static uint8_t x235 = 5U;
	volatile int32_t t44 = 39;

	t44 = ((x233+(x234+x235))%x236);

	if (t44 != 67) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile int16_t x239 = INT16_MIN;
	volatile uint8_t x240 = 1U;
	int32_t t45 = -371291386;

	t45 = ((x237+(x238+x239))%x240);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x245 = INT8_MAX;
	uint16_t x246 = 49U;
	static int16_t x247 = INT16_MIN;
	uint64_t t46 = 75720428226LLU;

	t46 = ((x245+(x246+x247))%x248);

	if (t46 != 130242112LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x249 = UINT8_MAX;
	uint8_t x250 = 14U;
	volatile uint32_t x251 = UINT32_MAX;
	int64_t t47 = -1451621211900595LL;

	t47 = ((x249+(x250+x251))%x252);

	if (t47 != 268LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x253 = 22655LLU;
	static int8_t x254 = INT8_MAX;
	int64_t x255 = 37680569473693LL;
	int16_t x256 = INT16_MIN;
	uint64_t t48 = 56771464028143LLU;

	t48 = ((x253+(x254+x255))%x256);

	if (t48 != 37680569496475LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x257 = UINT16_MAX;
	static uint16_t x260 = 317U;
	uint32_t t49 = 55367U;

	t49 = ((x257+(x258+x259))%x260);

	if (t49 != 130U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x261 = 112016;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MIN;
	int64_t t50 = 78866LL;

	t50 = ((x261+(x262+x263))%x264);

	if (t50 != 79247LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x266 = INT32_MAX;
	uint32_t x268 = UINT32_MAX;
	int64_t t51 = 594LL;

	t51 = ((x265+(x266+x267))%x268);

	if (t51 != 2147450878LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = INT16_MIN;
	volatile int16_t x270 = -1;
	static int16_t x271 = 14296;
	int64_t x272 = -31566906013082291LL;
	volatile int64_t t52 = -2611676818726LL;

	t52 = ((x269+(x270+x271))%x272);

	if (t52 != -18473LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = INT32_MIN;
	static int32_t x274 = INT32_MAX;
	int16_t x275 = -1;

	t53 = ((x273+(x274+x275))%x276);

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x277 = 100645LLU;
	static uint8_t x278 = 47U;
	static int8_t x279 = INT8_MIN;
	uint64_t t54 = 53LLU;

	t54 = ((x277+(x278+x279))%x280);

	if (t54 != 100564LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = -1LL;
	int16_t x286 = INT16_MAX;
	static uint64_t x288 = 1373600716726377LLU;
	uint64_t t55 = 136117997987808LLU;

	t55 = ((x285+(x286+x287))%x288);

	if (t55 != 32765LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = INT16_MAX;
	volatile int16_t x290 = -1;
	volatile uint64_t x291 = UINT64_MAX;
	volatile int8_t x292 = INT8_MIN;
	volatile uint64_t t56 = 80304LLU;

	t56 = ((x289+(x290+x291))%x292);

	if (t56 != 32765LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x293 = 5U;
	static uint64_t x294 = UINT64_MAX;
	uint32_t x295 = UINT32_MAX;
	int16_t x296 = INT16_MIN;
	volatile uint64_t t57 = 119LLU;

	t57 = ((x293+(x294+x295))%x296);

	if (t57 != 4294967299LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x302 = 1;
	volatile int32_t t58 = -858;

	t58 = ((x301+(x302+x303))%x304);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x305 = 3997U;
	volatile int32_t x306 = 346608;
	int64_t x307 = 856814395LL;
	int32_t x308 = INT32_MAX;
	volatile int64_t t59 = 7954014940173294LL;

	t59 = ((x305+(x306+x307))%x308);

	if (t59 != 857165000LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x313 = 5LL;
	int8_t x314 = INT8_MIN;
	static int8_t x315 = -7;
	uint32_t x316 = 53673U;
	int64_t t60 = 344LL;

	t60 = ((x313+(x314+x315))%x316);

	if (t60 != -130LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x317 = 4147268756332623LL;
	int32_t x320 = INT32_MAX;
	int64_t t61 = -1018495088894001399LL;

	t61 = ((x317+(x318+x319))%x320);

	if (t61 != -1054876688LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x321 = -1;
	int16_t x322 = -1;
	uint64_t x324 = 16509LLU;

	t62 = ((x321+(x322+x323))%x324);

	if (t62 != 13LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x327 = 12283624LLU;
	int16_t x328 = 46;
	uint64_t t63 = 895LLU;

	t63 = ((x325+(x326+x327))%x328);

	if (t63 != 41LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x329 = 35062154LLU;
	int64_t x331 = INT64_MAX;
	uint64_t x332 = 15308788922056LLU;
	static uint64_t t64 = 2701695994802LLU;

	t64 = ((x329+(x330+x331))%x332);

	if (t64 != 10416818162632LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x333 = 8U;
	uint8_t x334 = UINT8_MAX;
	uint64_t x335 = UINT64_MAX;
	static uint32_t x336 = 1658669U;
	volatile uint64_t t65 = 222357546434LLU;

	t65 = ((x333+(x334+x335))%x336);

	if (t65 != 262LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x337 = INT32_MAX;
	uint8_t x339 = UINT8_MAX;

	t66 = ((x337+(x338+x339))%x340);

	if (t66 != -6LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x341 = 57;
	volatile uint16_t x342 = UINT16_MAX;
	uint32_t x344 = 497671902U;
	volatile uint32_t t67 = 83058484U;

	t67 = ((x341+(x342+x343))%x344);

	if (t67 != 68207U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x345 = 7;
	int32_t x346 = 63723749;
	static int64_t x347 = INT64_MIN;
	static int32_t x348 = INT32_MIN;
	static int64_t t68 = -2080416572897LL;

	t68 = ((x345+(x346+x347))%x348);

	if (t68 != -2083759892LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = UINT64_MAX;
	int64_t x350 = -1LL;
	int16_t x351 = 447;
	volatile int8_t x352 = INT8_MIN;
	uint64_t t69 = 18307509763LLU;

	t69 = ((x349+(x350+x351))%x352);

	if (t69 != 445LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x353 = 54;
	volatile uint16_t x355 = 6092U;

	t70 = ((x353+(x354+x355))%x356);

	if (t70 != 6018LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = -1;
	volatile int32_t x358 = INT32_MIN;
	static int32_t x359 = INT32_MAX;
	uint8_t x360 = UINT8_MAX;
	static int32_t t71 = -8;

	t71 = ((x357+(x358+x359))%x360);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x362 = -113475744LL;
	volatile int8_t x363 = 3;
	uint16_t x364 = 30U;

	t72 = ((x361+(x362+x363))%x364);

	if (t72 != -14LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x365 = 28561U;
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 53175103U;
	volatile uint64_t t73 = 372721415348585177LLU;

	t73 = ((x365+(x366+x367))%x368);

	if (t73 != 40987615LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x369 = -1;
	int8_t x370 = 0;
	int32_t x371 = 1969;
	volatile int64_t x372 = INT64_MIN;
	volatile int64_t t74 = -89244LL;

	t74 = ((x369+(x370+x371))%x372);

	if (t74 != 1968LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x373 = 107U;
	int32_t x374 = 5184371;
	uint32_t x375 = 2U;
	uint32_t t75 = 10628733U;

	t75 = ((x373+(x374+x375))%x376);

	if (t75 != 5184480U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x381 = -1;
	static int64_t x384 = INT64_MAX;
	int64_t t76 = 1069568LL;

	t76 = ((x381+(x382+x383))%x384);

	if (t76 != 5LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x385 = -7191LL;
	int8_t x386 = 15;
	uint16_t x387 = 302U;
	int32_t x388 = 4250749;
	static int64_t t77 = -11298926971349LL;

	t77 = ((x385+(x386+x387))%x388);

	if (t77 != -6874LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x389 = 0U;
	uint16_t x391 = 413U;
	int64_t x392 = INT64_MIN;
	int64_t t78 = 26LL;

	t78 = ((x389+(x390+x391))%x392);

	if (t78 != 4429LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x397 = UINT32_MAX;
	volatile int64_t x399 = INT64_MIN;
	volatile int64_t x400 = -16LL;
	volatile int64_t t79 = 896049824076954574LL;

	t79 = ((x397+(x398+x399))%x400);

	if (t79 != -13LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = INT8_MAX;
	int64_t x402 = INT64_MIN;
	uint8_t x403 = 3U;
	int16_t x404 = -1131;

	t80 = ((x401+(x402+x403))%x404);

	if (t80 != -346LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x405 = 0;
	volatile int16_t x406 = INT16_MIN;
	static uint16_t x408 = 153U;

	t81 = ((x405+(x406+x407))%x408);

	if (t81 != -27) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x409 = INT32_MAX;
	int32_t x410 = -290071;
	volatile int16_t x411 = -6026;
	volatile uint8_t x412 = 25U;

	t82 = ((x409+(x410+x411))%x412);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x421 = 0;
	uint16_t x422 = UINT16_MAX;
	int8_t x423 = INT8_MAX;
	int16_t x424 = INT16_MAX;
	int32_t t83 = 1;

	t83 = ((x421+(x422+x423))%x424);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = 7625U;
	int64_t x426 = INT64_MIN;
	volatile int32_t x427 = 5047761;
	static uint64_t x428 = UINT64_MAX;
	static uint64_t t84 = 13827LLU;

	t84 = ((x425+(x426+x427))%x428);

	if (t84 != 9223372036859831194LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x437 = UINT8_MAX;
	static volatile uint16_t x438 = 6452U;
	uint16_t x440 = 3U;
	static volatile int32_t t85 = -12;

	t85 = ((x437+(x438+x439))%x440);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x441 = INT16_MIN;
	uint8_t x442 = 1U;
	volatile int64_t t86 = -1026544285LL;

	t86 = ((x441+(x442+x443))%x444);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MAX;
	uint64_t t87 = 3982801030118369LLU;

	t87 = ((x445+(x446+x447))%x448);

	if (t87 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x449 = 12;
	static int32_t x450 = INT32_MIN;
	uint8_t x451 = 59U;
	int32_t x452 = INT32_MIN;
	int32_t t88 = -28325620;

	t88 = ((x449+(x450+x451))%x452);

	if (t88 != -2147483577) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x453 = 29336023155550LLU;
	static int8_t x455 = 42;

	t89 = ((x453+(x454+x455))%x456);

	if (t89 != 29336042722105LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x457 = 1U;
	static int32_t x458 = -1;
	static int8_t x459 = INT8_MAX;
	static int64_t x460 = INT64_MIN;
	volatile int64_t t90 = -7231229597980907LL;

	t90 = ((x457+(x458+x459))%x460);

	if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x465 = 0;
	uint8_t x466 = UINT8_MAX;
	static uint8_t x468 = UINT8_MAX;
	uint64_t t91 = 1916965910490LLU;

	t91 = ((x465+(x466+x467))%x468);

	if (t91 != 254LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x469 = 453;
	static uint16_t x470 = 25315U;
	uint16_t x471 = 6140U;
	int8_t x472 = 2;
	volatile int32_t t92 = -1922270;

	t92 = ((x469+(x470+x471))%x472);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = INT16_MAX;
	uint64_t x474 = 804029831369855727LLU;
	uint64_t x476 = UINT64_MAX;

	t93 = ((x473+(x474+x475))%x476);

	if (t93 != 804029831369888493LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x477 = INT32_MAX;
	volatile uint8_t x478 = UINT8_MAX;
	int64_t x480 = INT64_MIN;
	volatile int64_t t94 = -7LL;

	t94 = ((x477+(x478+x479))%x480);

	if (t94 != 2147483901LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x481 = 3;
	int8_t x482 = 1;
	int16_t x483 = INT16_MAX;
	uint8_t x484 = UINT8_MAX;
	int32_t t95 = 727700;

	t95 = ((x481+(x482+x483))%x484);

	if (t95 != 131) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x485 = 400414262835778LL;
	static uint32_t x486 = 2239415U;
	int64_t x487 = INT64_MIN;
	uint16_t x488 = 31U;
	int64_t t96 = 2425977693785959764LL;

	t96 = ((x485+(x486+x487))%x488);

	if (t96 != -9LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x489 = 66U;
	int16_t x490 = INT16_MIN;
	uint32_t x491 = UINT32_MAX;
	int32_t x492 = INT32_MAX;
	volatile uint32_t t97 = 1744U;

	t97 = ((x489+(x490+x491))%x492);

	if (t97 != 2147450946U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x495 = INT16_MIN;
	volatile int16_t x496 = -1;
	volatile int32_t t98 = -3474;

	t98 = ((x493+(x494+x495))%x496);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x497 = UINT16_MAX;
	static int64_t x498 = -1049891504917258LL;
	static int16_t x499 = 2748;
	uint64_t x500 = 1787120935224650LLU;
	uint64_t t99 = 48146323LLU;

	t99 = ((x497+(x498+x499))%x500);

	if (t99 != 819009751089991LLU) { NG(); } else { ; }
	
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

