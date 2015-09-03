#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
int32_t x2 = 2;
int32_t t0 = 21;
volatile uint8_t x10 = 9U;
uint16_t x11 = UINT16_MAX;
int32_t t2 = -1;
static int64_t x17 = INT64_MAX;
int64_t x23 = -103994389425523LL;
volatile int64_t x25 = 405524825996LL;
uint32_t x30 = 268U;
int32_t x37 = -1;
int16_t x40 = INT16_MIN;
int32_t t9 = 22843;
int32_t t10 = -1;
int32_t x49 = INT32_MIN;
int8_t x63 = INT8_MAX;
int32_t t15 = 554111080;
static volatile int32_t x73 = INT32_MIN;
int32_t x77 = INT32_MAX;
int64_t x78 = 6286781705563715LL;
int16_t x81 = -1625;
uint16_t x83 = 488U;
int16_t x88 = -1;
volatile int32_t t21 = 23;
static int8_t x97 = INT8_MAX;
static uint8_t x102 = UINT8_MAX;
uint32_t x103 = 2061038081U;
static int8_t x105 = INT8_MAX;
int16_t x109 = INT16_MAX;
uint32_t x112 = 3504U;
int64_t x117 = INT64_MIN;
static int16_t x121 = -1;
static int32_t x139 = -22396559;
uint64_t x144 = 2318646397LLU;
int16_t x152 = -4;
int16_t x157 = INT16_MAX;
volatile int64_t x161 = -1LL;
uint32_t x163 = 50572U;
static int16_t x165 = 5323;
int32_t x169 = 0;
uint8_t x173 = 7U;
int32_t x176 = -147238;
static volatile int32_t t42 = 753;
uint8_t x177 = UINT8_MAX;
int16_t x185 = INT16_MIN;
volatile int32_t t46 = 609409015;
uint8_t x199 = 23U;
int16_t x205 = 122;
int32_t t50 = 484455316;
int8_t x209 = 57;
int8_t x211 = INT8_MAX;
volatile int8_t x217 = -1;
int32_t t53 = -1441856;
uint8_t x237 = UINT8_MAX;
int8_t x246 = INT8_MIN;
static int32_t t59 = -1;
static int32_t t60 = -890435217;
int16_t x253 = INT16_MIN;
int8_t x254 = INT8_MAX;
static int32_t t61 = 1;
uint32_t x263 = 108628U;
static int32_t x267 = INT32_MIN;
int16_t x279 = INT16_MIN;
volatile int32_t t70 = -132843;
static int16_t x295 = INT16_MIN;
int32_t t71 = -262605686;
int32_t x305 = 86524;
static int16_t x312 = INT16_MAX;
volatile int32_t t75 = -133656;
int16_t x315 = 3;
int64_t x325 = INT64_MIN;
volatile int32_t x329 = INT32_MAX;
int16_t x330 = -2024;
int32_t t82 = 17776701;
int16_t x341 = 0;
int32_t t84 = -765;
volatile int8_t x353 = -1;
static volatile int16_t x354 = 0;
int32_t t86 = -22;
static int8_t x373 = INT8_MIN;
int16_t x381 = INT16_MIN;
uint8_t x382 = 1U;
volatile uint32_t x384 = 122710U;
static int8_t x393 = INT8_MAX;
volatile int64_t x400 = -1LL;
volatile int32_t t96 = 1154;
int32_t x401 = -55;
int16_t x403 = 46;
volatile int32_t t97 = -219;
static uint64_t x410 = 5591727LLU;
int32_t x411 = -6;
int32_t t99 = -9596;


