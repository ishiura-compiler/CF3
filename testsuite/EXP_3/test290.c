#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 493741;
static int64_t x17 = INT64_MAX;
static int8_t x22 = INT8_MIN;
int16_t x23 = INT16_MIN;
static uint8_t x24 = 2U;
int32_t t4 = -978000;
uint8_t x30 = 7U;
static volatile int8_t x33 = INT8_MIN;
int16_t x35 = -1;
volatile int64_t t7 = -1448802841221LL;
int64_t x38 = INT64_MAX;
int32_t x40 = -1;
int32_t x47 = INT32_MIN;
volatile int16_t x54 = INT16_MAX;
uint16_t x57 = 5U;
int16_t x61 = -1;
static uint16_t x62 = 2847U;
int32_t x64 = INT32_MIN;
static int64_t t14 = -29196566897354953LL;
int16_t x65 = INT16_MIN;
int64_t x71 = INT64_MAX;
uint32_t t17 = 1279667U;
int32_t x86 = INT32_MIN;
static int32_t x87 = INT32_MAX;
volatile uint32_t x92 = 34U;
static int64_t x94 = 1LL;
uint8_t x95 = 123U;
int64_t x99 = -28063486915485LL;
volatile int16_t x125 = INT16_MIN;
uint16_t x135 = 13769U;
static int16_t x137 = -1;
volatile int64_t x139 = INT64_MIN;
volatile int64_t t30 = 23361035LL;
int64_t x141 = 8906LL;
volatile int8_t x142 = 0;
int16_t x155 = INT16_MIN;
static volatile uint64_t t33 = 20LLU;
int16_t x161 = -1;
static int16_t x164 = -1;
uint32_t x165 = UINT32_MAX;
volatile int32_t t36 = 815179;
int32_t x175 = 9999;
int8_t x187 = INT8_MIN;
uint8_t x191 = UINT8_MAX;
int32_t x192 = -66;
uint16_t x194 = UINT16_MAX;
int64_t x200 = -1LL;
int16_t x209 = INT16_MIN;
volatile int64_t x222 = -1LL;
static uint16_t x225 = 4043U;
int8_t x230 = INT8_MIN;
volatile int32_t t49 = -22968558;
volatile int32_t x237 = 10;
uint64_t x252 = UINT64_MAX;
int32_t t54 = 2344316;
int32_t x260 = INT32_MAX;
uint32_t x266 = UINT32_MAX;
volatile uint64_t x267 = 367651621558932LLU;
uint8_t x270 = 77U;
int32_t t57 = 3498156;
volatile int32_t x273 = -160660768;
static int64_t x277 = 708649455480657903LL;
volatile int16_t x289 = INT16_MIN;
uint64_t x293 = 121729997859LLU;
uint32_t x301 = 10U;
int16_t x305 = 3908;
volatile int64_t t65 = 1555043LL;
volatile int8_t x310 = INT8_MIN;
static uint64_t x312 = 10731320342523LLU;
volatile int64_t x314 = INT64_MAX;
int8_t x316 = 3;
int8_t x320 = 0;
volatile uint32_t t69 = 34063896U;
static uint64_t x330 = UINT64_MAX;
volatile uint64_t t71 = 239LLU;
static uint8_t x338 = 105U;
int16_t x340 = -81;
static uint32_t t73 = 2U;
int32_t t74 = -338;
volatile int16_t x345 = INT16_MIN;
static int64_t x352 = -544177430LL;
volatile int64_t t76 = 123768191677LL;
int8_t x364 = 55;
uint64_t t80 = 22607382435LLU;
int8_t x373 = 1;
volatile uint16_t x377 = 37U;
int16_t x384 = 247;
int64_t t83 = 5133LL;
uint8_t x385 = 12U;
int64_t x388 = INT64_MIN;
uint16_t x395 = 6U;
int16_t x396 = INT16_MIN;
int16_t x403 = INT16_MIN;
static int32_t t87 = -377;
volatile int64_t x409 = -1LL;
uint8_t x412 = 6U;
volatile int32_t t90 = 0;
int64_t x419 = -1013LL;
uint32_t x427 = UINT32_MAX;
volatile uint64_t t92 = 15507637LLU;
int32_t x429 = -1885047;
int64_t x432 = -1LL;
int64_t t93 = -1081522689469605427LL;
int64_t x437 = -16040225402917LL;
int8_t x440 = -1;
volatile uint8_t x443 = 18U;
int8_t x447 = -45;
volatile int32_t t97 = -31;
uint32_t x452 = 388U;
uint32_t t99 = 353U;


