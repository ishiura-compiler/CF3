#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x5 = UINT32_MAX;
static uint16_t x8 = UINT16_MAX;
volatile uint32_t x12 = 3U;
int32_t t5 = -4430;
uint8_t x36 = 4U;
volatile uint16_t x50 = 3220U;
int64_t x52 = INT64_MIN;
int16_t x56 = 6755;
int32_t x58 = 322980;
int64_t x62 = 29LL;
uint64_t t14 = UINT64_MAX;
static int64_t x70 = -1LL;
int16_t x73 = -1;
volatile uint64_t x76 = 191LLU;
static uint64_t x80 = 1575361907LLU;
int16_t x83 = INT16_MIN;
int8_t x86 = INT8_MAX;
int16_t x88 = INT16_MIN;
int64_t t19 = INT64_MIN;
int64_t x92 = -1LL;
volatile uint32_t t21 = 1091401U;
int8_t x102 = -1;
volatile int16_t x105 = -1;
int16_t x108 = -263;
volatile int16_t x113 = INT16_MAX;
uint64_t x116 = 89760701904LLU;
uint32_t t25 = UINT32_MAX;
int32_t x124 = INT32_MIN;
int32_t x126 = -1200813;
int16_t x128 = 3;
int8_t x129 = INT8_MIN;
volatile int32_t t28 = -4776;
volatile uint64_t t29 = 1LLU;
int32_t x145 = INT32_MIN;
int16_t x148 = INT16_MIN;
int64_t x151 = INT64_MAX;
volatile int64_t x161 = INT64_MIN;
uint16_t x164 = UINT16_MAX;
uint64_t x167 = 19LLU;
int8_t x168 = INT8_MAX;
volatile int64_t t38 = 495407997651415081LL;
int32_t x178 = 819870553;
static volatile int8_t x181 = INT8_MIN;
volatile int32_t x184 = INT32_MIN;
volatile uint64_t x189 = 1048232100043890LLU;
int16_t x193 = INT16_MIN;
static int16_t x197 = INT16_MIN;
uint32_t x198 = 6U;
volatile uint16_t x200 = UINT16_MAX;
int64_t x212 = INT64_MIN;
volatile int32_t t47 = -219;
int32_t x222 = -1;
int16_t x223 = INT16_MIN;
static uint32_t x224 = UINT32_MAX;
int16_t x227 = INT16_MAX;
static uint64_t x235 = UINT64_MAX;
int64_t x241 = -1LL;
uint32_t x246 = UINT32_MAX;
int16_t x251 = -1;
static int64_t x253 = -1LL;
uint16_t x258 = 13244U;
uint16_t x259 = UINT16_MAX;
uint64_t x268 = 375574230LLU;
volatile int32_t t60 = -1805832;
int32_t x271 = INT32_MIN;
int16_t x281 = -346;
int16_t x284 = -3741;
volatile uint16_t x288 = UINT16_MAX;
int32_t t67 = 49915;
int64_t x301 = -3462612638LL;
int8_t x303 = INT8_MIN;
uint32_t x304 = UINT32_MAX;
uint16_t x307 = UINT16_MAX;
static int64_t x314 = INT64_MAX;
int32_t t72 = 8;
volatile int32_t t73 = 59582006;
uint16_t x322 = 0U;
uint8_t x329 = UINT8_MAX;
int16_t x333 = INT16_MIN;
int32_t t76 = -219460900;
uint64_t x341 = UINT64_MAX;
int16_t x342 = INT16_MAX;
int32_t x343 = INT32_MAX;
int32_t x352 = -1;
uint16_t x355 = UINT16_MAX;
int16_t x368 = 1;
int32_t t83 = -15664;
static int8_t x369 = INT8_MIN;
uint8_t x374 = UINT8_MAX;
int32_t x382 = -1;
int16_t x383 = INT16_MIN;
static volatile uint16_t x391 = UINT16_MAX;
static int32_t x393 = -1;
uint8_t x401 = 9U;
uint32_t x404 = 27U;
int64_t x410 = INT64_MIN;
static volatile uint32_t x413 = 3353865U;
volatile uint32_t x416 = 6U;
static volatile int16_t x420 = -1506;
int16_t x430 = INT16_MAX;
int16_t x432 = INT16_MAX;
uint32_t x434 = UINT32_MAX;
int32_t x436 = -1;


