#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
uint8_t x11 = 53U;
int64_t t2 = INT64_MIN;
int8_t x29 = INT8_MAX;
volatile int8_t x30 = INT8_MAX;
int64_t x33 = -329571331473599LL;
int64_t x40 = INT64_MIN;
static int16_t x44 = INT16_MIN;
int16_t x49 = INT16_MIN;
volatile uint16_t x57 = 3U;
int64_t t16 = -6324719339762970LL;
int8_t x69 = 6;
uint8_t x81 = 1U;
static int8_t x84 = INT8_MAX;
int32_t t20 = -137391205;
int8_t x90 = -1;
static int64_t t22 = -3165290068LL;
uint64_t x95 = 2371811140759521LLU;
static int8_t x96 = -39;
static int32_t t23 = INT32_MIN;
static int64_t x103 = INT64_MIN;
static uint32_t t27 = 12563336U;
volatile uint32_t t28 = 735U;
static int8_t x119 = INT8_MIN;
int16_t x120 = INT16_MIN;
static int8_t x124 = INT8_MIN;
uint16_t x128 = 0U;
int32_t x130 = INT32_MIN;
int16_t x134 = INT16_MAX;
int64_t x142 = 0LL;
uint32_t x148 = 9590U;
uint64_t x149 = 610517LLU;
uint64_t x152 = UINT64_MAX;
int32_t x153 = -1426;
static int64_t x154 = 131141LL;
static uint16_t x162 = 6U;
int32_t x168 = -1;
uint64_t t41 = 14316LLU;
int32_t x170 = INT32_MIN;
static int32_t x175 = INT32_MAX;
uint8_t x176 = 105U;
int32_t x180 = INT32_MIN;
uint64_t t44 = 15029185281934425LLU;
static int64_t x188 = -1LL;
volatile int64_t t47 = INT64_MIN;
static int8_t x197 = -1;
int16_t x200 = INT16_MIN;
int64_t x201 = -1621506236660370LL;
volatile uint16_t x204 = UINT16_MAX;
int16_t x206 = INT16_MIN;
static uint64_t x209 = UINT64_MAX;
uint8_t x211 = UINT8_MAX;
uint64_t t52 = UINT64_MAX;
volatile int8_t x215 = -5;
volatile int32_t t56 = 61;
int8_t x233 = INT8_MIN;
uint16_t x241 = 4887U;
static uint8_t x244 = 1U;
volatile int8_t x247 = -51;
volatile int32_t t64 = 158;
volatile int16_t x261 = 0;
int32_t x265 = INT32_MIN;
int32_t x268 = INT32_MIN;
uint64_t x271 = 20909232001LLU;
volatile int32_t t69 = 1;
volatile int64_t x281 = INT64_MIN;
int32_t x282 = INT32_MIN;
static int16_t x285 = INT16_MIN;
int16_t x287 = -127;
volatile int64_t t72 = 105892499409035LL;
int64_t x295 = 1918LL;
volatile int32_t t74 = 1;
int32_t x302 = INT32_MAX;
uint64_t t75 = 584130LLU;
static uint64_t x312 = 2628695131202665871LLU;
int64_t x314 = INT64_MIN;
uint16_t x316 = 0U;
int32_t x318 = -1;
int32_t t79 = -454836455;
uint8_t x330 = UINT8_MAX;
int64_t x337 = -1LL;
int32_t x346 = INT32_MIN;
volatile int32_t x353 = INT32_MIN;
uint16_t x355 = 52U;
static int64_t x356 = INT64_MIN;
volatile uint8_t x357 = 0U;
volatile uint64_t x360 = 14206172074974090LLU;
int8_t x369 = INT8_MIN;
uint32_t x370 = 277U;
int8_t x372 = -1;
int16_t x374 = INT16_MIN;
static int16_t x375 = -5;
int8_t x378 = INT8_MIN;
static int16_t x380 = INT16_MIN;
static volatile int64_t t96 = 52033900396955LL;
int32_t x391 = INT32_MAX;
int8_t x396 = 44;
int64_t x397 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 12U;
	static uint64_t x3 = UINT64_MAX;
	static int64_t x4 = INT64_MIN;
	static int64_t t0 = 172471132025LL;

	t0 = (x1|(x2*(x3<x4)));

	if (t0 != 12LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	int8_t x7 = 30;
	static volatile int16_t x8 = -1864;
	volatile uint64_t t1 = 226093LLU;

	t1 = (x5|(x6*(x7<x8)));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	volatile int8_t x10 = INT8_MAX;
	static int64_t x12 = INT64_MIN;

	t2 = (x9|(x10*(x11<x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 11962U;
	volatile int32_t x14 = 23690166;
	static int64_t x15 = INT64_MAX;
	uint16_t x16 = 23U;
	int32_t t3 = 152054;

	t3 = (x13|(x14*(x15<x16)));

	if (t3 != 11962) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -1LL;
	static int8_t x19 = 24;
	static int32_t x20 = 11151;
	int64_t t4 = -52605281940721397LL;

	t4 = (x17|(x18*(x19<x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	uint16_t x22 = 28552U;
	volatile uint32_t x23 = 37885U;
	uint32_t x24 = 50382U;
	static int32_t t5 = 12;

	t5 = (x21|(x22*(x23<x24)));

	if (t5 != -4216) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int32_t x26 = 811156;
	uint8_t x27 = 90U;
	volatile int16_t x28 = INT16_MIN;
	int32_t t6 = -1;

	t6 = (x25|(x26*(x27<x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = 5775U;
	int64_t x32 = 1835LL;
	static volatile int32_t t7 = 53805;

	t7 = (x29|(x30*(x31<x32)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	static int8_t x35 = INT8_MIN;
	static int64_t x36 = 1372631607771767902LL;
	volatile int64_t t8 = -465672754748803450LL;

	t8 = (x33|(x34*(x35<x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -3030767485923399LL;
	volatile int8_t x38 = -1;
	volatile int32_t x39 = -194458;
	static int64_t t9 = -15604LL;

	t9 = (x37|(x38*(x39<x40)));

	if (t9 != -3030767485923399LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 27106U;
	static int64_t x42 = -12735LL;
	static uint16_t x43 = UINT16_MAX;
	int64_t t10 = -14LL;

	t10 = (x41|(x42*(x43<x44)));

	if (t10 != 27106LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static uint64_t x46 = 2026276639220LLU;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	uint64_t t11 = 280227960LLU;

	t11 = (x45|(x46*(x47<x48)));

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x50 = INT8_MIN;
	static int64_t x51 = INT64_MAX;
	int16_t x52 = -5755;
	volatile int32_t t12 = -2;

	t12 = (x49|(x50*(x51<x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	volatile uint16_t x55 = 28776U;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -23;

	t13 = (x53|(x54*(x55<x56)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	static uint16_t x59 = 1814U;
	int8_t x60 = INT8_MIN;
	uint64_t t14 = 25862814503482810LLU;

	t14 = (x57|(x58*(x59<x60)));

	if (t14 != 3LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -12LL;
	int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = UINT16_MAX;
	int64_t t15 = -261249572920LL;

	t15 = (x61|(x62*(x63<x64)));

	if (t15 != -12LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int32_t x66 = INT32_MAX;
	int32_t x67 = -1748916;
	static int64_t x68 = -4734231LL;

	t16 = (x65|(x66*(x67<x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -17;
	uint32_t x71 = 26283U;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = 1;

	t17 = (x69|(x70*(x71<x72)));

	if (t17 != -17) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 3U;
	int32_t x74 = 211016;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 569U;
	int32_t t18 = 0;

	t18 = (x73|(x74*(x75<x76)));

	if (t18 != 211019) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x77 = 0U;
	uint64_t x78 = UINT64_MAX;
	static int8_t x79 = INT8_MIN;
	volatile int64_t x80 = 119629988368LL;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (x77|(x78*(x79<x80)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -211135;
	int16_t x83 = INT16_MAX;

	t20 = (x81|(x82*(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	volatile int32_t x86 = 700;
	static int16_t x87 = 50;
	uint32_t x88 = UINT32_MAX;
	uint32_t t21 = UINT32_MAX;

	t21 = (x85|(x86*(x87<x88)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 239140261619156234LL;
	static int8_t x91 = -1;
	static int8_t x92 = 33;

	t22 = (x89|(x90*(x91<x92)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	static int32_t x94 = INT32_MIN;

	t23 = (x93|(x94*(x95<x96)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	volatile uint32_t x98 = UINT32_MAX;
	int8_t x99 = 0;
	volatile uint64_t x100 = 7694LLU;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x97|(x98*(x99<x100)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1539821893U;
	static int64_t x102 = -1LL;
	volatile int16_t x104 = INT16_MIN;
	int64_t t25 = -707782034841LL;

	t25 = (x101|(x102*(x103<x104)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = -28;
	static int64_t x107 = INT64_MIN;
	uint16_t x108 = 194U;
	volatile int32_t t26 = 86410;

	t26 = (x105|(x106*(x107<x108)));

	if (t26 != -28) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 14U;
	volatile uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;

	t27 = (x109|(x110*(x111<x112)));

	if (t27 != 14U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	volatile uint32_t x114 = 158U;
	volatile int8_t x115 = INT8_MIN;
	static volatile int32_t x116 = INT32_MIN;

	t28 = (x113|(x114*(x115<x116)));

	if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	static uint8_t x118 = UINT8_MAX;
	static int64_t t29 = INT64_MAX;

	t29 = (x117|(x118*(x119<x120)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -22;
	volatile int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	volatile int32_t t30 = 109461539;

	t30 = (x121|(x122*(x123<x124)));

	if (t30 != -22) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -45;
	static int16_t x126 = 5279;
	uint64_t x127 = UINT64_MAX;
	int32_t t31 = -44;

	t31 = (x125|(x126*(x127<x128)));

	if (t31 != -45) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 1LLU;
	static volatile int16_t x131 = 106;
	static uint32_t x132 = 631997U;
	static uint64_t t32 = 1LLU;

	t32 = (x129|(x130*(x131<x132)));

	if (t32 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int32_t x135 = -1;
	int64_t x136 = -1LL;
	volatile int32_t t33 = INT32_MIN;

	t33 = (x133|(x134*(x135<x136)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 5819U;
	uint16_t x138 = UINT16_MAX;
	volatile uint16_t x139 = 26U;
	int16_t x140 = 61;
	int32_t t34 = 1655;

	t34 = (x137|(x138*(x139<x140)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 266541686289990818LLU;
	static uint64_t x143 = UINT64_MAX;
	static int32_t x144 = -1;
	volatile uint64_t t35 = 127854244778LLU;

	t35 = (x141|(x142*(x143<x144)));

	if (t35 != 266541686289990818LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MAX;
	int64_t x147 = -1LL;
	int32_t t36 = 1;

	t36 = (x145|(x146*(x147<x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 8U;
	int8_t x151 = INT8_MAX;
	uint64_t t37 = 374654223LLU;

	t37 = (x149|(x150*(x151<x152)));

	if (t37 != 610525LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x155 = INT8_MIN;
	int32_t x156 = 80598113;
	volatile int64_t t38 = -123911LL;

	t38 = (x153|(x154*(x155<x156)));

	if (t38 != -1425LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 9U;
	int32_t x158 = -1;
	static volatile int64_t x159 = INT64_MIN;
	uint64_t x160 = 53012711219847LLU;
	volatile uint32_t t39 = 60940U;

	t39 = (x157|(x158*(x159<x160)));

	if (t39 != 9U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	uint16_t x163 = 22007U;
	int8_t x164 = INT8_MAX;
	int32_t t40 = -277623413;

	t40 = (x161|(x162*(x163<x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 15830LLU;
	int32_t x166 = 28358;
	volatile int64_t x167 = -150014238588LL;

	t41 = (x165|(x166*(x167<x168)));

	if (t41 != 32726LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 18U;
	int8_t x171 = 1;
	volatile int8_t x172 = INT8_MIN;
	static int32_t t42 = 181;

	t42 = (x169|(x170*(x171<x172)));

	if (t42 != 18) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 13;
	int32_t x174 = -333;
	volatile int32_t t43 = 1716;

	t43 = (x173|(x174*(x175<x176)));

	if (t43 != 13) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 1LLU;
	volatile uint32_t x178 = 21U;
	volatile int64_t x179 = INT64_MIN;

	t44 = (x177|(x178*(x179<x180)));

	if (t44 != 21LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MIN;
	uint8_t x182 = 10U;
	int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -5156;

	t45 = (x181|(x182*(x183<x184)));

	if (t45 != -118) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = UINT8_MAX;
	volatile uint64_t x187 = 15566LLU;
	uint64_t t46 = UINT64_MAX;

	t46 = (x185|(x186*(x187<x188)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	static uint32_t x190 = UINT32_MAX;
	volatile uint16_t x191 = 479U;
	int16_t x192 = INT16_MIN;

	t47 = (x189|(x190*(x191<x192)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	static int64_t x194 = -53389531607160LL;
	volatile int32_t x195 = INT32_MIN;
	volatile int8_t x196 = INT8_MIN;
	int64_t t48 = 4040795316784680LL;

	t48 = (x193|(x194*(x195<x196)));

	if (t48 != -28792LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = 14802153;
	int64_t x199 = -374504496695407794LL;
	int32_t t49 = -1;

	t49 = (x197|(x198*(x199<x200)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MAX;
	uint64_t t50 = 576LLU;

	t50 = (x201|(x202*(x203<x204)));

	if (t50 != 18445122567472891246LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = 1;
	static int16_t x207 = -1;
	static int16_t x208 = INT16_MIN;
	int32_t t51 = 3719;

	t51 = (x205|(x206*(x207<x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x210 = INT16_MAX;
	static uint8_t x212 = 104U;

	t52 = (x209|(x210*(x211<x212)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -6358318LL;
	volatile uint32_t x214 = 1304401373U;
	int32_t x216 = INT32_MAX;
	int64_t t53 = -214578188LL;

	t53 = (x213|(x214*(x215<x216)));

	if (t53 != -4194337LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	static uint64_t x218 = 1590928338247007LLU;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MAX;
	uint64_t t54 = 14990884663355LLU;

	t54 = (x217|(x218*(x219<x220)));

	if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = INT64_MAX;
	int16_t x223 = INT16_MIN;
	static volatile int64_t x224 = 3135192448998913LL;
	volatile int64_t t55 = -663961578767783LL;

	t55 = (x221|(x222*(x223<x224)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	volatile int8_t x226 = INT8_MIN;
	int64_t x227 = 2574LL;
	uint16_t x228 = 719U;

	t56 = (x225|(x226*(x227<x228)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 44;
	uint16_t x230 = 16U;
	int64_t x231 = -1LL;
	uint32_t x232 = 5626U;
	volatile int32_t t57 = -153;

	t57 = (x229|(x230*(x231<x232)));

	if (t57 != 60) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = 64147897U;
	uint64_t x235 = 3598126928880054LLU;
	volatile int16_t x236 = INT16_MIN;
	uint32_t t58 = 2U;

	t58 = (x233|(x234*(x235<x236)));

	if (t58 != 4294967225U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 221U;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	int32_t x240 = -1;
	static int64_t t59 = -1120014595947766834LL;

	t59 = (x237|(x238*(x239<x240)));

	if (t59 != -9223372036854775587LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = UINT16_MAX;
	static uint32_t x243 = 53161072U;
	int32_t t60 = 35;

	t60 = (x241|(x242*(x243<x244)));

	if (t60 != 4887) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int8_t x246 = -1;
	volatile int32_t x248 = -27426409;
	static int64_t t61 = 33284LL;

	t61 = (x245|(x246*(x247<x248)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = -14;
	int8_t x251 = INT8_MAX;
	uint64_t x252 = 1081LLU;
	static volatile int32_t t62 = -12;

	t62 = (x249|(x250*(x251<x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = -1;
	int64_t x255 = -303LL;
	volatile int32_t x256 = 9887179;
	volatile int32_t t63 = 342;

	t63 = (x253|(x254*(x255<x256)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 15;
	static int32_t x258 = -1;
	volatile uint8_t x259 = 2U;
	int64_t x260 = -1LL;

	t64 = (x257|(x258*(x259<x260)));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x262 = 15896LLU;
	volatile int8_t x263 = INT8_MIN;
	int64_t x264 = -70LL;
	volatile uint64_t t65 = 43934100LLU;

	t65 = (x261|(x262*(x263<x264)));

	if (t65 != 15896LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 1U;
	int32_t x267 = -145;
	static volatile int32_t t66 = INT32_MIN;

	t66 = (x265|(x266*(x267<x268)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	volatile int8_t x270 = 54;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -1;

	t67 = (x269|(x270*(x271<x272)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 28;
	static int8_t x274 = INT8_MIN;
	uint64_t x275 = 229360433950LLU;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 961;

	t68 = (x273|(x274*(x275<x276)));

	if (t68 != -100) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = -714;
	int8_t x278 = INT8_MIN;
	uint8_t x279 = UINT8_MAX;
	volatile uint64_t x280 = UINT64_MAX;

	t69 = (x277|(x278*(x279<x280)));

	if (t69 != -74) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MAX;
	int64_t t70 = -896LL;

	t70 = (x281|(x282*(x283<x284)));

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x286 = 241U;
	static volatile int64_t x288 = INT64_MAX;
	int32_t t71 = -157647;

	t71 = (x285|(x286*(x287<x288)));

	if (t71 != -32527) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	static int64_t x290 = -11489549LL;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = -1;

	t72 = (x289|(x290*(x291<x292)));

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = INT16_MIN;
	volatile int32_t x294 = INT32_MIN;
	int64_t x296 = -12707459107158171LL;
	int32_t t73 = -16097;

	t73 = (x293|(x294*(x295<x296)));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x297 = -1;
	static int8_t x298 = INT8_MIN;
	volatile int8_t x299 = -1;
	volatile uint32_t x300 = 425101U;

	t74 = (x297|(x298*(x299<x300)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 1LLU;
	int32_t x303 = -1;
	volatile uint32_t x304 = 3U;

	t75 = (x301|(x302*(x303<x304)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	static int16_t x306 = INT16_MAX;
	volatile int64_t x307 = INT64_MIN;
	volatile int8_t x308 = -1;
	static int32_t t76 = 2151728;

	t76 = (x305|(x306*(x307<x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = UINT8_MAX;
	static int32_t x311 = 1;
	static volatile int32_t t77 = -11424557;

	t77 = (x309|(x310*(x311<x312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 25300760LL;
	uint32_t x315 = UINT32_MAX;
	int64_t t78 = 1768LL;

	t78 = (x313|(x314*(x315<x316)));

	if (t78 != 25300760LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 0;
	int32_t x319 = 334832645;
	int16_t x320 = 1;

	t79 = (x317|(x318*(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	volatile int32_t x324 = INT32_MAX;
	int32_t t80 = INT32_MIN;

	t80 = (x321|(x322*(x323<x324)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 132LLU;
	int8_t x326 = 1;
	int16_t x327 = -410;
	uint64_t x328 = UINT64_MAX;
	static volatile uint64_t t81 = 6024014774241501539LLU;

	t81 = (x325|(x326*(x327<x328)));

	if (t81 != 133LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	uint32_t x331 = 110066U;
	volatile int16_t x332 = -1;
	int32_t t82 = 1;

	t82 = (x329|(x330*(x331<x332)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 420512331593872682LL;
	static int8_t x334 = -1;
	static int64_t x335 = INT64_MIN;
	int16_t x336 = 3191;
	volatile int64_t t83 = 249053797639128302LL;

	t83 = (x333|(x334*(x335<x336)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = 1182U;
	int16_t x339 = 0;
	int32_t x340 = INT32_MIN;
	volatile int64_t t84 = -17927956262209985LL;

	t84 = (x337|(x338*(x339<x340)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	uint16_t x342 = UINT16_MAX;
	static uint64_t x343 = 64351977885LLU;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x341|(x342*(x343<x344)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 49U;
	uint32_t x347 = 499U;
	static volatile int8_t x348 = 55;
	static volatile int32_t t86 = 253;

	t86 = (x345|(x346*(x347<x348)));

	if (t86 != 49) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = 4U;
	static int8_t x350 = INT8_MIN;
	uint16_t x351 = 497U;
	int64_t x352 = -1LL;
	int32_t t87 = 120665254;

	t87 = (x349|(x350*(x351<x352)));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = -1;
	int32_t t88 = INT32_MIN;

	t88 = (x353|(x354*(x355<x356)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	int32_t t89 = 19206;

	t89 = (x357|(x358*(x359<x360)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = 1;
	uint8_t x363 = UINT8_MAX;
	static int64_t x364 = 28305418LL;
	volatile int32_t t90 = -4520;

	t90 = (x361|(x362*(x363<x364)));

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = UINT8_MAX;
	static uint8_t x366 = 123U;
	volatile uint16_t x367 = UINT16_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t91 = 1736429;

	t91 = (x365|(x366*(x367<x368)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x371 = -70330730757849854LL;
	uint32_t t92 = 361239151U;

	t92 = (x369|(x370*(x371<x372)));

	if (t92 != 4294967189U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	static int16_t x376 = INT16_MAX;
	int32_t t93 = 252906413;

	t93 = (x373|(x374*(x375<x376)));

	if (t93 != -32513) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -201;
	int16_t x379 = 2282;
	static volatile int32_t t94 = 868;

	t94 = (x377|(x378*(x379<x380)));

	if (t94 != -201) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = UINT8_MAX;
	uint32_t x383 = 212696U;
	static uint64_t x384 = UINT64_MAX;
	static int32_t t95 = 520942678;

	t95 = (x381|(x382*(x383<x384)));

	if (t95 != -32513) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 179U;
	int64_t x386 = INT64_MAX;
	uint32_t x387 = UINT32_MAX;
	uint64_t x388 = 43618LLU;

	t96 = (x385|(x386*(x387<x388)));

	if (t96 != 179LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = 0;
	int64_t x390 = INT64_MIN;
	int8_t x392 = 14;
	volatile int64_t t97 = -10330476358194LL;

	t97 = (x389|(x390*(x391<x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	static int64_t x394 = INT64_MIN;
	static int32_t x395 = -124222160;
	volatile int64_t t98 = -94730875655251LL;

	t98 = (x393|(x394*(x395<x396)));

	if (t98 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = 6413380880030131620LLU;
	int8_t x399 = INT8_MAX;
	int64_t x400 = -1LL;
	volatile uint64_t t99 = 11401641568133LLU;

	t99 = (x397|(x398*(x399<x400)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