void f0(void) {
	static uint64_t x5 = 24757543038402734LLU;
	int8_t x6 = INT8_MAX;
	uint16_t x7 = 15203U;
	uint16_t x8 = 426U;

	t0 = ((x5<=x6)/(x7-x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	int64_t x11 = INT64_MIN;
	volatile int32_t x12 = INT32_MIN;
	volatile int64_t t1 = 128621551147LL;

	t1 = ((x9<=x10)/(x11-x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 204548562U;
	int64_t x14 = 32LL;
	int32_t x15 = INT32_MAX;
	int64_t x16 = -13284851252314189LL;
	volatile int64_t t2 = -1LL;

	t2 = ((x13<=x14)/(x15-x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x18 = 27588U;
	int64_t x19 = 165LL;
	int8_t x20 = 13;
	volatile int64_t t3 = -725382482042LL;

	t3 = ((x17<=x18)/(x19-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;

	t4 = ((x21<=x22)/(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static int16_t x26 = -1;
	static uint64_t x27 = 119940089LLU;
	int16_t x28 = -7;
	volatile uint64_t t5 = 120750LLU;

	t5 = ((x25<=x26)/(x27-x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int16_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t6 = 5788393;

	t6 = ((x29<=x30)/(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = 48455329LL;
	static int64_t x36 = 3556122876LL;

	t7 = ((x33<=x34)/(x35-x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	volatile int64_t x39 = -115678894623LL;
	int64_t t8 = 919929LL;

	t8 = ((x37<=x38)/(x39-x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 96773U;
	volatile int64_t x42 = INT64_MIN;
	uint16_t x43 = 6891U;
	volatile uint64_t x44 = 2613829312397LLU;
	uint64_t t9 = 1737161234LLU;

	t9 = ((x41<=x42)/(x43-x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	volatile uint64_t x46 = 7LLU;
	int64_t x48 = INT64_MIN;
	int64_t t10 = 2123615016LL;

	t10 = ((x45<=x46)/(x47-x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	volatile int64_t x50 = INT64_MIN;
	uint64_t x51 = 532419LLU;
	volatile int8_t x52 = 0;
	uint64_t t11 = 392760732482086066LLU;

	t11 = ((x49<=x50)/(x51-x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -11;
	volatile uint64_t x55 = 13094282852072LLU;
	int8_t x56 = 1;
	volatile uint64_t t12 = 263439726407LLU;

	t12 = ((x53<=x54)/(x55-x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t13 = 18673169U;

	t13 = ((x57<=x58)/(x59-x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x63 = 703806914774LL;

	t14 = ((x61<=x62)/(x63-x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = 1U;
	uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 17408U;
	uint64_t t15 = 9825032702073435LLU;

	t15 = ((x65<=x66)/(x67-x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MAX;
	uint8_t x72 = UINT8_MAX;
	volatile int64_t t16 = 622018416LL;

	t16 = ((x69<=x70)/(x71-x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	volatile uint16_t x82 = 46U;
	static uint32_t x83 = UINT32_MAX;
	volatile int16_t x84 = 1;

	t17 = ((x81<=x82)/(x83-x84));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 4649846382546954LLU;
	int32_t x88 = 29004;
	int32_t t18 = -111;

	t18 = ((x85<=x86)/(x87-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = -1;
	uint8_t x91 = 65U;
	uint32_t t19 = 15U;

	t19 = ((x89<=x90)/(x91-x92));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = 1;
	uint8_t x96 = 24U;
	volatile int32_t t20 = -1;

	t20 = ((x93<=x94)/(x95-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int64_t x98 = INT64_MAX;
	uint64_t x100 = 76350638LLU;
	volatile uint64_t t21 = 22171011072LLU;

	t21 = ((x97<=x98)/(x99-x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	static uint32_t x102 = 487U;
	int8_t x103 = INT8_MAX;
	int16_t x104 = -9958;
	static volatile int32_t t22 = -504577;

	t22 = ((x101<=x102)/(x103-x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 1781092134U;
	uint16_t x106 = 8U;
	volatile uint8_t x107 = 0U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t23 = 1;

	t23 = ((x105<=x106)/(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x109 = -1LL;
	int32_t x110 = INT32_MIN;
	uint16_t x111 = 3U;
	int32_t x112 = -125494;
	int32_t t24 = -371978620;

	t24 = ((x109<=x110)/(x111-x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = 1628873888065535460LL;
	int32_t x116 = INT32_MIN;
	volatile int64_t t25 = -17946804648LL;

	t25 = ((x113<=x114)/(x115-x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 20;
	uint16_t x118 = UINT16_MAX;
	int32_t x119 = 1831;
	static volatile uint16_t x120 = 1U;
	volatile int32_t t26 = -1;

	t26 = ((x117<=x118)/(x119-x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x126 = 7;
	volatile int32_t x127 = -1;
	uint64_t x128 = 2514640266068LLU;
	uint64_t t27 = 362149562LLU;

	t27 = ((x125<=x126)/(x127-x128));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	volatile uint8_t x130 = 1U;
	volatile int64_t x131 = 1LL;
	int16_t x132 = 10983;
	int64_t t28 = 1170LL;

	t28 = ((x129<=x130)/(x131-x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 184U;
	volatile int8_t x134 = INT8_MIN;
	int16_t x136 = INT16_MAX;
	volatile int32_t t29 = -973675435;

	t29 = ((x133<=x134)/(x135-x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x138 = 58263759006137LLU;
	int8_t x140 = -42;

	t30 = ((x137<=x138)/(x139-x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x143 = INT8_MIN;
	int16_t x144 = -1;
	int32_t t31 = 141;

	t31 = ((x141<=x142)/(x143-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = UINT8_MAX;
	static int64_t x150 = INT64_MAX;
	static int16_t x151 = INT16_MIN;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t32 = 3922913LLU;

	t32 = ((x149<=x150)/(x151-x152));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -68516227510LL;
	int32_t x154 = INT32_MAX;
	uint64_t x156 = 65831304359706LLU;

	t33 = ((x153<=x154)/(x155-x156));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x162 = -1;
	static volatile int16_t x163 = INT16_MIN;
	volatile int32_t t34 = -167487832;

	t34 = ((x161<=x162)/(x163-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = -1;
	int16_t x168 = INT16_MIN;
	volatile int32_t t35 = 7407;

	t35 = ((x165<=x166)/(x167-x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x169 = 635LLU;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -760531;
	volatile int8_t x172 = INT8_MAX;

	t36 = ((x169<=x170)/(x171-x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = 7LL;
	int32_t x176 = -1;
	int32_t t37 = 824;

	t37 = ((x173<=x174)/(x175-x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = 37U;
	int32_t x182 = -27;
	volatile uint16_t x183 = 2U;
	uint32_t x184 = 215132552U;
	static uint32_t t38 = 1287U;

	t38 = ((x181<=x182)/(x183-x184));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = -16030702;
	int16_t x186 = INT16_MIN;
	uint64_t x188 = 306053058644LLU;
	uint64_t t39 = 1774971819929261219LLU;

	t39 = ((x185<=x186)/(x187-x188));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = INT32_MAX;
	int64_t x190 = -202LL;
	volatile int32_t t40 = -51210;

	t40 = ((x189<=x190)/(x191-x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MAX;
	uint16_t x195 = 2U;
	int8_t x196 = INT8_MIN;
	int32_t t41 = 967;

	t41 = ((x193<=x194)/(x195-x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = -1LL;
	uint32_t x198 = 3890U;
	static int16_t x199 = 5;
	int64_t t42 = -45003859LL;

	t42 = ((x197<=x198)/(x199-x200));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x201 = 4;
	int8_t x202 = INT8_MIN;
	int64_t x203 = -1LL;
	volatile int8_t x204 = INT8_MIN;
	volatile int64_t t43 = 10019909060585LL;

	t43 = ((x201<=x202)/(x203-x204));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = 1LL;
	uint32_t x206 = 6368659U;
	volatile int8_t x207 = INT8_MIN;
	static int32_t x208 = INT32_MIN;
	static volatile int32_t t44 = 114800;

	t44 = ((x205<=x206)/(x207-x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x210 = -1;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MAX;
	int32_t t45 = -108419;

	t45 = ((x209<=x210)/(x211-x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x217 = 9U;
	int64_t x218 = INT64_MAX;
	uint32_t x219 = UINT32_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile uint32_t t46 = 8126U;

	t46 = ((x217<=x218)/(x219-x220));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x221 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	int8_t x224 = -14;
	int64_t t47 = 79230890117556878LL;

	t47 = ((x221<=x222)/(x223-x224));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x226 = INT32_MIN;
	static int64_t x227 = INT64_MIN;
	static int8_t x228 = INT8_MIN;
	int64_t t48 = -6LL;

	t48 = ((x225<=x226)/(x227-x228));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x229 = 187;
	int8_t x231 = INT8_MIN;
	int16_t x232 = -1;

	t49 = ((x229<=x230)/(x231-x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x238 = INT16_MIN;
	int8_t x239 = 13;
	volatile int8_t x240 = INT8_MIN;
	static int32_t t50 = -38081765;

	t50 = ((x237<=x238)/(x239-x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x241 = INT16_MAX;
	uint16_t x242 = 16U;
	int16_t x243 = -100;
	static int16_t x244 = -6155;
	static volatile int32_t t51 = 2;

	t51 = ((x241<=x242)/(x243-x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 738325211660LLU;
	int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = 1U;
	int32_t x248 = INT32_MAX;
	uint32_t t52 = 892153U;

	t52 = ((x245<=x246)/(x247-x248));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MIN;
	uint32_t x250 = 15170U;
	int16_t x251 = INT16_MAX;
	uint64_t t53 = 352685176LLU;

	t53 = ((x249<=x250)/(x251-x252));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = -1;
	int32_t x254 = INT32_MIN;
	int32_t x255 = 32820853;
	static int8_t x256 = INT8_MAX;

	t54 = ((x253<=x254)/(x255-x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MAX;
	static volatile uint64_t x259 = UINT64_MAX;
	volatile uint64_t t55 = 31618548784124LLU;

	t55 = ((x257<=x258)/(x259-x260));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x265 = 168673917;
	static uint32_t x268 = 1369402654U;
	uint64_t t56 = 2987656544525116LLU;

	t56 = ((x265<=x266)/(x267-x268));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	static uint8_t x272 = UINT8_MAX;

	t57 = ((x269<=x270)/(x271-x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x274 = -1LL;
	uint64_t x275 = UINT64_MAX;
	int8_t x276 = -12;
	volatile uint64_t t58 = 1LLU;

	t58 = ((x273<=x274)/(x275-x276));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x278 = 3LLU;
	int8_t x279 = INT8_MIN;
	int32_t x280 = 1;
	volatile int32_t t59 = 422550891;

	t59 = ((x277<=x278)/(x279-x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 1;
	int16_t x282 = -2;
	volatile uint8_t x283 = 0U;
	int16_t x284 = -4;
	int32_t t60 = 6484;

	t60 = ((x281<=x282)/(x283-x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = -14002275557LL;
	volatile int64_t x286 = -1LL;
	static int64_t x287 = 2745LL;
	uint64_t x288 = 18595029429881LLU;
	static uint64_t t61 = 1370671594673LLU;

	t61 = ((x285<=x286)/(x287-x288));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x290 = 14533412438360304LL;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = -13;
	int32_t t62 = 8;

	t62 = ((x289<=x290)/(x291-x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x294 = 58;
	uint16_t x295 = 1U;
	uint64_t x296 = 251427144077721LLU;
	uint64_t t63 = 14LLU;

	t63 = ((x293<=x294)/(x295-x296));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x302 = INT32_MIN;
	volatile uint64_t x303 = 27245LLU;
	uint32_t x304 = 883U;
	volatile uint64_t t64 = 590769875854217693LLU;

	t64 = ((x301<=x302)/(x303-x304));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x306 = -1;
	static uint16_t x307 = 5984U;
	int64_t x308 = INT64_MAX;

	t65 = ((x305<=x306)/(x307-x308));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int64_t x311 = 17978224428428LL;
	uint64_t t66 = 94426950LLU;

	t66 = ((x309<=x310)/(x311-x312));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x313 = INT64_MAX;
	int32_t x315 = -2;
	int32_t t67 = 0;

	t67 = ((x313<=x314)/(x315-x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = -536748;
	uint16_t x318 = 3U;
	uint32_t x319 = 1898594016U;
	static uint32_t t68 = 1371682135U;

	t68 = ((x317<=x318)/(x319-x320));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x321 = UINT8_MAX;
	uint8_t x322 = UINT8_MAX;
	static volatile uint32_t x323 = 8U;
	volatile uint8_t x324 = 3U;

	t69 = ((x321<=x322)/(x323-x324));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x325 = 8U;
	int32_t x326 = INT32_MAX;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -10081;
	volatile int32_t t70 = 91;

	t70 = ((x325<=x326)/(x327-x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MAX;
	uint64_t x331 = 250703649742084LLU;
	int16_t x332 = INT16_MIN;

	t71 = ((x329<=x330)/(x331-x332));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x333 = INT8_MIN;
	int16_t x334 = -1;
	static int8_t x335 = INT8_MAX;
	volatile uint8_t x336 = 0U;
	volatile int32_t t72 = -10042857;

	t72 = ((x333<=x334)/(x335-x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = -1;
	static uint32_t x339 = 3880604U;

	t73 = ((x337<=x338)/(x339-x340));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -11;
	int64_t x342 = 137LL;
	int8_t x343 = INT8_MAX;
	int8_t x344 = -1;

	t74 = ((x341<=x342)/(x343-x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x346 = -9789;
	uint64_t x347 = UINT64_MAX;
	uint16_t x348 = 1U;
	volatile uint64_t t75 = 9787356LLU;

	t75 = ((x345<=x346)/(x347-x348));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x349 = INT32_MIN;
	volatile int8_t x350 = -57;
	int8_t x351 = -1;

	t76 = ((x349<=x350)/(x351-x352));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x353 = 267206;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -6754198LL;
	int8_t x356 = -1;
	int64_t t77 = -323LL;

	t77 = ((x353<=x354)/(x355-x356));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x357 = INT8_MIN;
	volatile uint8_t x358 = 35U;
	static int32_t x359 = -8;
	volatile int8_t x360 = INT8_MIN;
	int32_t t78 = -112856518;

	t78 = ((x357<=x358)/(x359-x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x361 = 3780;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 12U;
	static volatile int32_t t79 = -67944;

	t79 = ((x361<=x362)/(x363-x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x369 = -1LL;
	uint8_t x370 = 18U;
	int16_t x371 = INT16_MAX;
	uint64_t x372 = 4274649241LLU;

	t80 = ((x369<=x370)/(x371-x372));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x374 = INT64_MIN;
	uint16_t x375 = 3865U;
	int16_t x376 = INT16_MAX;
	volatile int32_t t81 = 8783126;

	t81 = ((x373<=x374)/(x375-x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x378 = -1;
	int32_t x379 = -1;
	int8_t x380 = -46;
	int32_t t82 = -1;

	t82 = ((x377<=x378)/(x379-x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = UINT8_MAX;
	int64_t x383 = -4882900733565LL;

	t83 = ((x381<=x382)/(x383-x384));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x386 = INT8_MIN;
	int32_t x387 = -17;
	static volatile int64_t t84 = -13820LL;

	t84 = ((x385<=x386)/(x387-x388));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = 1U;
	volatile int32_t t85 = 29;

	t85 = ((x393<=x394)/(x395-x396));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x397 = -1498512895LL;
	int32_t x398 = -388466312;
	uint32_t x399 = 1U;
	volatile int8_t x400 = 8;
	uint32_t t86 = 0U;

	t86 = ((x397<=x398)/(x399-x400));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x401 = INT32_MIN;
	int64_t x402 = 62244135269242LL;
	static uint16_t x404 = 811U;

	t87 = ((x401<=x402)/(x403-x404));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x405 = 638767098386437LLU;
	uint64_t x406 = 2264196LLU;
	int8_t x407 = INT8_MAX;
	static uint16_t x408 = UINT16_MAX;
	int32_t t88 = 128750;

	t88 = ((x405<=x406)/(x407-x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = 7;
	volatile int32_t t89 = 138712;

	t89 = ((x409<=x410)/(x411-x412));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = INT32_MIN;
	uint8_t x414 = UINT8_MAX;
	volatile int16_t x415 = INT16_MIN;
	static int8_t x416 = -22;

	t90 = ((x413<=x414)/(x415-x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	static int32_t x420 = INT32_MIN;
	volatile int64_t t91 = 111899472568530239LL;

	t91 = ((x417<=x418)/(x419-x420));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MAX;
	uint64_t x428 = UINT64_MAX;

	t92 = ((x425<=x426)/(x427-x428));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x430 = -1;
	int16_t x431 = INT16_MIN;

	t93 = ((x429<=x430)/(x431-x432));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MAX;
	int8_t x434 = INT8_MIN;
	int16_t x435 = -4;
	int8_t x436 = INT8_MIN;
	volatile int32_t t94 = 709986529;

	t94 = ((x433<=x434)/(x435-x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MIN;
	static int32_t t95 = 297;

	t95 = ((x437<=x438)/(x439-x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x441 = 1008729001855693622LLU;
	int8_t x442 = 1;
	static uint64_t x444 = 487535786736LLU;
	volatile uint64_t t96 = 401361594804145LLU;

	t96 = ((x441<=x442)/(x443-x444));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = 2274;
	volatile int32_t x446 = INT32_MIN;
	int32_t x448 = INT32_MIN;

	t97 = ((x445<=x446)/(x447-x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x449 = UINT32_MAX;
	volatile int32_t x450 = 133710300;
	int64_t x451 = INT64_MAX;
	static int64_t t98 = 3259262577831937371LL;

	t98 = ((x449<=x450)/(x451-x452));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = 7;
	int32_t x454 = -1;
	uint8_t x455 = 21U;
	static uint32_t x456 = UINT32_MAX;

	t99 = ((x453<=x454)/(x455-x456));

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