void f0(void) {
	volatile uint16_t x6 = 194U;
	int64_t x7 = INT64_MIN;
	uint32_t t0 = UINT32_MAX;

	t0 = (x5+(x6<=(x7%x8)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	static int16_t x11 = 0;
	static volatile int32_t t1 = 1653;

	t1 = (x9+(x10<=(x11%x12)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int8_t x14 = 30;
	uint8_t x15 = 60U;
	uint16_t x16 = 92U;
	int32_t t2 = -1886;

	t2 = (x13+(x14<=(x15%x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint64_t x18 = UINT64_MAX;
	uint64_t x19 = 31029194250200LLU;
	int32_t x20 = INT32_MAX;
	int32_t t3 = -463635;

	t3 = (x17+(x18<=(x19%x20)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = INT8_MIN;
	uint64_t x26 = 1699LLU;
	int64_t x27 = -11916382999LL;
	int16_t x28 = INT16_MIN;
	static int32_t t4 = 12;

	t4 = (x25+(x26<=(x27%x28)));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -777188;
	volatile uint16_t x30 = 38U;
	int8_t x31 = 0;
	volatile int64_t x32 = 1LL;

	t5 = (x29+(x30<=(x31%x32)));

	if (t5 != -777188) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	uint32_t x34 = 0U;
	uint8_t x35 = 13U;
	int32_t t6 = 8354268;

	t6 = (x33+(x34<=(x35%x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 61956;
	static int32_t x38 = -954664984;
	int8_t x39 = 2;
	static int32_t x40 = INT32_MAX;
	volatile int32_t t7 = -1;

	t7 = (x37+(x38<=(x39%x40)));

	if (t7 != 61957) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	int8_t x42 = INT8_MAX;
	int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t8 = 1;

	t8 = (x41+(x42<=(x43%x44)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = 0;
	uint32_t x46 = 0U;
	int8_t x47 = -1;
	volatile uint16_t x48 = 2U;
	int32_t t9 = -4;

	t9 = (x45+(x46<=(x47%x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -7424LL;
	volatile uint64_t x51 = 33369016021197LLU;
	volatile int64_t t10 = 1LL;

	t10 = (x49+(x50<=(x51%x52)));

	if (t10 != -7423LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	static int32_t x55 = 276784;
	volatile int32_t t11 = -654717;

	t11 = (x53+(x54<=(x55%x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = 5429502;
	static uint32_t x59 = UINT32_MAX;
	int16_t x60 = -1;
	volatile int32_t t12 = 99221;

	t12 = (x57+(x58<=(x59%x60)));

	if (t12 != 5429502) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x63 = INT32_MAX;
	int64_t x64 = 71802267730562625LL;
	static int32_t t13 = -264;

	t13 = (x61+(x62<=(x63%x64)));

	if (t13 != 65536) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint32_t x66 = 7209U;
	int8_t x67 = INT8_MAX;
	volatile int64_t x68 = -4461170153547694975LL;

	t14 = (x65+(x66<=(x67%x68)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 1;
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t15 = -451;

	t15 = (x69+(x70<=(x71%x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x74 = 985U;
	int64_t x75 = INT64_MIN;
	static volatile int32_t t16 = -8;

	t16 = (x73+(x74<=(x75%x76)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = 32;
	int8_t x78 = INT8_MIN;
	int64_t x79 = 9837296LL;
	volatile int32_t t17 = -239483909;

	t17 = (x77+(x78<=(x79%x80)));

	if (t17 != 32) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t18 = -13110026;

	t18 = (x81+(x82<=(x83%x84)));

	if (t18 != 65536) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	static int16_t x87 = -1;

	t19 = (x85+(x86<=(x87%x88)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = INT8_MIN;
	uint64_t x90 = UINT64_MAX;
	volatile int8_t x91 = INT8_MIN;
	int32_t t20 = 121;

	t20 = (x89+(x90<=(x91%x92)));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 2047792631U;
	uint16_t x94 = 0U;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;

	t21 = (x93+(x94<=(x95%x96)));

	if (t21 != 2047792631U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = -12;
	static volatile int8_t x103 = -1;
	int16_t x104 = INT16_MIN;
	int32_t t22 = -50274833;

	t22 = (x101+(x102<=(x103%x104)));

	if (t22 != -11) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x106 = INT32_MIN;
	static volatile int8_t x107 = -1;
	volatile int32_t t23 = 1370881;

	t23 = (x105+(x106<=(x107%x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x114 = 1198739059765326LLU;
	int32_t x115 = INT32_MAX;
	volatile int32_t t24 = -1022;

	t24 = (x113+(x114<=(x115%x116)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x117 = UINT32_MAX;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MIN;

	t25 = (x117+(x118<=(x119%x120)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = -1;
	uint32_t x122 = 797U;
	static int8_t x123 = -1;
	int32_t t26 = -639947316;

	t26 = (x121+(x122<=(x123%x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = 3;
	static volatile int32_t x127 = -1;
	int32_t t27 = 10717;

	t27 = (x125+(x126<=(x127%x128)));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x130 = INT8_MIN;
	int32_t x131 = 975210751;
	uint8_t x132 = 3U;

	t28 = (x129+(x130<=(x131%x132)));

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 36058LLU;
	int64_t x134 = INT64_MIN;
	volatile int8_t x135 = -16;
	static volatile int64_t x136 = INT64_MIN;

	t29 = (x133+(x134<=(x135%x136)));

	if (t29 != 36059LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	volatile int32_t x138 = INT32_MAX;
	int8_t x139 = -4;
	uint16_t x140 = UINT16_MAX;
	static volatile int64_t t30 = INT64_MIN;

	t30 = (x137+(x138<=(x139%x140)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x141 = 4003627926879603958LLU;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	volatile uint32_t x144 = 82538066U;
	uint64_t t31 = 698651181300091LLU;

	t31 = (x141+(x142<=(x143%x144)));

	if (t31 != 4003627926879603958LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x146 = 17241340123571LLU;
	uint8_t x147 = 60U;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x145+(x146<=(x147%x148)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = UINT64_MAX;
	static int8_t x150 = 0;
	int16_t x152 = -2;
	volatile uint64_t t33 = 36948308699998427LLU;

	t33 = (x149+(x150<=(x151%x152)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = UINT64_MAX;
	int64_t x158 = INT64_MIN;
	uint64_t x159 = 22874997LLU;
	int64_t x160 = INT64_MAX;
	static uint64_t t34 = UINT64_MAX;

	t34 = (x157+(x158<=(x159%x160)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MAX;
	volatile int64_t t35 = -689LL;

	t35 = (x161+(x162<=(x163%x164)));

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	int32_t x166 = 403567825;
	volatile int64_t t36 = -4454LL;

	t36 = (x165+(x166<=(x167%x168)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = -1;
	static int8_t x170 = INT8_MAX;
	volatile uint64_t x171 = 426631821197706869LLU;
	int32_t x172 = INT32_MIN;
	int32_t t37 = 5803042;

	t37 = (x169+(x170<=(x171%x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -2LL;
	volatile int16_t x174 = 9;
	uint16_t x175 = UINT16_MAX;
	int16_t x176 = INT16_MIN;

	t38 = (x173+(x174<=(x175%x176)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	volatile int32_t x180 = -1;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x177+(x178<=(x179%x180)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x182 = INT32_MAX;
	int16_t x183 = 7;
	static volatile int32_t t40 = 727070;

	t40 = (x181+(x182<=(x183%x184)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x190 = UINT8_MAX;
	static uint16_t x191 = 18U;
	int8_t x192 = INT8_MIN;
	uint64_t t41 = 4092794258609LLU;

	t41 = (x189+(x190<=(x191%x192)));

	if (t41 != 1048232100043890LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x194 = INT64_MIN;
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = 24U;
	int32_t t42 = 2734;

	t42 = (x193+(x194<=(x195%x196)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x199 = 12;
	volatile int32_t t43 = -1;

	t43 = (x197+(x198<=(x199%x200)));

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MIN;
	volatile uint16_t x202 = 1U;
	static uint32_t x203 = UINT32_MAX;
	static int16_t x204 = INT16_MIN;
	volatile int64_t t44 = -83LL;

	t44 = (x201+(x202<=(x203%x204)));

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 50949008771LLU;
	volatile int32_t x206 = INT32_MIN;
	static uint32_t x207 = UINT32_MAX;
	static int8_t x208 = -13;
	static volatile uint64_t t45 = 2499117241LLU;

	t45 = (x205+(x206<=(x207%x208)));

	if (t45 != 50949008771LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 1757455145U;
	uint16_t x210 = 3U;
	int64_t x211 = INT64_MIN;
	static volatile uint32_t t46 = 4319U;

	t46 = (x209+(x210<=(x211%x212)));

	if (t46 != 1757455145U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = 145197;
	uint16_t x214 = 5U;
	static uint32_t x215 = UINT32_MAX;
	int32_t x216 = 57;

	t47 = (x213+(x214<=(x215%x216)));

	if (t47 != 145198) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = -1;
	static int16_t x218 = -1;
	static volatile int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MAX;
	static volatile int32_t t48 = -3859;

	t48 = (x217+(x218<=(x219%x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -458816;
	int32_t t49 = 7552644;

	t49 = (x221+(x222<=(x223%x224)));

	if (t49 != -458816) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = -1630309041LL;
	uint16_t x228 = 28411U;
	volatile int32_t t50 = 196593691;

	t50 = (x225+(x226<=(x227%x228)));

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x229 = 0U;
	volatile int16_t x230 = -151;
	volatile uint64_t x231 = UINT64_MAX;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t51 = -4357;

	t51 = (x229+(x230<=(x231%x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	int16_t x236 = INT16_MAX;
	int32_t t52 = 11;

	t52 = (x233+(x234<=(x235%x236)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = 1;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	int64_t x240 = -804LL;
	int32_t t53 = -69;

	t53 = (x237+(x238<=(x239%x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x242 = 44;
	int16_t x243 = -1;
	uint16_t x244 = 24U;
	int64_t t54 = 117242912257670795LL;

	t54 = (x241+(x242<=(x243%x244)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x245 = INT32_MIN;
	uint64_t x247 = 958423287422237202LLU;
	static volatile int16_t x248 = -5;
	int32_t t55 = 246804336;

	t55 = (x245+(x246<=(x247%x248)));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = -1;
	int16_t x252 = INT16_MIN;
	int32_t t56 = -19225567;

	t56 = (x249+(x250<=(x251%x252)));

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x254 = 0;
	uint16_t x255 = UINT16_MAX;
	int8_t x256 = INT8_MIN;
	int64_t t57 = 2022812LL;

	t57 = (x253+(x254<=(x255%x256)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -7756188;
	int16_t x260 = -78;
	static int32_t t58 = -17029464;

	t58 = (x257+(x258<=(x259%x260)));

	if (t58 != -7756188) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = 6;
	static uint8_t x262 = 8U;
	uint16_t x263 = UINT16_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t59 = 586139;

	t59 = (x261+(x262<=(x263%x264)));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = INT8_MAX;
	static int32_t x266 = INT32_MIN;
	uint64_t x267 = UINT64_MAX;

	t60 = (x265+(x266<=(x267%x268)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x269 = 98;
	int64_t x270 = INT64_MIN;
	int8_t x272 = -1;
	static volatile int32_t t61 = -201610110;

	t61 = (x269+(x270<=(x271%x272)));

	if (t61 != 99) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = INT16_MAX;
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = INT64_MIN;
	volatile int64_t x276 = -1LL;
	static volatile int32_t t62 = 62;

	t62 = (x273+(x274<=(x275%x276)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = -4;
	int64_t x279 = -510143LL;
	volatile int16_t x280 = INT16_MAX;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x277+(x278<=(x279%x280)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x282 = 1276797U;
	static int8_t x283 = 1;
	int32_t t64 = -26;

	t64 = (x281+(x282<=(x283%x284)));

	if (t64 != -346) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x285 = -16713647719107025LL;
	int64_t x286 = INT64_MAX;
	int8_t x287 = -1;
	int64_t t65 = -6899026008164269LL;

	t65 = (x285+(x286<=(x287%x288)));

	if (t65 != -16713647719107025LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MAX;
	int64_t x291 = 3870LL;
	int16_t x292 = INT16_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = (x289+(x290<=(x291%x292)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x293 = INT8_MIN;
	static uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;

	t67 = (x293+(x294<=(x295%x296)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x297 = 15087793LLU;
	uint32_t x298 = 83697151U;
	uint64_t x299 = UINT64_MAX;
	volatile int64_t x300 = -99552715453LL;
	volatile uint64_t t68 = 19371LLU;

	t68 = (x297+(x298<=(x299%x300)));

	if (t68 != 15087794LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x302 = INT64_MAX;
	volatile int64_t t69 = 2151631371095LL;

	t69 = (x301+(x302<=(x303%x304)));

	if (t69 != -3462612638LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = -1;
	int16_t x306 = INT16_MAX;
	int16_t x308 = -1;
	volatile int32_t t70 = -565;

	t70 = (x305+(x306<=(x307%x308)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = -35;
	uint16_t x310 = 17575U;
	volatile uint16_t x311 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t71 = 27;

	t71 = (x309+(x310<=(x311%x312)));

	if (t71 != -34) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = -979854;
	static int16_t x315 = INT16_MAX;
	int16_t x316 = INT16_MIN;

	t72 = (x313+(x314<=(x315%x316)));

	if (t72 != -979854) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = -1;
	int8_t x318 = INT8_MAX;
	int32_t x319 = INT32_MAX;
	static int8_t x320 = -1;

	t73 = (x317+(x318<=(x319%x320)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MAX;
	int16_t x323 = -4666;
	int64_t x324 = 5LL;
	int32_t t74 = -3678;

	t74 = (x321+(x322<=(x323%x324)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x330 = -1;
	int64_t x331 = 10678LL;
	int64_t x332 = 65775010LL;
	int32_t t75 = 10530864;

	t75 = (x329+(x330<=(x331%x332)));

	if (t75 != 256) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x334 = 0U;
	volatile uint16_t x335 = 10U;
	static volatile int32_t x336 = -1;

	t76 = (x333+(x334<=(x335%x336)));

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MAX;
	int16_t x339 = -502;
	uint32_t x340 = 9946535U;
	static volatile int32_t t77 = 973819415;

	t77 = (x337+(x338<=(x339%x340)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x344 = -1LL;
	uint64_t t78 = UINT64_MAX;

	t78 = (x341+(x342<=(x343%x344)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = INT32_MAX;
	uint32_t x350 = 30988U;
	uint16_t x351 = 63U;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x349+(x350<=(x351%x352)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x353 = 200499U;
	static int32_t x354 = -1;
	volatile int64_t x356 = INT64_MAX;
	volatile uint32_t t80 = 12U;

	t80 = (x353+(x354<=(x355%x356)));

	if (t80 != 200500U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x357 = INT32_MIN;
	volatile int32_t x358 = -16;
	int32_t x359 = -4209;
	int16_t x360 = INT16_MAX;
	volatile int32_t t81 = INT32_MIN;

	t81 = (x357+(x358<=(x359%x360)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MAX;
	volatile int16_t x362 = INT16_MAX;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t82 = 312496857;

	t82 = (x361+(x362<=(x363%x364)));

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = 7;
	volatile uint16_t x367 = 3U;

	t83 = (x365+(x366<=(x367%x368)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x370 = 39U;
	int16_t x371 = 42;
	uint8_t x372 = 21U;
	int32_t t84 = 10;

	t84 = (x369+(x370<=(x371%x372)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x375 = UINT16_MAX;
	static volatile uint32_t x376 = 74U;
	int32_t t85 = -1972;

	t85 = (x373+(x374<=(x375%x376)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x377 = INT8_MIN;
	uint16_t x378 = 314U;
	uint64_t x379 = 520414659333600793LLU;
	int8_t x380 = -1;
	static volatile int32_t t86 = 0;

	t86 = (x377+(x378<=(x379%x380)));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x381 = -1LL;
	int8_t x384 = -1;
	volatile int64_t t87 = 959LL;

	t87 = (x381+(x382<=(x383%x384)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MAX;
	int32_t t88 = 25797;

	t88 = (x385+(x386<=(x387%x388)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x389 = 10U;
	int32_t x390 = -1;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t89 = -1;

	t89 = (x389+(x390<=(x391%x392)));

	if (t89 != 11) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x394 = 40LL;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = -1;
	int32_t t90 = 230;

	t90 = (x393+(x394<=(x395%x396)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = 2U;
	uint32_t x398 = UINT32_MAX;
	static volatile int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	volatile int32_t t91 = -1305;

	t91 = (x397+(x398<=(x399%x400)));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x402 = 24U;
	volatile uint32_t x403 = 23978U;
	int32_t t92 = 20412823;

	t92 = (x401+(x402<=(x403%x404)));

	if (t92 != 9) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;
	uint16_t x408 = 1644U;
	volatile int32_t t93 = 1007;

	t93 = (x405+(x406<=(x407%x408)));

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = -1LL;
	int16_t x411 = INT16_MIN;
	int64_t x412 = -13997982LL;
	int64_t t94 = 68432005999020LL;

	t94 = (x409+(x410<=(x411%x412)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;
	static uint32_t t95 = 157911425U;

	t95 = (x413+(x414<=(x415%x416)));

	if (t95 != 3353866U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = -1;
	int32_t x419 = INT32_MIN;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x417+(x418<=(x419%x420)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = -1;
	int8_t x422 = -32;
	uint8_t x423 = 3U;
	int8_t x424 = INT8_MIN;
	volatile int32_t t97 = 32478902;

	t97 = (x421+(x422<=(x423%x424)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x429 = -5;
	volatile int8_t x431 = -12;
	volatile int32_t t98 = 179217331;

	t98 = (x429+(x430<=(x431%x432)));

	if (t98 != -5) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = -1;
	static volatile int64_t x435 = INT64_MIN;
	volatile int32_t t99 = -3478;

	t99 = (x433+(x434<=(x435%x436)));

	if (t99 != -1) { NG(); } else { ; }
	
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

