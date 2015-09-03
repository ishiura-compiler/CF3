#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 28U;
int64_t x6 = 1LL;
int64_t x10 = -1LL;
volatile int32_t t4 = 654091555;
static uint32_t x25 = 158U;
volatile int32_t t5 = -2;
volatile uint64_t x34 = 956790022404703LLU;
int64_t x36 = INT64_MIN;
volatile int32_t t8 = -52;
uint8_t x41 = UINT8_MAX;
int16_t x43 = INT16_MAX;
static int8_t x61 = 1;
uint64_t x63 = 29447426036LLU;
volatile uint64_t x64 = 446465819LLU;
int32_t x68 = -1;
int8_t x71 = INT8_MIN;
int8_t x73 = 0;
volatile int64_t x76 = -1LL;
uint32_t x77 = UINT32_MAX;
int64_t x79 = 1820197183762873LL;
volatile int32_t t18 = 1;
volatile uint16_t x85 = 1420U;
int32_t x86 = -1;
uint64_t x87 = UINT64_MAX;
int16_t x89 = 4;
int32_t x96 = INT32_MAX;
int32_t t24 = -940402;
int64_t x109 = 0LL;
uint64_t x113 = 4LLU;
int64_t x118 = INT64_MAX;
int32_t t28 = 1347;
volatile int8_t x129 = -5;
volatile int8_t x136 = INT8_MIN;
int32_t t32 = 30;
static int64_t x165 = -43060920638LL;
int64_t x171 = -1LL;
int32_t t40 = 32223216;
volatile uint64_t x175 = UINT64_MAX;
static int32_t x177 = -1;
int16_t x180 = -1;
volatile int32_t t45 = -1896074;
int8_t x196 = INT8_MIN;
int8_t x207 = -1;
static int32_t x216 = INT32_MIN;
int32_t x217 = INT32_MIN;
int16_t x220 = INT16_MIN;
uint16_t x223 = 8441U;
int8_t x227 = INT8_MIN;
volatile int64_t x229 = 167LL;
int8_t x235 = -2;
volatile int8_t x236 = 7;
uint16_t x237 = UINT16_MAX;
int64_t x238 = INT64_MAX;
uint32_t x240 = 1058970823U;
int32_t t55 = -9563448;
static volatile int32_t t58 = 1508;
int32_t t59 = 12520;
int64_t x262 = -1LL;
static volatile int32_t t61 = -1419;
uint16_t x269 = UINT16_MAX;
int32_t t64 = 7935;
static int32_t t65 = 49;
int16_t x282 = -1;
int16_t x283 = -1;
int8_t x286 = INT8_MIN;
volatile int32_t t67 = -118879;
volatile int16_t x298 = INT16_MIN;
uint32_t x299 = 2U;
volatile uint16_t x300 = 7955U;
uint8_t x310 = 1U;
static int64_t x315 = -1LL;
int32_t t74 = 884461613;
int16_t x319 = INT16_MAX;
volatile int32_t t75 = 13;
int8_t x326 = INT8_MIN;
uint32_t x330 = UINT32_MAX;
static uint8_t x331 = 23U;
static volatile int32_t t78 = 1;
int32_t t79 = 2164;
static volatile int8_t x337 = INT8_MAX;
static volatile uint8_t x339 = 17U;
int8_t x341 = -1;
int8_t x347 = INT8_MAX;
int32_t t82 = -5875;
static uint64_t x349 = UINT64_MAX;
uint32_t x353 = 5087U;
int8_t x358 = INT8_MIN;
int8_t x359 = -1;
int8_t x368 = INT8_MIN;
uint16_t x371 = 92U;
volatile uint16_t x376 = 73U;
int32_t t90 = 104;
int32_t x384 = -457707;
volatile int32_t t91 = 19;
int16_t x386 = -1;
uint64_t x392 = UINT64_MAX;
uint16_t x394 = 6U;
int64_t x396 = -44593781LL;
uint16_t x400 = UINT16_MAX;
int32_t t95 = 151123;
int64_t x402 = 1678629760183540LL;
int8_t x415 = INT8_MIN;