void f0(void) {
	uint32_t x3 = 1738U;
	volatile int16_t x4 = INT16_MIN;

	t0 = (x1<((x2%x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 2930894;
	volatile int16_t x6 = -1;
	uint32_t x7 = 20U;
	uint16_t x8 = 21017U;
	int32_t t1 = 1317;

	t1 = (x5<((x6%x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	volatile uint32_t x12 = 9U;

	t2 = (x9<((x10%x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static volatile int32_t x14 = -1;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -1;
	static int32_t t3 = 1;

	t3 = (x13<((x14%x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int64_t x19 = -1LL;
	volatile int16_t x20 = -11;
	volatile int32_t t4 = -11;

	t4 = (x17<((x18%x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 13U;
	uint16_t x22 = UINT16_MAX;
	uint64_t x24 = 1602LLU;
	static int32_t t5 = 223;

	t5 = (x21<((x22%x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MAX;
	static int32_t x27 = -1;
	static volatile int16_t x28 = -3;
	int32_t t6 = -1016697;

	t6 = (x25<((x26%x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 4929U;
	volatile int32_t x31 = INT32_MIN;
	uint64_t x32 = 4166349LLU;
	volatile int32_t t7 = 708;

	t7 = (x29<((x30%x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1910U;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	int16_t x36 = 6;
	static int32_t t8 = 10;

	t8 = (x33<((x34%x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = 4;
	int8_t x39 = -11;

	t9 = (x37<((x38%x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 50U;
	uint16_t x42 = UINT16_MAX;
	uint64_t x43 = UINT64_MAX;
	uint64_t x44 = UINT64_MAX;

	t10 = (x41<((x42%x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static int64_t x46 = INT64_MIN;
	volatile int16_t x47 = INT16_MAX;
	uint32_t x48 = 61U;
	int32_t t11 = 248;

	t11 = (x45<((x46%x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MAX;
	uint32_t x51 = 21U;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = 24174900;

	t12 = (x49<((x50%x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = -1;
	static int64_t x55 = 192227384LL;
	int32_t x56 = -37186622;
	int32_t t13 = -22515;

	t13 = (x53<((x54%x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int16_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	volatile uint32_t x60 = UINT32_MAX;
	int32_t t14 = -53844;

	t14 = (x57<((x58%x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MAX;
	volatile int16_t x62 = -1162;
	int8_t x64 = 29;

	t15 = (x61<((x62%x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	int64_t x66 = -1LL;
	static int32_t x67 = INT32_MAX;
	static int64_t x68 = INT64_MIN;
	volatile int32_t t16 = 39;

	t16 = (x65<((x66%x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 507897;

	t17 = (x69<((x70%x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = 0LL;
	uint16_t x75 = UINT16_MAX;
	int16_t x76 = -1;
	int32_t t18 = 0;

	t18 = (x73<((x74%x75)|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x79 = 1721200U;
	static uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 732848;

	t19 = (x77<((x78%x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 85U;
	uint32_t x84 = 3U;
	volatile int32_t t20 = -7609584;

	t20 = (x81<((x82%x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile uint32_t x86 = 108137587U;
	int16_t x87 = -3;

	t21 = (x85<((x86%x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -2;
	int64_t x90 = INT64_MIN;
	static uint32_t x91 = 57U;
	int8_t x92 = 43;
	static volatile int32_t t22 = -750580;

	t22 = (x89<((x90%x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	uint64_t x94 = 200187121945360LLU;
	int8_t x95 = -3;
	int32_t x96 = 985569;
	volatile int32_t t23 = 9;

	t23 = (x93<((x94%x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = -15155;

	t24 = (x97<((x98%x99)|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	uint64_t x104 = 123948825437636LLU;
	volatile int32_t t25 = 17;

	t25 = (x101<((x102%x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = -48;
	volatile int64_t x107 = INT64_MIN;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = -163721880;

	t26 = (x105<((x106%x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = INT32_MIN;
	uint8_t x111 = 1U;
	static int32_t t27 = 475258391;

	t27 = (x109<((x110%x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	volatile uint16_t x114 = UINT16_MAX;
	volatile int32_t x115 = INT32_MIN;
	static uint16_t x116 = UINT16_MAX;
	static volatile int32_t t28 = -46462185;

	t28 = (x113<((x114%x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	uint16_t x119 = 2U;
	volatile int8_t x120 = -1;
	int32_t t29 = 1909032;

	t29 = (x117<((x118%x119)|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -2;
	int64_t x123 = INT64_MIN;
	static uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = 1108;

	t30 = (x121<((x122%x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 753U;
	volatile int16_t x126 = 495;
	uint16_t x127 = 15U;
	static int8_t x128 = -3;
	int32_t t31 = -29050560;

	t31 = (x125<((x126%x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int8_t x134 = INT8_MIN;
	static uint8_t x135 = 1U;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t32 = -15944808;

	t32 = (x133<((x134%x135)|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -321254587460484972LL;
	volatile int8_t x138 = INT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t33 = 94055731;

	t33 = (x137<((x138%x139)|x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = 62;
	uint8_t x142 = 0U;
	int32_t x143 = 5956;
	volatile int32_t t34 = 1028786416;

	t34 = (x141<((x142%x143)|x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	int64_t x147 = 1373502755806871LL;
	int16_t x148 = INT16_MIN;
	int32_t t35 = -63;

	t35 = (x145<((x146%x147)|x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = UINT16_MAX;
	uint8_t x150 = 5U;
	volatile int16_t x151 = 9;
	static volatile int32_t t36 = -142;

	t36 = (x149<((x150%x151)|x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -11164896;
	int16_t x154 = -1;
	static int32_t x155 = 59;
	volatile int16_t x156 = -2;
	int32_t t37 = -29;

	t37 = (x153<((x154%x155)|x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MAX;
	int16_t x160 = INT16_MIN;
	static int32_t t38 = 240458182;

	t38 = (x157<((x158%x159)|x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x162 = UINT8_MAX;
	uint64_t x164 = 1LLU;
	static int32_t t39 = 958116320;

	t39 = (x161<((x162%x163)|x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x166 = 1211LLU;
	volatile int8_t x167 = -1;
	static int64_t x168 = INT64_MIN;
	static volatile int32_t t40 = 311988;

	t40 = (x165<((x166%x167)|x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x170 = UINT64_MAX;
	uint8_t x171 = 16U;
	int64_t x172 = 1398619311837668447LL;
	static volatile int32_t t41 = -193;

	t41 = (x169<((x170%x171)|x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x174 = INT64_MAX;
	static int8_t x175 = -1;

	t42 = (x173<((x174%x175)|x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x178 = 0U;
	uint64_t x179 = 439020455LLU;
	uint16_t x180 = 10U;
	int32_t t43 = -1;

	t43 = (x177<((x178%x179)|x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x181 = -1;
	static volatile int32_t x182 = -13;
	int64_t x183 = -59LL;
	int32_t x184 = INT32_MAX;
	static int32_t t44 = -60;

	t44 = (x181<((x182%x183)|x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x186 = 1233907LL;
	uint32_t x187 = 28U;
	int16_t x188 = INT16_MAX;
	volatile int32_t t45 = 61717348;

	t45 = (x185<((x186%x187)|x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 303;
	uint64_t x190 = 3485LLU;
	int8_t x191 = INT8_MIN;
	int16_t x192 = -2;

	t46 = (x189<((x190%x191)|x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = -1;
	static int16_t x194 = -1399;
	uint32_t x195 = UINT32_MAX;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = 691724286;

	t47 = (x193<((x194%x195)|x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = INT16_MIN;
	volatile int16_t x198 = -2535;
	volatile uint8_t x200 = 1U;
	int32_t t48 = -246323;

	t48 = (x197<((x198%x199)|x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 43U;
	static int32_t x202 = INT32_MIN;
	static volatile uint16_t x203 = UINT16_MAX;
	uint8_t x204 = 17U;
	volatile int32_t t49 = 46317;

	t49 = (x201<((x202%x203)|x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = -13;
	static int16_t x207 = INT16_MIN;
	static int8_t x208 = INT8_MAX;

	t50 = (x205<((x206%x207)|x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x210 = INT16_MAX;
	static int8_t x212 = INT8_MIN;
	int32_t t51 = -213085348;

	t51 = (x209<((x210%x211)|x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	volatile int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	static int64_t x216 = -63316979LL;
	volatile int32_t t52 = -29924144;

	t52 = (x213<((x214%x215)|x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x218 = UINT16_MAX;
	uint64_t x219 = 113937LLU;
	uint8_t x220 = 2U;

	t53 = (x217<((x218%x219)|x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 0U;
	int8_t x222 = INT8_MAX;
	int64_t x223 = INT64_MIN;
	uint32_t x224 = UINT32_MAX;
	int32_t t54 = 152368;

	t54 = (x221<((x222%x223)|x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	static volatile int16_t x230 = INT16_MIN;
	uint32_t x231 = 1452116U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = 33;

	t55 = (x229<((x230%x231)|x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = 28161;
	volatile uint16_t x235 = 6892U;
	static uint16_t x236 = UINT16_MAX;
	int32_t t56 = -80226860;

	t56 = (x233<((x234%x235)|x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = 198U;
	int32_t t57 = 239;

	t57 = (x237<((x238%x239)|x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 2519542034011LLU;
	int32_t x242 = 3960;
	static int8_t x243 = 1;
	static int64_t x244 = INT64_MAX;
	static volatile int32_t t58 = 114;

	t58 = (x241<((x242%x243)|x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = 0;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MIN;

	t59 = (x245<((x246%x247)|x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	static uint32_t x251 = 985U;
	int64_t x252 = INT64_MIN;

	t60 = (x249<((x250%x251)|x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x255 = -1;
	uint64_t x256 = 658368001018746LLU;

	t61 = (x253<((x254%x255)|x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 44U;
	static int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	static int32_t x260 = -14836146;
	int32_t t62 = 1;

	t62 = (x257<((x258%x259)|x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x261 = INT32_MIN;
	static int16_t x262 = 1582;
	static uint8_t x264 = 3U;
	volatile int32_t t63 = -1036239164;

	t63 = (x261<((x262%x263)|x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	uint64_t x268 = 1902LLU;
	int32_t t64 = 6583;

	t64 = (x265<((x266%x267)|x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -2;
	int32_t x270 = -194697895;
	volatile int32_t x271 = -172454;
	uint32_t x272 = 1561114U;
	volatile int32_t t65 = 24718;

	t65 = (x269<((x270%x271)|x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x273 = 25572U;
	int8_t x274 = INT8_MIN;
	int32_t x275 = 16527826;
	int32_t x276 = -1;
	volatile int32_t t66 = 189131160;

	t66 = (x273<((x274%x275)|x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x277 = UINT32_MAX;
	static int64_t x278 = INT64_MIN;
	int16_t x280 = -1;
	static int32_t t67 = -24;

	t67 = (x277<((x278%x279)|x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = UINT8_MAX;
	int16_t x282 = INT16_MAX;
	volatile int64_t x283 = -1738747016345LL;
	int32_t x284 = 183046;
	static int32_t t68 = 62;

	t68 = (x281<((x282%x283)|x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = INT8_MIN;
	int64_t x286 = INT64_MIN;
	int64_t x287 = -1LL;
	static volatile int64_t x288 = INT64_MIN;
	int32_t t69 = -58;

	t69 = (x285<((x286%x287)|x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 17713487653285053LLU;
	int64_t x290 = INT64_MIN;
	volatile int8_t x291 = 8;
	uint32_t x292 = UINT32_MAX;

	t70 = (x289<((x290%x291)|x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	uint16_t x296 = UINT16_MAX;

	t71 = (x293<((x294%x295)|x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = INT32_MIN;
	volatile int32_t x298 = INT32_MIN;
	int32_t x299 = -1;
	uint64_t x300 = 14136LLU;
	static volatile int32_t t72 = 24819258;

	t72 = (x297<((x298%x299)|x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -1LL;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = 1;
	static int64_t x304 = INT64_MAX;
	int32_t t73 = -834;

	t73 = (x301<((x302%x303)|x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x306 = -1;
	int8_t x307 = INT8_MAX;
	int64_t x308 = -1LL;
	volatile int32_t t74 = 31;

	t74 = (x305<((x306%x307)|x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = INT64_MIN;
	int64_t x310 = -1LL;
	static volatile uint64_t x311 = UINT64_MAX;

	t75 = (x309<((x310%x311)|x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = 500U;
	int8_t x314 = INT8_MAX;
	int32_t x316 = -288742154;
	static int32_t t76 = -1;

	t76 = (x313<((x314%x315)|x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -1;
	int16_t x318 = 73;
	int32_t x319 = 29;
	int32_t x320 = INT32_MIN;
	int32_t t77 = -1;

	t77 = (x317<((x318%x319)|x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -1142086702LL;
	volatile uint8_t x322 = 0U;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	volatile int32_t t78 = 10049;

	t78 = (x321<((x322%x323)|x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x326 = INT32_MIN;
	static int32_t x327 = -1;
	int64_t x328 = INT64_MIN;
	volatile int32_t t79 = -26;

	t79 = (x325<((x326%x327)|x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x331 = 1;
	int32_t x332 = -161376;
	int32_t t80 = -97835885;

	t80 = (x329<((x330%x331)|x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = UINT64_MAX;
	volatile uint32_t x334 = 0U;
	static volatile uint64_t x335 = 10177186LLU;
	int64_t x336 = 21043053LL;
	volatile int32_t t81 = 727;

	t81 = (x333<((x334%x335)|x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 180101675U;
	int64_t x338 = INT64_MIN;
	volatile uint8_t x339 = 1U;
	static int16_t x340 = -6;

	t82 = (x337<((x338%x339)|x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x342 = -1LL;
	uint8_t x343 = 9U;
	int32_t x344 = 0;
	static int32_t t83 = 702313;

	t83 = (x341<((x342%x343)|x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	volatile int64_t x347 = -1LL;
	int32_t x348 = -24082;

	t84 = (x345<((x346%x347)|x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = -1;
	static int64_t x350 = INT64_MIN;
	static int16_t x351 = 1494;
	int16_t x352 = -1;
	static int32_t t85 = -11355;

	t85 = (x349<((x350%x351)|x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;

	t86 = (x353<((x354%x355)|x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = 107U;
	int16_t x362 = INT16_MIN;
	static uint8_t x363 = 13U;
	static uint32_t x364 = 3U;
	int32_t t87 = 32268015;

	t87 = (x361<((x362%x363)|x364));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x365 = -1LL;
	volatile int32_t x366 = INT32_MIN;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	volatile int32_t t88 = 177;

	t88 = (x365<((x366%x367)|x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MIN;
	volatile int64_t x371 = -1LL;
	int64_t x372 = INT64_MIN;
	int32_t t89 = 46798;

	t89 = (x369<((x370%x371)|x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x374 = INT16_MAX;
	int32_t x375 = INT32_MIN;
	int16_t x376 = -1;
	volatile int32_t t90 = 1335229;

	t90 = (x373<((x374%x375)|x376));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = -1LL;
	int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MIN;
	static int64_t x380 = -7429638312LL;
	int32_t t91 = -217389;

	t91 = (x377<((x378%x379)|x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x383 = INT64_MAX;
	volatile int32_t t92 = -11;

	t92 = (x381<((x382%x383)|x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = 0;
	volatile uint16_t x387 = 4015U;
	uint8_t x388 = 79U;
	volatile int32_t t93 = 675;

	t93 = (x385<((x386%x387)|x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x389 = 466784671165041967LLU;
	volatile int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	volatile int64_t x392 = INT64_MIN;
	int32_t t94 = 12;

	t94 = (x389<((x390%x391)|x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x394 = INT32_MIN;
	volatile int32_t x395 = 11810078;
	int16_t x396 = -1;
	int32_t t95 = 57508644;

	t95 = (x393<((x394%x395)|x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int16_t x398 = INT16_MIN;
	uint32_t x399 = 122740U;

	t96 = (x397<((x398%x399)|x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x402 = INT16_MAX;
	static volatile int32_t x404 = INT32_MAX;

	t97 = (x401<((x402%x403)|x404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = 0;
	int64_t x406 = INT64_MAX;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MAX;
	volatile int32_t t98 = -516068;

	t98 = (x405<((x406%x407)|x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = 59;
	uint32_t x412 = 16092U;

	t99 = (x409<((x410%x411)|x412));

	if (t99 != 1) { NG(); } else { ; }
	
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

