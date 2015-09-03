#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 172626278U;
uint16_t x9 = 1U;
uint16_t x11 = 1748U;
int64_t x13 = 50LL;
static uint8_t x19 = UINT8_MAX;
int16_t x54 = INT16_MIN;
uint32_t x57 = UINT32_MAX;
int8_t x59 = 12;
volatile uint64_t x64 = 22736364LLU;
volatile uint32_t t11 = 9106742U;
uint32_t x71 = UINT32_MAX;
volatile uint32_t t12 = 26029U;
int32_t x77 = -31688;
volatile uint32_t x83 = 339001401U;
uint32_t x108 = UINT32_MAX;
volatile int16_t x116 = -1;
volatile uint16_t x121 = UINT16_MAX;
int64_t x128 = 4149048307517LL;
int32_t t25 = 6305;
uint8_t x133 = 12U;
volatile int16_t x135 = -1;
static uint8_t x151 = 72U;
int32_t t29 = 394065054;
volatile uint16_t x163 = 306U;
uint8_t x171 = 9U;
uint8_t x186 = 3U;
int32_t x187 = INT32_MIN;
uint64_t x199 = 50LLU;
int32_t t35 = 248444431;
int8_t x202 = 1;
static int8_t x205 = 5;
int16_t x210 = -568;
uint16_t x214 = 6691U;
int64_t t39 = -16931543632460LL;
int64_t x220 = 16LL;
int32_t t40 = -79323;
volatile int8_t x236 = INT8_MAX;
static int32_t t43 = INT32_MAX;
int8_t x239 = 2;
int16_t x240 = -2;
volatile int32_t t44 = -1155;
int16_t x245 = INT16_MAX;
static volatile uint64_t t48 = 1549999853166LLU;
volatile int32_t x277 = INT32_MIN;
int32_t x280 = INT32_MIN;
uint32_t x282 = 0U;
static volatile int8_t x287 = INT8_MIN;
uint64_t x290 = 149947138190823LLU;
int16_t x307 = INT16_MIN;
int16_t x312 = -1;
static int64_t x318 = INT64_MIN;
static int16_t x323 = INT16_MIN;
uint64_t x325 = 5027735524182LLU;
volatile int32_t t60 = 1;
int64_t x333 = -1055160200213LL;
volatile uint32_t x339 = 11459U;
volatile int32_t t62 = 92;
int32_t x341 = -1;
static uint8_t x346 = 45U;
static int16_t x348 = INT16_MIN;
int8_t x357 = INT8_MIN;
int8_t x360 = INT8_MAX;
int8_t x368 = 1;
uint32_t x370 = UINT32_MAX;
int16_t x373 = INT16_MIN;
static volatile int32_t t70 = -151;
uint64_t x388 = UINT64_MAX;
uint8_t x406 = 3U;
int32_t x420 = INT32_MAX;
volatile int32_t t76 = INT32_MIN;
int64_t x422 = INT64_MAX;
static int32_t t78 = 321085830;
int16_t x431 = 2465;
int64_t x442 = INT64_MAX;
int32_t x443 = -1;
volatile int32_t t81 = -114495;
int8_t x449 = INT8_MIN;
int8_t x459 = INT8_MAX;
int16_t x460 = 0;
int64_t t84 = -273LL;
uint16_t x462 = UINT16_MAX;
static uint32_t x465 = 109271189U;
volatile int8_t x472 = INT8_MIN;
volatile int8_t x473 = 52;
volatile int32_t t88 = 0;
volatile uint8_t x488 = UINT8_MAX;
static uint16_t x492 = 5U;
uint8_t x504 = 67U;
int32_t x514 = -1;
int64_t t95 = INT64_MIN;
int64_t x519 = -195150455525LL;
int64_t x533 = 19886686LL;


