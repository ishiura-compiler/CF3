#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = INT32_MIN;
static int32_t x7 = -1;
uint64_t x8 = UINT64_MAX;
uint64_t t1 = 22869041211420LLU;
int8_t x13 = 11;
uint64_t x17 = UINT64_MAX;
int16_t x21 = 11;
int32_t t5 = -1514;
volatile int64_t t9 = -2103393285158LL;
uint64_t t11 = 16524770307224LLU;
int16_t x50 = 1293;
uint16_t x51 = UINT16_MAX;
uint8_t x53 = UINT8_MAX;
static volatile uint64_t t13 = 1475934563LLU;
int64_t t14 = 390613857903619LL;
int16_t x64 = INT16_MAX;
int32_t x65 = 1;
int32_t t16 = 467;
uint64_t x70 = 16682529877012LLU;
uint8_t x74 = 5U;
int32_t x79 = INT32_MAX;
int64_t x84 = -1LL;
int8_t x86 = INT8_MIN;
int64_t t22 = 62100LL;
static volatile uint32_t x97 = 54U;
int32_t x98 = INT32_MIN;
static int64_t x116 = -1LL;
int32_t t29 = -121798;
uint8_t x126 = 11U;
uint16_t x129 = 3U;
static int32_t x132 = -1;
volatile uint64_t t32 = 947361469947077486LLU;
static uint32_t x135 = UINT32_MAX;
uint16_t x142 = UINT16_MAX;
volatile uint64_t x148 = UINT64_MAX;
int32_t x149 = INT32_MIN;
static uint64_t x154 = 237851916523LLU;
volatile uint64_t x168 = UINT64_MAX;
int32_t x177 = -1051;
volatile int16_t x180 = INT16_MAX;
uint32_t x187 = 31U;
int32_t x188 = -520;
int32_t x191 = INT32_MAX;
static int32_t x198 = INT32_MIN;
volatile int8_t x210 = -1;
int16_t x219 = 14;
int8_t x224 = INT8_MAX;
volatile int32_t t55 = -11927;
static int16_t x233 = INT16_MAX;
static int64_t x240 = INT64_MIN;
volatile int16_t x244 = INT16_MIN;
int16_t x255 = INT16_MIN;
uint64_t x260 = 1368205123882526200LLU;
int32_t x269 = 39619;
int64_t t68 = 22233796121149955LL;
volatile uint8_t x282 = 1U;
volatile int64_t x283 = INT64_MAX;
int64_t x284 = -1LL;
uint64_t t70 = 914865176010LLU;
static uint64_t x290 = 2065686912780996033LLU;
int64_t x293 = -1LL;
int16_t x294 = -6;
int32_t x300 = INT32_MAX;
volatile int64_t t75 = -64014802821017LL;
volatile uint32_t x309 = 6499655U;
int32_t x311 = INT32_MIN;
volatile uint64_t x314 = 57LLU;
static volatile int32_t t79 = -20;
int8_t x332 = INT8_MIN;
static int64_t x334 = 839LL;
static int8_t x342 = 62;
uint64_t t85 = 102864963LLU;
int64_t x354 = 792016LL;
volatile int64_t t88 = 778233952LL;
int64_t x368 = INT64_MIN;
int8_t x380 = -2;
volatile int64_t t94 = -1399385432381169LL;
static uint8_t x388 = 19U;
volatile int32_t t96 = 0;
int32_t x400 = 5;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint64_t x2 = 818596053393LLU;
	int16_t x3 = -13439;
	int16_t x4 = -1;
	uint64_t t0 = 6453915446394839643LLU;

	t0 = (x1&(x2%(x3|x4)));

	if (t0 != 818596053376LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 32365763LLU;

	t1 = (x5&(x6%(x7|x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int8_t x10 = -1;
	static uint16_t x11 = 15729U;
	uint32_t x12 = 71U;
	uint32_t t2 = 62650854U;

	t2 = (x9&(x10%(x11|x12)));

	if (t2 != 4635U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 7U;
	static uint8_t x15 = 6U;
	int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = -18108003;

	t3 = (x13&(x14%(x15|x16)));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x18 = UINT64_MAX;
	static int16_t x19 = 249;
	volatile int64_t x20 = -1LL;
	static uint64_t t4 = 13601037221376LLU;

	t4 = (x17&(x18%(x19|x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 7;
	int32_t x23 = INT32_MIN;
	uint16_t x24 = UINT16_MAX;

	t5 = (x21&(x22%(x23|x24)));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int32_t x26 = -1;
	int64_t x27 = 1752591759554665925LL;
	int8_t x28 = -3;
	int64_t t6 = 20173LL;

	t6 = (x25&(x26%(x27|x28)));

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = -2;
	int32_t x31 = INT32_MIN;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -2196;

	t7 = (x29&(x30%(x31|x32)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	static uint16_t x34 = 109U;
	int16_t x35 = -6257;
	uint8_t x36 = UINT8_MAX;
	static volatile int64_t t8 = -553LL;

	t8 = (x33&(x34%(x35|x36)));

	if (t8 != 109LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	volatile int64_t x38 = -382939647026129LL;
	int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MIN;

	t9 = (x37&(x38%(x39|x40)));

	if (t9 != -382939647026129LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int64_t x42 = -1208614911LL;
	int16_t x43 = INT16_MIN;
	int8_t x44 = -1;
	volatile uint64_t t10 = 10364205392121374LLU;

	t10 = (x41&(x42%(x43|x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 732U;
	uint64_t x46 = 11940626LLU;
	static int16_t x47 = INT16_MAX;
	uint32_t x48 = UINT32_MAX;

	t11 = (x45&(x46%(x47|x48)));

	if (t11 != 528LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 0;
	int64_t x52 = 34LL;
	volatile int64_t t12 = -330592436885024602LL;

	t12 = (x49&(x50%(x51|x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = 21945280241LLU;
	uint8_t x55 = 87U;
	uint64_t x56 = 26517683618006LLU;

	t13 = (x53&(x54%(x55|x56)));

	if (t13 != 241LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	static int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MIN;

	t14 = (x57&(x58%(x59|x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	int8_t x63 = -4;
	static volatile int32_t t15 = -905495295;

	t15 = (x61&(x62%(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x66 = 83U;
	static int32_t x67 = INT32_MIN;
	static volatile int16_t x68 = 7572;

	t16 = (x65&(x66%(x67|x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint16_t x71 = 56U;
	volatile int64_t x72 = INT64_MIN;
	uint64_t t17 = 13LLU;

	t17 = (x69&(x70%(x71|x72)));

	if (t17 != 876899348LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	static int8_t x76 = -31;
	volatile int32_t t18 = 19459288;

	t18 = (x73&(x74%(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	volatile int16_t x78 = INT16_MIN;
	uint8_t x80 = 14U;
	volatile int32_t t19 = 13231652;

	t19 = (x77&(x78%(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 1U;
	int8_t x82 = INT8_MIN;
	int16_t x83 = -1;
	static volatile int64_t t20 = 430425022879753803LL;

	t20 = (x81&(x82%(x83|x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	int64_t x88 = -6930LL;
	int64_t t21 = 207992724093LL;

	t21 = (x85&(x86%(x87|x88)));

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = INT64_MIN;
	int16_t x91 = -1;
	int16_t x92 = 1;

	t22 = (x89&(x90%(x91|x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int16_t x94 = INT16_MIN;
	static int64_t x95 = INT64_MAX;
	static volatile uint8_t x96 = 6U;
	uint64_t t23 = 66828964LLU;

	t23 = (x93&(x94%(x95|x96)));

	if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x99 = INT8_MIN;
	static volatile int8_t x100 = INT8_MAX;
	uint32_t t24 = 121864055U;

	t24 = (x97&(x98%(x99|x100)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	uint16_t x103 = 4045U;
	uint32_t x104 = 622506U;
	int64_t t25 = -1090266354291346LL;

	t25 = (x101&(x102%(x103|x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MAX;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = 6940590952784762LLU;
	volatile uint64_t t26 = 309193LLU;

	t26 = (x105&(x106%(x107|x108)));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 90913LLU;
	uint16_t x110 = 2487U;
	int32_t x111 = -53;
	uint16_t x112 = 12072U;
	static volatile uint64_t t27 = 2696739100LLU;

	t27 = (x109&(x110%(x111|x112)));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	uint64_t x114 = 150604021225LLU;
	static volatile int8_t x115 = INT8_MAX;
	uint64_t t28 = 2781595130LLU;

	t28 = (x113&(x114%(x115|x116)));

	if (t28 != 150604021225LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = 1;
	int8_t x119 = INT8_MIN;
	int32_t x120 = -1;

	t29 = (x117&(x118%(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 279U;
	int32_t x122 = -1;
	volatile int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = 23144;

	t30 = (x121&(x122%(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	static int64_t x128 = INT64_MIN;
	int64_t t31 = 6576569671LL;

	t31 = (x125&(x126%(x127|x128)));

	if (t31 != 11LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MIN;

	t32 = (x129&(x130%(x131|x132)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 1U;
	static int8_t x134 = INT8_MIN;
	static uint8_t x136 = 50U;
	uint32_t t33 = 3667U;

	t33 = (x133&(x134%(x135|x136)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1;
	int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	static uint32_t x140 = UINT32_MAX;
	volatile int64_t t34 = 31647720514700LL;

	t34 = (x137&(x138%(x139|x140)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	int8_t x143 = -1;
	uint32_t x144 = 3777479U;
	volatile int64_t t35 = 120045LL;

	t35 = (x141&(x142%(x143|x144)));

	if (t35 != 65535LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = 237LLU;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	volatile uint64_t t36 = 15213655498LLU;

	t36 = (x145&(x146%(x147|x148)));

	if (t36 != 237LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MIN;
	int8_t x152 = -1;
	volatile uint32_t t37 = 3631167U;

	t37 = (x149&(x150%(x151|x152)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -57LL;
	volatile int16_t x155 = INT16_MIN;
	static int8_t x156 = INT8_MAX;
	uint64_t t38 = 721014163240256378LLU;

	t38 = (x153&(x154%(x155|x156)));

	if (t38 != 237851916483LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	uint64_t x158 = 83LLU;
	int32_t x159 = -1;
	static uint8_t x160 = 4U;
	volatile uint64_t t39 = 134LLU;

	t39 = (x157&(x158%(x159|x160)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 15;
	int32_t x162 = -13290;
	int64_t x163 = INT64_MAX;
	static int64_t x164 = INT64_MAX;
	static volatile int64_t t40 = -6721468632016075LL;

	t40 = (x161&(x162%(x163|x164)));

	if (t40 != 6LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x165 = 0U;
	int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MIN;
	volatile uint64_t t41 = 5424LLU;

	t41 = (x165&(x166%(x167|x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	uint32_t x170 = 46597U;
	int16_t x171 = 99;
	static int64_t x172 = -64750564856LL;
	volatile int64_t t42 = -71913121741198LL;

	t42 = (x169&(x170%(x171|x172)));

	if (t42 != 5LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	uint16_t x174 = 2U;
	volatile int32_t x175 = 44;
	uint32_t x176 = 14U;
	static int64_t t43 = -528636596485684LL;

	t43 = (x173&(x174%(x175|x176)));

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = 16758289493832LL;
	int64_t x179 = -1LL;
	volatile int64_t t44 = 3LL;

	t44 = (x177&(x178%(x179|x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MAX;
	volatile int32_t x182 = -736550424;
	static int8_t x183 = INT8_MIN;
	int32_t x184 = -1;
	static volatile int32_t t45 = 57;

	t45 = (x181&(x182%(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int8_t x186 = INT8_MAX;
	uint32_t t46 = 871621U;

	t46 = (x185&(x186%(x187|x188)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 2102323407U;
	int8_t x190 = INT8_MAX;
	volatile uint16_t x192 = UINT16_MAX;
	volatile uint32_t t47 = 164U;

	t47 = (x189&(x190%(x191|x192)));

	if (t47 != 79U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = UINT64_MAX;
	int32_t x194 = INT32_MIN;
	static int16_t x195 = -3544;
	volatile int32_t x196 = INT32_MIN;
	static uint64_t t48 = 8412772721322000485LLU;

	t48 = (x193&(x194%(x195|x196)));

	if (t48 != 18446744073709551224LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t x200 = -1;
	int64_t t49 = -3086973LL;

	t49 = (x197&(x198%(x199|x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	static int64_t x202 = -52213017294733579LL;
	volatile int32_t x203 = -1;
	static int16_t x204 = INT16_MAX;
	volatile int64_t t50 = 7635016460875540LL;

	t50 = (x201&(x202%(x203|x204)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 3172LL;
	int16_t x206 = INT16_MIN;
	volatile int16_t x207 = -4;
	uint64_t x208 = UINT64_MAX;
	static uint64_t t51 = 22498LLU;

	t51 = (x205&(x206%(x207|x208)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 2U;
	int64_t x211 = INT64_MAX;
	uint32_t x212 = UINT32_MAX;
	int64_t t52 = 743329375162779LL;

	t52 = (x209&(x210%(x211|x212)));

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 15LLU;
	int16_t x214 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;
	volatile int16_t x216 = INT16_MIN;
	uint64_t t53 = 2186261887323767693LLU;

	t53 = (x213&(x214%(x215|x216)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	static int8_t x218 = INT8_MIN;
	volatile uint32_t x220 = UINT32_MAX;
	volatile int64_t t54 = -947LL;

	t54 = (x217&(x218%(x219|x220)));

	if (t54 != 4294967168LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	volatile uint16_t x222 = 3U;
	int32_t x223 = INT32_MIN;

	t55 = (x221&(x222%(x223|x224)));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 235U;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MIN;
	volatile int64_t t56 = 74299072LL;

	t56 = (x225&(x226%(x227|x228)));

	if (t56 != 234LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 6;
	static int32_t x230 = INT32_MAX;
	volatile int64_t x231 = INT64_MIN;
	static uint32_t x232 = UINT32_MAX;
	volatile int64_t t57 = -1923868225161264LL;

	t57 = (x229&(x230%(x231|x232)));

	if (t57 != 6LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -348220766306794273LL;
	uint32_t x235 = 122789670U;
	int64_t x236 = INT64_MIN;
	volatile int64_t t58 = 99956471903443LL;

	t58 = (x233&(x234%(x235|x236)));

	if (t58 != 1247LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MIN;
	uint64_t t59 = 3730337679936LLU;

	t59 = (x237&(x238%(x239|x240)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	uint32_t x243 = UINT32_MAX;
	uint32_t t60 = 62U;

	t60 = (x241&(x242%(x243|x244)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -1;
	int32_t x246 = INT32_MAX;
	volatile uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MAX;
	volatile uint32_t t61 = 8898U;

	t61 = (x245&(x246%(x247|x248)));

	if (t61 != 2147483647U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	static volatile uint8_t x250 = 2U;
	int64_t x251 = -3LL;
	int64_t x252 = -3332219LL;
	int64_t t62 = 11363552LL;

	t62 = (x249&(x250%(x251|x252)));

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -1;
	volatile int16_t x254 = INT16_MAX;
	uint8_t x256 = UINT8_MAX;
	static int32_t t63 = 4;

	t63 = (x253&(x254%(x255|x256)));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	int64_t x258 = INT64_MAX;
	int8_t x259 = 7;
	static uint64_t t64 = 951852670040LLU;

	t64 = (x257&(x258%(x259|x260)));

	if (t64 != 1014141293559618565LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -7;
	uint64_t x262 = UINT64_MAX;
	uint64_t x263 = 13602LLU;
	int32_t x264 = INT32_MIN;
	volatile uint64_t t65 = 15740579LLU;

	t65 = (x261&(x262%(x263|x264)));

	if (t65 != 2147470041LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -1;
	int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MAX;
	volatile int64_t t66 = -12843839857999987LL;

	t66 = (x265&(x266%(x267|x268)));

	if (t66 != 4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 30U;
	int8_t x271 = -1;
	int64_t x272 = -993LL;
	static int64_t t67 = 1424286585LL;

	t67 = (x269&(x270%(x271|x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 55045978945470644LL;
	static int32_t x274 = -928999053;
	static int16_t x275 = -1;
	static int64_t x276 = 0LL;

	t68 = (x273&(x274%(x275|x276)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -2312583856594LL;
	static volatile int16_t x278 = 1;
	volatile int16_t x279 = 0;
	int32_t x280 = INT32_MIN;
	int64_t t69 = 5253994464LL;

	t69 = (x277&(x278%(x279|x280)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;

	t70 = (x281&(x282%(x283|x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = 4181LLU;
	static int16_t x287 = 17;
	uint64_t x288 = 739563703LLU;
	volatile uint64_t t71 = 1398902527LLU;

	t71 = (x285&(x286%(x287|x288)));

	if (t71 != 4096LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = 258528LLU;
	uint16_t x291 = UINT16_MAX;
	int8_t x292 = INT8_MIN;
	static uint64_t t72 = 3145LLU;

	t72 = (x289&(x290%(x291|x292)));

	if (t72 != 448LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x295 = UINT16_MAX;
	int32_t x296 = -1258900;
	int64_t t73 = -106301489LL;

	t73 = (x293&(x294%(x295|x296)));

	if (t73 != -6LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 295124935912787055LL;
	static uint8_t x298 = 9U;
	static volatile uint64_t x299 = 351060545506729LLU;
	uint64_t t74 = 35639973313010949LLU;

	t74 = (x297&(x298%(x299|x300)));

	if (t74 != 9LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MAX;

	t75 = (x301&(x302%(x303|x304)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x305 = 118U;
	int8_t x306 = 1;
	static int32_t x307 = -3;
	uint8_t x308 = 2U;
	int32_t t76 = -3889;

	t76 = (x305&(x306%(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x310 = 14288156719907978LL;
	uint32_t x312 = UINT32_MAX;
	static volatile int64_t t77 = 1LL;

	t77 = (x309&(x310%(x311|x312)));

	if (t77 != 6489346LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = -1;
	static uint32_t x315 = 13342871U;
	int64_t x316 = -1LL;
	volatile uint64_t t78 = 378229033160736LLU;

	t78 = (x313&(x314%(x315|x316)));

	if (t78 != 57LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MAX;
	uint8_t x318 = 14U;
	int8_t x319 = -38;
	int16_t x320 = INT16_MIN;

	t79 = (x317&(x318%(x319|x320)));

	if (t79 != 14) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = 16124176753LL;
	int8_t x323 = 1;
	static int16_t x324 = -1795;
	int64_t t80 = -24933947658643LL;

	t80 = (x321&(x322%(x323|x324)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	static int32_t x326 = -1;
	int8_t x327 = 1;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -75969;

	t81 = (x325&(x326%(x327|x328)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	static int32_t x330 = 67833177;
	uint8_t x331 = UINT8_MAX;
	int32_t t82 = -21206832;

	t82 = (x329&(x330%(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -8413;
	uint16_t x335 = 3188U;
	int64_t x336 = -1LL;
	volatile int64_t t83 = 5341921LL;

	t83 = (x333&(x334%(x335|x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = UINT16_MAX;
	static int16_t x338 = INT16_MAX;
	uint32_t x339 = 1625667U;
	volatile int32_t x340 = 3214;
	uint32_t t84 = 206U;

	t84 = (x337&(x338%(x339|x340)));

	if (t84 != 32767U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MIN;
	uint64_t x343 = 1615LLU;
	int64_t x344 = INT64_MAX;

	t85 = (x341&(x342%(x343|x344)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MAX;
	uint64_t x346 = UINT64_MAX;
	volatile int32_t x347 = INT32_MIN;
	int32_t x348 = -781694;
	volatile uint64_t t86 = 941967306851882LLU;

	t86 = (x345&(x346%(x347|x348)));

	if (t86 != 125LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 3;
	volatile int16_t x350 = -2302;
	int8_t x351 = -3;
	int32_t x352 = -3294177;
	static int32_t t87 = -16482953;

	t87 = (x349&(x350%(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MIN;

	t88 = (x353&(x354%(x355|x356)));

	if (t88 != 208LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	static volatile uint8_t x358 = 1U;
	uint64_t x359 = 1LLU;
	int64_t x360 = -987LL;
	volatile uint64_t t89 = 436012229804LLU;

	t89 = (x357&(x358%(x359|x360)));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = -113;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t90 = 102655LLU;

	t90 = (x361&(x362%(x363|x364)));

	if (t90 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 15150103367874690LLU;
	uint32_t x366 = 357961458U;
	int16_t x367 = -22;
	uint64_t t91 = 10570927157991LLU;

	t91 = (x365&(x366%(x367|x368)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int8_t x370 = -35;
	static uint8_t x371 = 0U;
	int64_t x372 = INT64_MIN;
	int64_t t92 = 2052337778213653LL;

	t92 = (x369&(x370%(x371|x372)));

	if (t92 != -35LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = -1;
	int64_t x376 = -1LL;
	static volatile int64_t t93 = 639390LL;

	t93 = (x373&(x374%(x375|x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MIN;
	static int64_t x379 = -24453LL;

	t94 = (x377&(x378%(x379|x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 607677253U;
	int16_t x382 = INT16_MAX;
	int32_t x383 = 107883;
	int64_t x384 = 41332695886875LL;
	volatile int64_t t95 = -109688831082LL;

	t95 = (x381&(x382%(x383|x384)));

	if (t95 != 27461LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x385 = 1100;
	uint16_t x386 = 1U;
	static int32_t x387 = -1;

	t96 = (x385&(x386%(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -2;
	int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	volatile int32_t t97 = -1888423;

	t97 = (x389&(x390%(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 0U;
	static volatile int8_t x394 = INT8_MAX;
	static int64_t x395 = INT64_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int64_t t98 = 107818707114584LL;

	t98 = (x393&(x394%(x395|x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x398 = -16377;
	static volatile int32_t x399 = INT32_MIN;
	uint64_t t99 = 1706722LLU;

	t99 = (x397&(x398%(x399|x400)));

	if (t99 != 18446744073709535239LLU) { NG(); } else { ; }
	
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