void f0(void) {
	volatile int16_t x2 = -1;
	uint64_t x3 = 3743301LLU;
	int32_t x4 = -1;
	volatile int32_t t0 = 0;

	t0 = (x1==((x2%x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = 237584U;
	int32_t t1 = -871056;

	t1 = (x5==((x6%x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 27566U;
	int16_t x11 = -1;
	uint16_t x12 = 12U;
	int32_t t2 = 81291380;

	t2 = (x9==((x10%x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	volatile uint8_t x14 = 11U;
	volatile uint8_t x15 = 80U;
	int16_t x16 = INT16_MAX;
	int32_t t3 = -77280094;

	t3 = (x13==((x14%x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 15;
	static uint8_t x18 = UINT8_MAX;
	int32_t x19 = -21686004;
	static int64_t x20 = INT64_MIN;

	t4 = (x17==((x18%x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -683325512;
	uint64_t x27 = 3956830696LLU;
	uint64_t x28 = UINT64_MAX;

	t5 = (x25==((x26%x27)|x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	uint16_t x31 = 38U;
	int16_t x32 = -36;
	int32_t t6 = 4374;

	t6 = (x29==((x30%x31)|x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	int16_t x35 = -1;
	static volatile int32_t t7 = -451056;

	t7 = (x33==((x34%x35)|x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -470;
	volatile uint32_t x38 = 33U;
	static int16_t x39 = INT16_MIN;
	int8_t x40 = 7;

	t8 = (x37==((x38%x39)|x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = INT64_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t9 = -50152;

	t9 = (x41==((x42%x43)|x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = 11U;
	int8_t x47 = 1;
	volatile int64_t x48 = 307LL;
	volatile int32_t t10 = -57553460;

	t10 = (x45==((x46%x47)|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = -1;
	int8_t x54 = INT8_MIN;
	int8_t x55 = 55;
	static int16_t x56 = INT16_MIN;
	static volatile int32_t t11 = -7;

	t11 = (x53==((x54%x55)|x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	uint16_t x58 = 5U;
	static int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MIN;
	int32_t t12 = 2530;

	t12 = (x57==((x58%x59)|x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = -1LL;
	static int32_t t13 = -6;

	t13 = (x61==((x62%x63)|x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MAX;
	int16_t x66 = 1;
	static volatile uint32_t x67 = 482649U;
	volatile int32_t t14 = 1;

	t14 = (x65==((x66%x67)|x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = -1;
	static int8_t x72 = -1;
	volatile int32_t t15 = 4;

	t15 = (x69==((x70%x71)|x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MIN;
	int16_t x75 = -1;
	static volatile int32_t t16 = 171;

	t16 = (x73==((x74%x75)|x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x78 = 15852LLU;
	int64_t x80 = -1LL;
	int32_t t17 = -2379275;

	t17 = (x77==((x78%x79)|x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	static uint64_t x82 = UINT64_MAX;
	volatile uint64_t x83 = UINT64_MAX;
	uint16_t x84 = 1U;

	t18 = (x81==((x82%x83)|x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x88 = INT16_MAX;
	int32_t t19 = 1;

	t19 = (x85==((x86%x87)|x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MAX;
	static int32_t x92 = -1;
	static volatile int32_t t20 = -7;

	t20 = (x89==((x90%x91)|x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 54U;
	volatile int64_t x94 = 442484513LL;
	int8_t x95 = -32;
	static int32_t t21 = 389;

	t21 = (x93==((x94%x95)|x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	static volatile int64_t x98 = INT64_MIN;
	volatile int16_t x99 = -1;
	static int16_t x100 = -1;
	volatile int32_t t22 = 57446;

	t22 = (x97==((x98%x99)|x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	static int8_t x102 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t23 = -1;

	t23 = (x101==((x102%x103)|x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	volatile uint32_t x106 = UINT32_MAX;
	static int16_t x107 = INT16_MIN;
	int8_t x108 = -1;

	t24 = (x105==((x106%x107)|x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x110 = UINT64_MAX;
	uint16_t x111 = 1U;
	uint8_t x112 = UINT8_MAX;
	static int32_t t25 = -3;

	t25 = (x109==((x110%x111)|x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x114 = UINT32_MAX;
	static volatile int64_t x115 = -1040180838612432360LL;
	uint8_t x116 = 1U;
	static int32_t t26 = -501369791;

	t26 = (x113==((x114%x115)|x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x117 = 1811789983U;
	int8_t x119 = -23;
	static uint64_t x120 = 67LLU;
	int32_t t27 = -31179517;

	t27 = (x117==((x118%x119)|x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 44020LLU;
	static volatile uint16_t x122 = 1060U;
	volatile uint32_t x123 = 1028304U;
	static int32_t x124 = INT32_MIN;

	t28 = (x121==((x122%x123)|x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x125 = UINT32_MAX;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = UINT16_MAX;
	uint64_t x128 = 386891552491633LLU;
	volatile int32_t t29 = -1;

	t29 = (x125==((x126%x127)|x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = 1;
	volatile int32_t x131 = INT32_MIN;
	int32_t x132 = -497789;
	volatile int32_t t30 = 59;

	t30 = (x129==((x130%x131)|x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = INT8_MIN;
	static volatile int64_t x134 = 738LL;
	static int32_t x135 = -13;
	int32_t t31 = -1;

	t31 = (x133==((x134%x135)|x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	uint16_t x138 = 3985U;
	int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;

	t32 = (x137==((x138%x139)|x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	static int16_t x143 = INT16_MAX;
	uint8_t x144 = 13U;
	int32_t t33 = 140893003;

	t33 = (x141==((x142%x143)|x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 4679U;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = -161999341118109LL;
	int16_t x148 = -1;
	volatile int32_t t34 = 48;

	t34 = (x145==((x146%x147)|x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = -1;
	int64_t x150 = INT64_MAX;
	volatile int64_t x151 = -1LL;
	uint32_t x152 = 112U;
	volatile int32_t t35 = 793738376;

	t35 = (x149==((x150%x151)|x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = 25U;
	static int16_t x154 = 231;
	static volatile int32_t x155 = INT32_MAX;
	uint8_t x156 = 124U;
	static volatile int32_t t36 = -224;

	t36 = (x153==((x154%x155)|x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -18;
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = UINT8_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t37 = 484;

	t37 = (x157==((x158%x159)|x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = -1LL;
	int32_t x162 = -3673367;
	int32_t x163 = 13;
	volatile int64_t x164 = INT64_MAX;
	int32_t t38 = -3801567;

	t38 = (x161==((x162%x163)|x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = INT8_MIN;
	uint8_t x167 = 1U;
	uint16_t x168 = 3U;
	volatile int32_t t39 = 21;

	t39 = (x165==((x166%x167)|x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MIN;
	int64_t x172 = INT64_MAX;

	t40 = (x169==((x170%x171)|x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = UINT32_MAX;
	volatile uint64_t x174 = 1843167494LLU;
	volatile int32_t x176 = INT32_MAX;
	static volatile int32_t t41 = 878787534;

	t41 = (x173==((x174%x175)|x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x178 = 18U;
	int32_t x179 = INT32_MIN;
	static int32_t t42 = 34958107;

	t42 = (x177==((x178%x179)|x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = INT32_MAX;
	int8_t x183 = -1;
	int8_t x184 = 2;
	int32_t t43 = 130179905;

	t43 = (x181==((x182%x183)|x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 9U;
	uint64_t x186 = UINT64_MAX;
	uint8_t x187 = 1U;
	int16_t x188 = 19;
	volatile int32_t t44 = 9;

	t44 = (x185==((x186%x187)|x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x189 = 687U;
	int32_t x190 = INT32_MAX;
	int64_t x191 = -1LL;
	uint8_t x192 = UINT8_MAX;

	t45 = (x189==((x190%x191)|x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x193 = INT64_MAX;
	static uint8_t x194 = 0U;
	uint16_t x195 = UINT16_MAX;
	int32_t t46 = -22022;

	t46 = (x193==((x194%x195)|x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = 837436;
	static int32_t x206 = -14037099;
	int16_t x208 = INT16_MAX;
	static int32_t t47 = 92139;

	t47 = (x205==((x206%x207)|x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -501990682319227737LL;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 2087403LLU;
	static uint8_t x212 = UINT8_MAX;
	static int32_t t48 = 10757468;

	t48 = (x209==((x210%x211)|x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 195884U;
	int64_t x214 = 1045641780083686LL;
	int64_t x215 = INT64_MAX;
	int32_t t49 = 1;

	t49 = (x213==((x214%x215)|x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x218 = 0U;
	static int16_t x219 = -6325;
	int32_t t50 = -1466808;

	t50 = (x217==((x218%x219)|x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	uint16_t x222 = UINT16_MAX;
	int8_t x224 = 37;
	int32_t t51 = 2042697;

	t51 = (x221==((x222%x223)|x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 31448093LLU;
	uint64_t x226 = UINT64_MAX;
	int16_t x228 = INT16_MIN;
	static int32_t t52 = 505497007;

	t52 = (x225==((x226%x227)|x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x230 = -31864LL;
	int32_t x231 = -1;
	volatile int64_t x232 = -1LL;
	int32_t t53 = 231;

	t53 = (x229==((x230%x231)|x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -1;
	int16_t x234 = -32;
	static volatile int32_t t54 = -67;

	t54 = (x233==((x234%x235)|x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x239 = INT32_MIN;

	t55 = (x237==((x238%x239)|x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MAX;
	int8_t x244 = -1;
	int32_t t56 = -283637155;

	t56 = (x241==((x242%x243)|x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = 7;
	int32_t x246 = INT32_MIN;
	volatile uint8_t x247 = UINT8_MAX;
	uint8_t x248 = 53U;
	int32_t t57 = -358497;

	t57 = (x245==((x246%x247)|x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -6634;
	int32_t x250 = INT32_MIN;
	static int8_t x251 = INT8_MAX;
	volatile int16_t x252 = -1;

	t58 = (x249==((x250%x251)|x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -75454042;
	uint16_t x254 = UINT16_MAX;
	int64_t x255 = -1LL;
	static int16_t x256 = 3176;

	t59 = (x253==((x254%x255)|x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = 482;
	int32_t x258 = -1;
	uint8_t x259 = 30U;
	static volatile int8_t x260 = 3;
	volatile int32_t t60 = -12519829;

	t60 = (x257==((x258%x259)|x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x261 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	volatile int64_t x264 = -805LL;

	t61 = (x261==((x262%x263)|x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x266 = 130U;
	static uint32_t x267 = UINT32_MAX;
	uint64_t x268 = UINT64_MAX;
	int32_t t62 = -16102;

	t62 = (x265==((x266%x267)|x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x270 = INT8_MIN;
	static uint8_t x271 = 21U;
	int32_t x272 = 2395396;
	int32_t t63 = 22;

	t63 = (x269==((x270%x271)|x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	int16_t x276 = 14846;

	t64 = (x273==((x274%x275)|x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = 14128;
	static int32_t x279 = -988285;
	int64_t x280 = -1LL;

	t65 = (x277==((x278%x279)|x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x281 = 17552LLU;
	int64_t x284 = INT64_MIN;
	volatile int32_t t66 = 2;

	t66 = (x281==((x282%x283)|x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	int8_t x287 = -1;
	volatile uint64_t x288 = 11336LLU;

	t67 = (x285==((x286%x287)|x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x290 = 34781992LLU;
	int64_t x291 = INT64_MIN;
	int8_t x292 = -1;
	int32_t t68 = 27048;

	t68 = (x289==((x290%x291)|x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -4;
	volatile int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	uint16_t x296 = UINT16_MAX;
	static volatile int32_t t69 = -172;

	t69 = (x293==((x294%x295)|x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 897LLU;
	volatile int32_t t70 = 0;

	t70 = (x297==((x298%x299)|x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = -1;
	volatile int16_t x302 = -1;
	static int64_t x303 = -1LL;
	static int32_t x304 = -218088;
	int32_t t71 = -361;

	t71 = (x301==((x302%x303)|x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = -1;
	int8_t x307 = INT8_MAX;
	int32_t x308 = -1;
	int32_t t72 = 1;

	t72 = (x305==((x306%x307)|x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 1U;
	int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t73 = 2;

	t73 = (x309==((x310%x311)|x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = 3380U;
	static uint32_t x316 = UINT32_MAX;

	t74 = (x313==((x314%x315)|x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x317 = INT8_MIN;
	int32_t x318 = 25980;
	int8_t x320 = INT8_MIN;

	t75 = (x317==((x318%x319)|x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MAX;
	uint64_t x322 = 562529LLU;
	int64_t x323 = -99766676353185969LL;
	int16_t x324 = 13;
	static int32_t t76 = -68857501;

	t76 = (x321==((x322%x323)|x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x325 = INT32_MAX;
	int64_t x327 = INT64_MAX;
	int32_t x328 = 48161;
	int32_t t77 = 15697457;

	t77 = (x325==((x326%x327)|x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	uint8_t x332 = 111U;

	t78 = (x329==((x330%x331)|x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 3110U;
	static int8_t x334 = INT8_MIN;
	volatile uint8_t x335 = 1U;
	int32_t x336 = INT32_MIN;

	t79 = (x333==((x334%x335)|x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x338 = 474LL;
	uint32_t x340 = 14661U;
	static volatile int32_t t80 = -5;

	t80 = (x337==((x338%x339)|x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x342 = 29U;
	uint8_t x343 = 13U;
	volatile int32_t x344 = INT32_MIN;
	static int32_t t81 = 281968067;

	t81 = (x341==((x342%x343)|x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = -1;
	volatile int64_t x346 = INT64_MAX;
	int32_t x348 = -2645103;

	t82 = (x345==((x346%x347)|x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x350 = 1U;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = UINT8_MAX;
	int32_t t83 = 20378;

	t83 = (x349==((x350%x351)|x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x354 = -1409502;
	static volatile uint64_t x355 = UINT64_MAX;
	int16_t x356 = -15;
	volatile int32_t t84 = 35117;

	t84 = (x353==((x354%x355)|x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x357 = UINT16_MAX;
	uint64_t x360 = 16794497LLU;
	int32_t t85 = 2;

	t85 = (x357==((x358%x359)|x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x361 = 135312355809869LL;
	int64_t x362 = 369079648568047LL;
	int8_t x363 = -1;
	volatile uint16_t x364 = 739U;
	static volatile int32_t t86 = 1187871;

	t86 = (x361==((x362%x363)|x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x365 = -1;
	int8_t x366 = -10;
	static volatile uint8_t x367 = 31U;
	int32_t t87 = 14901;

	t87 = (x365==((x366%x367)|x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x369 = 1U;
	int16_t x370 = 1705;
	int16_t x372 = -6429;
	volatile int32_t t88 = -8816;

	t88 = (x369==((x370%x371)|x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x373 = 10943U;
	static volatile int16_t x374 = 5;
	int16_t x375 = 9;
	static volatile int32_t t89 = -400;

	t89 = (x373==((x374%x375)|x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x377 = INT8_MAX;
	uint8_t x378 = 6U;
	volatile uint64_t x379 = UINT64_MAX;
	uint16_t x380 = 46U;

	t90 = (x377==((x378%x379)|x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -1;
	static int64_t x382 = -1LL;
	static uint8_t x383 = 1U;

	t91 = (x381==((x382%x383)|x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = -1LL;
	static int32_t x387 = INT32_MIN;
	static uint8_t x388 = UINT8_MAX;
	static volatile int32_t t92 = 6;

	t92 = (x385==((x386%x387)|x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = 1U;
	static int32_t x390 = 874704933;
	static int8_t x391 = -2;
	static int32_t t93 = -3369;

	t93 = (x389==((x390%x391)|x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x393 = 19110;
	volatile uint32_t x395 = UINT32_MAX;
	int32_t t94 = 1;

	t94 = (x393==((x394%x395)|x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x397 = 0U;
	static uint64_t x398 = UINT64_MAX;
	static int32_t x399 = -4555370;

	t95 = (x397==((x398%x399)|x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	int64_t x403 = -97LL;
	static int8_t x404 = INT8_MAX;
	volatile int32_t t96 = 21778760;

	t96 = (x401==((x402%x403)|x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x405 = 14639U;
	static uint64_t x406 = 547LLU;
	volatile uint32_t x407 = 12U;
	volatile int16_t x408 = INT16_MIN;
	int32_t t97 = -15405279;

	t97 = (x405==((x406%x407)|x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = 25;
	static int32_t x410 = -446233442;
	volatile int8_t x411 = 1;
	volatile int8_t x412 = INT8_MAX;
	volatile int32_t t98 = 707;

	t98 = (x409==((x410%x411)|x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x413 = 31306046930LLU;
	int8_t x414 = INT8_MIN;
	int16_t x416 = INT16_MIN;
	int32_t t99 = 364242524;

	t99 = (x413==((x414%x415)|x416));

	if (t99 != 0) { NG(); } else { ; }
	
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