void f0(void) {
	volatile int16_t x1 = -1;
	int64_t x2 = INT64_MAX;
	volatile int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -1;

	t0 = (x1+(x2<(x3*x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = 1200;
	uint32_t x12 = 9411U;
	volatile int32_t t1 = -140098511;

	t1 = (x9+(x10<(x11*x12)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = -2062772;
	volatile int8_t x15 = INT8_MIN;
	uint32_t x16 = UINT32_MAX;
	static volatile int64_t t2 = -58488121654LL;

	t2 = (x13+(x14<(x15*x16)));

	if (t2 != 50LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = 21;
	int64_t x18 = INT64_MIN;
	static int64_t x20 = -1LL;
	static int32_t t3 = 33;

	t3 = (x17+(x18<(x19*x20)));

	if (t3 != 22) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 24537LL;
	int16_t x26 = INT16_MAX;
	static int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MIN;
	volatile int64_t t4 = -4340LL;

	t4 = (x25+(x26<(x27*x28)));

	if (t4 != 24538LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = -9;
	static uint32_t x30 = 1017U;
	int64_t x31 = -6394643437546986LL;
	int32_t x32 = 156;
	volatile int32_t t5 = 3260812;

	t5 = (x29+(x30<(x31*x32)));

	if (t5 != -9) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1;
	uint16_t x38 = 0U;
	static uint32_t x39 = 33274499U;
	uint8_t x40 = 2U;
	static volatile int32_t t6 = -5903814;

	t6 = (x37+(x38<(x39*x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x45 = INT64_MAX;
	volatile int64_t x46 = -1LL;
	uint16_t x47 = 1623U;
	static int16_t x48 = -414;
	int64_t t7 = INT64_MAX;

	t7 = (x45+(x46<(x47*x48)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 28706929LLU;
	int8_t x50 = 0;
	uint16_t x51 = 8U;
	volatile int16_t x52 = INT16_MIN;
	static volatile uint64_t t8 = 5LLU;

	t8 = (x49+(x50<(x51*x52)));

	if (t8 != 28706929LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x53 = 31U;
	static int64_t x55 = -3022LL;
	volatile int64_t x56 = -1LL;
	int32_t t9 = 15;

	t9 = (x53+(x54<(x55*x56)));

	if (t9 != 32) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x58 = 219U;
	int32_t x60 = -1;
	uint32_t t10 = 141U;

	t10 = (x57+(x58<(x59*x60)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x61 = 26374312U;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;

	t11 = (x61+(x62<(x63*x64)));

	if (t11 != 26374313U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = 125U;
	static volatile int32_t x70 = INT32_MIN;
	int8_t x72 = -15;

	t12 = (x69+(x70<(x71*x72)));

	if (t12 != 125U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x73 = UINT8_MAX;
	volatile int64_t x74 = INT64_MAX;
	uint16_t x75 = 1671U;
	int16_t x76 = -1;
	volatile int32_t t13 = -16695;

	t13 = (x73+(x74<(x75*x76)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x78 = -20;
	int8_t x79 = INT8_MAX;
	int32_t x80 = -5957533;
	int32_t t14 = 2;

	t14 = (x77+(x78<(x79*x80)));

	if (t14 != -31688) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x81 = UINT8_MAX;
	volatile uint64_t x82 = 502LLU;
	volatile uint32_t x84 = 8369241U;
	static volatile int32_t t15 = -98887559;

	t15 = (x81+(x82<(x83*x84)));

	if (t15 != 256) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = -1LL;
	int16_t x90 = -418;
	uint64_t x91 = 1LLU;
	uint64_t x92 = UINT64_MAX;
	int64_t t16 = 614113LL;

	t16 = (x89+(x90<(x91*x92)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = UINT64_MAX;
	uint8_t x94 = 89U;
	static int32_t x95 = -1;
	int16_t x96 = INT16_MIN;
	static volatile uint64_t t17 = 1LLU;

	t17 = (x93+(x94<(x95*x96)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = -1;
	static int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MAX;
	int32_t t18 = -242997;

	t18 = (x97+(x98<(x99*x100)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int8_t x106 = 0;
	int64_t x107 = -1LL;
	volatile int32_t t19 = -112678053;

	t19 = (x105+(x106<(x107*x108)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x109 = UINT32_MAX;
	static uint64_t x110 = UINT64_MAX;
	uint8_t x111 = 1U;
	int8_t x112 = -4;
	uint32_t t20 = UINT32_MAX;

	t20 = (x109+(x110<(x111*x112)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = 83972LL;
	int16_t x114 = INT16_MAX;
	int32_t x115 = -1;
	static int64_t t21 = 566LL;

	t21 = (x113+(x114<(x115*x116)));

	if (t21 != 83972LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = 320037LLU;
	uint16_t x119 = UINT16_MAX;
	static uint16_t x120 = 19855U;
	volatile int64_t t22 = 9989LL;

	t22 = (x117+(x118<(x119*x120)));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x122 = INT64_MIN;
	int64_t x123 = 105651LL;
	uint8_t x124 = UINT8_MAX;
	static int32_t t23 = 270557;

	t23 = (x121+(x122<(x123*x124)));

	if (t23 != 65536) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 627416282LLU;
	int8_t x126 = -1;
	int8_t x127 = INT8_MIN;
	volatile uint64_t t24 = 2LLU;

	t24 = (x125+(x126<(x127*x128)));

	if (t24 != 627416282LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	uint32_t x130 = 7162296U;
	int32_t x131 = 2;
	volatile int16_t x132 = INT16_MAX;

	t25 = (x129+(x130<(x131*x132)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x134 = INT32_MIN;
	uint32_t x136 = 3703739U;
	volatile int32_t t26 = -299816824;

	t26 = (x133+(x134<(x135*x136)));

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MIN;
	int16_t x143 = -44;
	int8_t x144 = -9;
	volatile int32_t t27 = -589514;

	t27 = (x141+(x142<(x143*x144)));

	if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = -1LL;
	int64_t x146 = -1LL;
	int8_t x147 = -1;
	uint16_t x148 = 97U;
	volatile int64_t t28 = -29535818182648042LL;

	t28 = (x145+(x146<(x147*x148)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile int16_t x150 = 90;
	volatile uint32_t x152 = 1452158U;

	t29 = (x149+(x150<(x151*x152)));

	if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x157 = 67160438U;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	volatile int16_t x160 = -1;
	static volatile uint32_t t30 = 2839381U;

	t30 = (x157+(x158<(x159*x160)));

	if (t30 != 67160439U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = -1;
	int32_t x162 = 1;
	uint64_t x164 = UINT64_MAX;
	static volatile int32_t t31 = -177379677;

	t31 = (x161+(x162<(x163*x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x169 = 368U;
	volatile int32_t x170 = INT32_MIN;
	uint8_t x172 = 21U;
	static int32_t t32 = -996;

	t32 = (x169+(x170<(x171*x172)));

	if (t32 != 369) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x177 = INT16_MIN;
	uint16_t x178 = 27U;
	static int16_t x179 = INT16_MIN;
	int8_t x180 = -1;
	volatile int32_t t33 = -500281861;

	t33 = (x177+(x178<(x179*x180)));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = -1;
	int8_t x188 = 1;
	int32_t t34 = -1;

	t34 = (x185+(x186<(x187*x188)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x197 = -1;
	int64_t x198 = INT64_MIN;
	static int64_t x200 = INT64_MIN;

	t35 = (x197+(x198<(x199*x200)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = -1LL;
	int16_t x203 = 1200;
	uint16_t x204 = 1U;
	int64_t t36 = 3963502775627LL;

	t36 = (x201+(x202<(x203*x204)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x206 = 0U;
	uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = INT64_MIN;
	static volatile int32_t t37 = -28;

	t37 = (x205+(x206<(x207*x208)));

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x209 = INT32_MIN;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	int32_t t38 = 87009;

	t38 = (x209+(x210<(x211*x212)));

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x213 = -1LL;
	uint8_t x215 = 2U;
	uint8_t x216 = 8U;

	t39 = (x213+(x214<(x215*x216)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x217 = UINT16_MAX;
	static int8_t x218 = -1;
	volatile int8_t x219 = -37;

	t40 = (x217+(x218<(x219*x220)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x225 = -1LL;
	int64_t x226 = -1LL;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = -55;
	static volatile int64_t t41 = 5LL;

	t41 = (x225+(x226<(x227*x228)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = 58;
	static volatile uint8_t x230 = 31U;
	volatile int64_t x231 = -1LL;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t42 = -32375167;

	t42 = (x229+(x230<(x231*x232)));

	if (t42 != 58) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x233 = INT32_MAX;
	static int8_t x234 = INT8_MAX;
	int32_t x235 = -1;

	t43 = (x233+(x234<(x235*x236)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x237 = 53U;
	int64_t x238 = INT64_MIN;

	t44 = (x237+(x238<(x239*x240)));

	if (t44 != 54) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x246 = -27;
	int8_t x247 = -1;
	volatile int32_t x248 = INT32_MAX;
	int32_t t45 = 13;

	t45 = (x245+(x246<(x247*x248)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x249 = -26;
	static int8_t x250 = -53;
	static uint32_t x251 = 17U;
	int16_t x252 = -1;
	volatile int32_t t46 = -556282712;

	t46 = (x249+(x250<(x251*x252)));

	if (t46 != -25) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x261 = INT64_MIN;
	int16_t x262 = INT16_MIN;
	int8_t x263 = -14;
	static uint64_t x264 = 56LLU;
	static int64_t t47 = 62148179110LL;

	t47 = (x261+(x262<(x263*x264)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x265 = 0LLU;
	int64_t x266 = -2352559LL;
	static int64_t x267 = -1LL;
	int8_t x268 = 1;

	t48 = (x265+(x266<(x267*x268)));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	int32_t x271 = -1;
	static int16_t x272 = INT16_MAX;
	int32_t t49 = 194;

	t49 = (x269+(x270<(x271*x272)));

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x278 = UINT16_MAX;
	uint64_t x279 = 151252195228379614LLU;
	int32_t t50 = -49;

	t50 = (x277+(x278<(x279*x280)));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x281 = INT64_MIN;
	volatile uint16_t x283 = 401U;
	int8_t x284 = INT8_MIN;
	int64_t t51 = -33LL;

	t51 = (x281+(x282<(x283*x284)));

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x285 = 7964159148764330LLU;
	int32_t x286 = -1;
	volatile uint8_t x288 = UINT8_MAX;
	uint64_t t52 = 15LLU;

	t52 = (x285+(x286<(x287*x288)));

	if (t52 != 7964159148764330LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x289 = 255U;
	uint16_t x291 = 398U;
	int32_t x292 = -1;
	volatile uint32_t t53 = 46671242U;

	t53 = (x289+(x290<(x291*x292)));

	if (t53 != 256U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = 1;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t54 = -1359;

	t54 = (x297+(x298<(x299*x300)));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x305 = INT16_MIN;
	volatile int8_t x306 = -1;
	static uint64_t x308 = UINT64_MAX;
	int32_t t55 = -1972259;

	t55 = (x305+(x306<(x307*x308)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x309 = 14829U;
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = 0;
	volatile int32_t t56 = 2743;

	t56 = (x309+(x310<(x311*x312)));

	if (t56 != 14829) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x317 = UINT8_MAX;
	int8_t x319 = -21;
	volatile int8_t x320 = 56;
	static int32_t t57 = 335053356;

	t57 = (x317+(x318<(x319*x320)));

	if (t57 != 256) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = 586;
	int8_t x322 = INT8_MIN;
	static int16_t x324 = -768;
	int32_t t58 = -1;

	t58 = (x321+(x322<(x323*x324)));

	if (t58 != 587) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x326 = INT32_MIN;
	volatile int64_t x327 = -9496121610849LL;
	static int16_t x328 = -1;
	volatile uint64_t t59 = 158545932210LLU;

	t59 = (x325+(x326<(x327*x328)));

	if (t59 != 5027735524183LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x329 = 36;
	static int32_t x330 = -43;
	uint64_t x331 = 227796LLU;
	static int64_t x332 = 78209823LL;

	t60 = (x329+(x330<(x331*x332)));

	if (t60 != 36) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x334 = 240U;
	volatile uint32_t x335 = 405128625U;
	static int32_t x336 = INT32_MAX;
	static int64_t t61 = -367163LL;

	t61 = (x333+(x334<(x335*x336)));

	if (t61 != -1055160200212LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x337 = -191;
	int64_t x338 = -1LL;
	static int8_t x340 = INT8_MIN;

	t62 = (x337+(x338<(x339*x340)));

	if (t62 != -190) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MAX;
	static volatile uint64_t x344 = UINT64_MAX;
	static int32_t t63 = -148433;

	t63 = (x341+(x342<(x343*x344)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x345 = 89;
	int16_t x347 = -3;
	int32_t t64 = 796492;

	t64 = (x345+(x346<(x347*x348)));

	if (t64 != 90) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x349 = 123U;
	volatile uint16_t x350 = 111U;
	volatile uint64_t x351 = UINT64_MAX;
	static uint8_t x352 = 0U;
	volatile int32_t t65 = -97579;

	t65 = (x349+(x350<(x351*x352)));

	if (t65 != 123) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x358 = -355;
	int32_t x359 = 66450;
	int32_t t66 = 23;

	t66 = (x357+(x358<(x359*x360)));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = 133U;
	int8_t x367 = INT8_MIN;
	volatile int32_t t67 = -6196684;

	t67 = (x365+(x366<(x367*x368)));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x369 = 71U;
	int64_t x371 = 10444LL;
	volatile int8_t x372 = -1;
	volatile int32_t t68 = 725211523;

	t68 = (x369+(x370<(x371*x372)));

	if (t68 != 71) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x374 = INT16_MIN;
	static int32_t x375 = -1;
	int8_t x376 = INT8_MAX;
	int32_t t69 = 101;

	t69 = (x373+(x374<(x375*x376)));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x377 = 12U;
	volatile int32_t x378 = -1473;
	static volatile uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;

	t70 = (x377+(x378<(x379*x380)));

	if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x381 = 129066600761628LLU;
	int64_t x382 = INT64_MIN;
	volatile int8_t x383 = INT8_MIN;
	volatile uint32_t x384 = UINT32_MAX;
	volatile uint64_t t71 = 217497648339803LLU;

	t71 = (x381+(x382<(x383*x384)));

	if (t71 != 129066600761629LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x385 = INT64_MAX;
	volatile int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	int64_t t72 = INT64_MAX;

	t72 = (x385+(x386<(x387*x388)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = 4;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = 1U;
	int32_t t73 = 149;

	t73 = (x393+(x394<(x395*x396)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x405 = 14U;
	volatile int8_t x407 = -1;
	static int16_t x408 = -3;
	volatile uint32_t t74 = 27U;

	t74 = (x405+(x406<(x407*x408)));

	if (t74 != 14U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x409 = -1;
	int8_t x410 = -1;
	int32_t x411 = 95918;
	int8_t x412 = INT8_MIN;
	int32_t t75 = 13;

	t75 = (x409+(x410<(x411*x412)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x417 = INT32_MIN;
	uint8_t x418 = 6U;
	int16_t x419 = -1;

	t76 = (x417+(x418<(x419*x420)));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x421 = -257864901;
	volatile uint32_t x423 = 4U;
	uint8_t x424 = UINT8_MAX;
	static int32_t t77 = -22855675;

	t77 = (x421+(x422<(x423*x424)));

	if (t77 != -257864901) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x425 = -226;
	int64_t x426 = -2477808050LL;
	int16_t x427 = -1;
	static uint8_t x428 = UINT8_MAX;

	t78 = (x425+(x426<(x427*x428)));

	if (t78 != -225) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x429 = INT32_MIN;
	int32_t x430 = -1;
	uint64_t x432 = 3257215848001468612LLU;
	int32_t t79 = INT32_MIN;

	t79 = (x429+(x430<(x431*x432)));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x437 = 124969752156890LLU;
	static int16_t x438 = -529;
	int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MAX;
	uint64_t t80 = 344LLU;

	t80 = (x437+(x438<(x439*x440)));

	if (t80 != 124969752156890LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x441 = 123U;
	static volatile int8_t x444 = INT8_MIN;

	t81 = (x441+(x442<(x443*x444)));

	if (t81 != 123) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x445 = INT8_MAX;
	uint64_t x446 = UINT64_MAX;
	volatile uint8_t x447 = 102U;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t82 = 720630;

	t82 = (x445+(x446<(x447*x448)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x450 = 5726826LLU;
	uint32_t x451 = 929U;
	int8_t x452 = -1;
	int32_t t83 = 82;

	t83 = (x449+(x450<(x451*x452)));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x457 = 44744319431825258LL;
	static volatile int32_t x458 = -1;

	t84 = (x457+(x458<(x459*x460)));

	if (t84 != 44744319431825259LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x461 = UINT8_MAX;
	int8_t x463 = INT8_MIN;
	int16_t x464 = -4355;
	static volatile int32_t t85 = 493;

	t85 = (x461+(x462<(x463*x464)));

	if (t85 != 256) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x466 = 1039;
	int64_t x467 = -1LL;
	volatile int8_t x468 = INT8_MAX;
	uint32_t t86 = 786378464U;

	t86 = (x465+(x466<(x467*x468)));

	if (t86 != 109271189U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x469 = -1;
	int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	volatile int32_t t87 = 58304;

	t87 = (x469+(x470<(x471*x472)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x474 = INT64_MAX;
	volatile int64_t x475 = -109067013580587518LL;
	int8_t x476 = -1;

	t88 = (x473+(x474<(x475*x476)));

	if (t88 != 52) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x485 = INT64_MIN;
	uint8_t x486 = UINT8_MAX;
	volatile int16_t x487 = INT16_MAX;
	int64_t t89 = 12753874599LL;

	t89 = (x485+(x486<(x487*x488)));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x489 = INT16_MIN;
	static uint32_t x490 = 4U;
	int16_t x491 = INT16_MIN;
	volatile int32_t t90 = -186;

	t90 = (x489+(x490<(x491*x492)));

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x493 = UINT8_MAX;
	volatile int32_t x494 = -1;
	uint16_t x495 = 189U;
	static int8_t x496 = INT8_MAX;
	static int32_t t91 = -15449;

	t91 = (x493+(x494<(x495*x496)));

	if (t91 != 256) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x497 = INT32_MIN;
	static int16_t x498 = 433;
	uint32_t x499 = 256998857U;
	int16_t x500 = INT16_MIN;
	int32_t t92 = -1;

	t92 = (x497+(x498<(x499*x500)));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x501 = -218454683994LL;
	int16_t x502 = INT16_MIN;
	uint8_t x503 = UINT8_MAX;
	int64_t t93 = -4220338222182793LL;

	t93 = (x501+(x502<(x503*x504)));

	if (t93 != -218454683993LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x505 = 1335303212U;
	static uint8_t x506 = UINT8_MAX;
	int16_t x507 = -507;
	volatile uint16_t x508 = UINT16_MAX;
	static volatile uint32_t t94 = 2039596035U;

	t94 = (x505+(x506<(x507*x508)));

	if (t94 != 1335303212U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x513 = INT64_MIN;
	uint32_t x515 = 233214U;
	static int32_t x516 = 48221;

	t95 = (x513+(x514<(x515*x516)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = INT8_MAX;
	int8_t x518 = INT8_MIN;
	uint32_t x520 = 11U;
	int32_t t96 = -942143;

	t96 = (x517+(x518<(x519*x520)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x525 = 118U;
	uint8_t x526 = UINT8_MAX;
	static int32_t x527 = 1;
	static uint8_t x528 = 13U;
	static volatile uint32_t t97 = 407172U;

	t97 = (x525+(x526<(x527*x528)));

	if (t97 != 118U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x529 = INT8_MIN;
	uint64_t x530 = 1148849418LLU;
	static int32_t x531 = INT32_MIN;
	static uint64_t x532 = 3268438687318143LLU;
	int32_t t98 = -2271841;

	t98 = (x529+(x530<(x531*x532)));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x534 = -1;
	int8_t x535 = 6;
	uint16_t x536 = 0U;
	volatile int64_t t99 = 207597LL;

	t99 = (x533+(x534<(x535*x536)));

	if (t99 != 19886687LL) { NG(); } else { ; }
	
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

