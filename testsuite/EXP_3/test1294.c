#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 213U;
uint16_t x7 = UINT16_MAX;
uint16_t x8 = UINT16_MAX;
volatile int64_t x11 = -1LL;
int32_t x13 = INT32_MIN;
volatile int16_t x16 = 8544;
int16_t x20 = 0;
volatile uint16_t x21 = UINT16_MAX;
uint32_t x22 = 2190317U;
static int16_t x26 = -1;
int8_t x27 = INT8_MIN;
uint16_t x29 = UINT16_MAX;
volatile int64_t x32 = INT64_MAX;
volatile int32_t t7 = -273922875;
uint32_t x36 = UINT32_MAX;
uint32_t x38 = UINT32_MAX;
uint16_t x40 = 1U;
int64_t x46 = INT64_MAX;
int32_t t11 = -70969790;
int32_t t15 = -12022;
int64_t x69 = INT64_MIN;
int64_t x70 = INT64_MIN;
int32_t x72 = -290;
volatile int32_t x77 = INT32_MAX;
static volatile int32_t t19 = 3;
static int64_t x82 = 465LL;
int32_t t21 = 660;
uint16_t x91 = 418U;
static uint8_t x93 = 58U;
volatile int32_t t24 = 6712679;
uint16_t x119 = 616U;
uint8_t x124 = 9U;
int32_t x129 = -164084463;
uint64_t x136 = UINT64_MAX;
int32_t t33 = 86102466;
uint64_t x138 = 747674LLU;
int16_t x141 = INT16_MIN;
int64_t x142 = INT64_MAX;
volatile int32_t t35 = -1;
static int8_t x145 = -1;
int8_t x146 = -1;
volatile int16_t x152 = -1;
int16_t x156 = -2;
uint64_t x159 = UINT64_MAX;
uint32_t x161 = 7U;
static volatile int32_t t42 = 91;
volatile int32_t t44 = 3022;
int32_t x182 = INT32_MIN;
static uint64_t x185 = UINT64_MAX;
uint64_t x186 = 20426629LLU;
int64_t x187 = 2435105LL;
int32_t x191 = INT32_MIN;
int64_t x202 = INT64_MIN;
static volatile int32_t t50 = 590;
uint32_t x208 = 121U;
volatile uint8_t x211 = 46U;
uint16_t x212 = 0U;
static int64_t x215 = -1LL;
static volatile int64_t x216 = -21331194LL;
uint32_t x219 = UINT32_MAX;
uint8_t x222 = 1U;
uint8_t x227 = UINT8_MAX;
uint64_t x232 = 1280423211LLU;
int8_t x233 = 44;
static uint8_t x235 = UINT8_MAX;
volatile int32_t t58 = 90;
uint8_t x237 = 8U;
int64_t x241 = INT64_MIN;
uint16_t x242 = 95U;
int16_t x247 = INT16_MIN;
uint64_t x248 = UINT64_MAX;
static int16_t x250 = INT16_MAX;
int16_t x251 = -1;
int32_t t62 = -268;
uint64_t x258 = UINT64_MAX;
int32_t t65 = -111501;
int8_t x265 = INT8_MIN;
volatile int32_t t68 = 95999820;
uint16_t x284 = 17U;
int64_t x288 = INT64_MIN;
volatile int32_t t71 = 164;
int16_t x289 = 67;
volatile int32_t t73 = 31117872;
int8_t x297 = INT8_MAX;
static volatile int64_t x298 = INT64_MIN;
int64_t x303 = INT64_MAX;
int8_t x304 = INT8_MIN;
int16_t x305 = 352;
volatile int8_t x306 = 1;
int32_t t76 = 19281176;
int16_t x311 = 1;
volatile int8_t x314 = INT8_MIN;
int32_t t80 = 7960;
int32_t x328 = 59988;
volatile int32_t x333 = -49691;
uint8_t x334 = 0U;
int32_t x343 = 5845759;
uint16_t x345 = 16191U;
volatile uint8_t x353 = 3U;
volatile int32_t x354 = 8164470;
static int16_t x355 = INT16_MIN;
int8_t x360 = INT8_MAX;
static uint64_t x361 = UINT64_MAX;
int8_t x364 = INT8_MIN;
static volatile uint64_t x375 = 78904819761LLU;
int16_t x377 = 60;
int64_t x378 = 968LL;
int32_t t94 = 108714964;
static int32_t t95 = -197;
int32_t t96 = 78026952;
int32_t t97 = -141122;
uint16_t x393 = UINT16_MAX;


void f0(void) {
	int32_t x2 = -1;
	static int8_t x3 = -1;
	static uint16_t x4 = 29U;
	static volatile int32_t t0 = 76849;

	t0 = ((x1<x2)>>(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint8_t x6 = UINT8_MAX;
	int32_t t1 = 0;

	t1 = ((x5<x6)>>(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int32_t x10 = 20785551;
	static int32_t x12 = INT32_MAX;
	int32_t t2 = 45896;

	t2 = ((x9<x10)>>(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = 805027322302LL;
	int32_t t3 = 16046578;

	t3 = ((x13<x14)>>(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int64_t x18 = 257694214853812LL;
	int32_t x19 = INT32_MAX;
	int32_t t4 = -11715526;

	t4 = ((x17<x18)>>(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x23 = 1066;
	volatile uint64_t x24 = 245694504099683LLU;
	volatile int32_t t5 = -187;

	t5 = ((x21<x22)>>(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 6U;
	int16_t x28 = -1;
	volatile int32_t t6 = -430481110;

	t6 = ((x25<x26)>>(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 346651U;
	uint8_t x31 = 3U;

	t7 = ((x29<x30)>>(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	volatile int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	volatile int32_t t8 = 838136;

	t8 = ((x33<x34)>>(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x39 = 0;
	static volatile int32_t t9 = -399;

	t9 = ((x37<x38)>>(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint32_t x42 = 0U;
	static int64_t x43 = 19883LL;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -443248226;

	t10 = ((x41<x42)>>(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 0U;
	static int32_t x47 = -1;
	static int32_t x48 = 57591;

	t11 = ((x45<x46)>>(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7880U;
	int32_t x50 = INT32_MAX;
	volatile uint16_t x51 = 0U;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = -2081802;

	t12 = ((x49<x50)>>(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int64_t x54 = 0LL;
	int64_t x55 = INT64_MIN;
	int64_t x56 = 5421031282924244LL;
	static int32_t t13 = -111;

	t13 = ((x53<x54)>>(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 3U;
	int32_t x58 = 470;
	int16_t x59 = -3;
	static uint16_t x60 = 3851U;
	int32_t t14 = 4822540;

	t14 = ((x57<x58)>>(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 1;
	static volatile uint64_t x62 = UINT64_MAX;
	volatile uint8_t x63 = 1U;
	static int16_t x64 = -1;

	t15 = ((x61<x62)>>(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 5U;
	uint64_t x66 = UINT64_MAX;
	volatile int32_t x67 = INT32_MIN;
	int32_t x68 = -30;
	int32_t t16 = -61274;

	t16 = ((x65<x66)>>(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x71 = 26987LL;
	static volatile int32_t t17 = 3516007;

	t17 = ((x69<x70)>>(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	uint32_t x74 = 32598203U;
	volatile int32_t x75 = INT32_MIN;
	int8_t x76 = 1;
	int32_t t18 = 2068;

	t18 = ((x73<x74)>>(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = 36LL;
	int32_t x79 = INT32_MIN;
	int64_t x80 = -1LL;

	t19 = ((x77<x78)>>(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	uint64_t x83 = 70LLU;
	int64_t x84 = 853699537492LL;
	volatile int32_t t20 = -4000;

	t20 = ((x81<x82)>>(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 159;
	volatile int16_t x86 = -1;
	uint16_t x87 = 1U;
	uint32_t x88 = 718345343U;

	t21 = ((x85<x86)>>(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 44780U;
	int8_t x90 = 15;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -10;

	t22 = ((x89<x90)>>(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -1;
	int64_t x95 = INT64_MIN;
	uint32_t x96 = 1499782055U;
	int32_t t23 = 64040909;

	t23 = ((x93<x94)>>(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int32_t x98 = -1;
	int64_t x99 = INT64_MIN;
	volatile uint8_t x100 = 1U;

	t24 = ((x97<x98)>>(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = 18;
	volatile int32_t t25 = -4773544;

	t25 = ((x101<x102)>>(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 396;
	volatile uint16_t x106 = 0U;
	volatile int16_t x107 = INT16_MIN;
	int8_t x108 = 0;
	volatile int32_t t26 = -2211;

	t26 = ((x105<x106)>>(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -8109;
	uint8_t x110 = 0U;
	int32_t x111 = INT32_MIN;
	static volatile int16_t x112 = -3683;
	static volatile int32_t t27 = -869949167;

	t27 = ((x109<x110)>>(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x113 = INT32_MIN;
	static volatile int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	static int64_t x116 = INT64_MIN;
	static volatile int32_t t28 = -184;

	t28 = ((x113<x114)>>(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 1106759LLU;
	uint16_t x118 = 23446U;
	int16_t x120 = 18;
	volatile int32_t t29 = -1039813;

	t29 = ((x117<x118)>>(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int64_t x122 = 15683369LL;
	volatile int32_t x123 = -3507;
	int32_t t30 = 13;

	t30 = ((x121<x122)>>(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MAX;
	int16_t x127 = INT16_MAX;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -2803066;

	t31 = ((x125<x126)>>(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x130 = 649084089368LL;
	static volatile uint8_t x131 = 0U;
	static volatile int32_t x132 = 30;
	volatile int32_t t32 = 9;

	t32 = ((x129<x130)>>(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	uint64_t x134 = 2761945492582941LLU;
	uint16_t x135 = 10421U;

	t33 = ((x133<x134)>>(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 1U;
	static uint64_t x139 = UINT64_MAX;
	static volatile int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 574;

	t34 = ((x137<x138)>>(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x143 = 5542723170984610LLU;
	volatile uint8_t x144 = UINT8_MAX;

	t35 = ((x141<x142)>>(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x147 = UINT16_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	static volatile int32_t t36 = -1961023;

	t36 = ((x145<x146)>>(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 1U;
	int8_t x150 = 0;
	int8_t x151 = INT8_MIN;
	int32_t t37 = 0;

	t37 = ((x149<x150)>>(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = 0U;
	int32_t t38 = 0;

	t38 = ((x153<x154)>>(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 754169LLU;
	static uint64_t x158 = 717881348207164LLU;
	volatile int32_t x160 = 730975;
	int32_t t39 = 74857621;

	t39 = ((x157<x158)>>(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	volatile uint16_t x163 = 210U;
	int16_t x164 = INT16_MIN;
	static int32_t t40 = -33909;

	t40 = ((x161<x162)>>(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = 1;
	static uint16_t x166 = 281U;
	volatile int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = 67210;

	t41 = ((x165<x166)>>(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -14;
	uint32_t x170 = 113U;
	int32_t x171 = -1408;
	uint32_t x172 = 6159005U;

	t42 = ((x169<x170)>>(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = -24385802;
	uint8_t x174 = 0U;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -1;
	volatile int32_t t43 = -113157;

	t43 = ((x173<x174)>>(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 2216;
	uint16_t x178 = 5U;
	static int8_t x179 = INT8_MIN;
	volatile int64_t x180 = INT64_MIN;

	t44 = ((x177<x178)>>(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -51108525;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = 23275U;
	static int32_t t45 = 401;

	t45 = ((x181<x182)>>(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x188 = 91U;
	volatile int32_t t46 = -12373263;

	t46 = ((x185<x186)>>(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MAX;
	static int32_t x190 = 25822;
	int32_t x192 = INT32_MIN;
	int32_t t47 = -14;

	t47 = ((x189<x190)>>(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile uint16_t x194 = 90U;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 765698LLU;
	volatile int32_t t48 = 6866;

	t48 = ((x193<x194)>>(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1026938960914LL;
	uint8_t x198 = 53U;
	int64_t x199 = INT64_MIN;
	volatile int32_t x200 = -1;
	volatile int32_t t49 = -1580;

	t49 = ((x197<x198)>>(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	int8_t x203 = -1;
	volatile int32_t x204 = -1;

	t50 = ((x201<x202)>>(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = 1U;
	uint8_t x206 = 3U;
	uint64_t x207 = 65LLU;
	static int32_t t51 = 115;

	t51 = ((x205<x206)>>(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	volatile int16_t x210 = INT16_MAX;
	volatile int32_t t52 = -212220643;

	t52 = ((x209<x210)>>(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 270609287089441369LL;
	static uint16_t x214 = 353U;
	volatile int32_t t53 = 286268;

	t53 = ((x213<x214)>>(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = UINT64_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -1;

	t54 = ((x217<x218)>>(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = INT32_MIN;
	static uint8_t x223 = 21U;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -22816630;

	t55 = ((x221<x222)>>(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 19371635334504668LLU;
	static int32_t x228 = 2046;
	volatile int32_t t56 = -299713;

	t56 = ((x225<x226)>>(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	static volatile int8_t x230 = 29;
	uint64_t x231 = UINT64_MAX;
	volatile int32_t t57 = 42759;

	t57 = ((x229<x230)>>(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = INT64_MAX;
	uint64_t x236 = 0LLU;

	t58 = ((x233<x234)>>(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 4945149733123LLU;
	int32_t t59 = -199922;

	t59 = ((x237<x238)>>(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x243 = UINT32_MAX;
	int32_t x244 = 20342;
	volatile int32_t t60 = -73;

	t60 = ((x241<x242)>>(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	static volatile uint32_t x246 = 1835273U;
	volatile int32_t t61 = 112551318;

	t61 = ((x245<x246)>>(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 12U;
	static volatile int32_t x252 = -28;

	t62 = ((x249<x250)>>(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = 8;
	int32_t x255 = INT32_MIN;
	uint16_t x256 = 951U;
	static volatile int32_t t63 = 40335115;

	t63 = ((x253<x254)>>(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 139U;
	volatile int64_t x259 = 36733754832196855LL;
	uint64_t x260 = 1396177085149LLU;
	int32_t t64 = -441673;

	t64 = ((x257<x258)>>(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = -1LL;
	int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	volatile uint16_t x264 = 21836U;

	t65 = ((x261<x262)>>(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = 251;
	int32_t x267 = 947339836;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 1357624;

	t66 = ((x265<x266)>>(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = -1LL;
	int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t67 = -79;

	t67 = ((x269<x270)>>(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 26041696805LLU;
	volatile int16_t x274 = 1;
	int32_t x275 = INT32_MAX;
	int64_t x276 = 177LL;

	t68 = ((x273<x274)>>(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 579072977;
	static int32_t x278 = INT32_MAX;
	int16_t x279 = 2856;
	volatile int16_t x280 = INT16_MIN;
	static int32_t t69 = 562147;

	t69 = ((x277<x278)>>(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	volatile int32_t x282 = -5569773;
	int32_t x283 = -1;
	static int32_t t70 = -19143;

	t70 = ((x281<x282)>>(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = -313;
	int8_t x286 = INT8_MAX;
	uint16_t x287 = 419U;

	t71 = ((x285<x286)>>(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MAX;
	volatile int32_t t72 = 0;

	t72 = ((x289<x290)>>(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	uint64_t x294 = 531629998LLU;
	uint64_t x295 = 4140217564127LLU;
	int32_t x296 = INT32_MIN;

	t73 = ((x293<x294)>>(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x299 = 18U;
	int16_t x300 = 5;
	int32_t t74 = -1;

	t74 = ((x297<x298)>>(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	static int32_t x302 = -34618;
	volatile int32_t t75 = -14;

	t75 = ((x301<x302)>>(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x307 = 19984036LLU;
	int16_t x308 = INT16_MIN;

	t76 = ((x305<x306)>>(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	int8_t x310 = -1;
	int16_t x312 = 29;
	static int32_t t77 = 43512359;

	t77 = ((x309<x310)>>(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -1;
	int16_t x315 = INT16_MIN;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -27730254;

	t78 = ((x313<x314)>>(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint32_t x318 = 201666365U;
	uint64_t x319 = 489164177533063695LLU;
	uint32_t x320 = 34U;
	int32_t t79 = 1;

	t79 = ((x317<x318)>>(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = 108703701777113636LL;
	uint8_t x322 = 0U;
	int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MIN;

	t80 = ((x321<x322)>>(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MAX;
	static volatile int64_t x327 = INT64_MAX;
	int32_t t81 = 90086295;

	t81 = ((x325<x326)>>(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -5338635LL;
	int32_t x330 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = 3934;

	t82 = ((x329<x330)>>(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = INT8_MIN;
	static uint8_t x336 = UINT8_MAX;
	int32_t t83 = 92;

	t83 = ((x333<x334)>>(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	uint16_t x338 = 0U;
	uint8_t x339 = 6U;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 0;

	t84 = ((x337<x338)>>(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	static uint64_t x342 = 91288932117LLU;
	static uint16_t x344 = 6U;
	volatile int32_t t85 = -1354;

	t85 = ((x341<x342)>>(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = 1;
	int32_t x347 = 3;
	uint64_t x348 = 3810311980247297036LLU;
	static volatile int32_t t86 = -3966;

	t86 = ((x345<x346)>>(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MAX;
	uint32_t x350 = 24356U;
	static int32_t x351 = INT32_MIN;
	uint32_t x352 = 3536953U;
	int32_t t87 = -856881619;

	t87 = ((x349<x350)>>(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x356 = -1;
	int32_t t88 = -11857188;

	t88 = ((x353<x354)>>(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = 2929;
	int16_t x359 = -1;
	int32_t t89 = -163190;

	t89 = ((x357<x358)>>(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x362 = INT8_MIN;
	volatile int16_t x363 = -1889;
	static int32_t t90 = -7265174;

	t90 = ((x361<x362)>>(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	int64_t x366 = 936756430523809LL;
	static int64_t x367 = INT64_MIN;
	static int8_t x368 = INT8_MAX;
	volatile int32_t t91 = -28473184;

	t91 = ((x365<x366)>>(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 1U;
	int16_t x371 = INT16_MIN;
	static volatile int64_t x372 = INT64_MIN;
	int32_t t92 = -14;

	t92 = ((x369<x370)>>(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 985;
	volatile int64_t x374 = INT64_MAX;
	int8_t x376 = INT8_MAX;
	static int32_t t93 = 119962;

	t93 = ((x373<x374)>>(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x379 = 10U;
	int8_t x380 = INT8_MIN;

	t94 = ((x377<x378)>>(x379==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -28LL;
	uint16_t x382 = 22937U;
	int64_t x383 = -138387001491074LL;
	static int16_t x384 = INT16_MAX;

	t95 = ((x381<x382)>>(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x385 = 119715;
	volatile int8_t x386 = INT8_MAX;
	int16_t x387 = -1;
	static uint64_t x388 = UINT64_MAX;

	t96 = ((x385<x386)>>(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile int16_t x390 = -1;
	int16_t x391 = INT16_MAX;
	int32_t x392 = INT32_MAX;

	t97 = ((x389<x390)>>(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x394 = -11257;
	int32_t x395 = INT32_MAX;
	int64_t x396 = INT64_MIN;
	static volatile int32_t t98 = 32143563;

	t98 = ((x393<x394)>>(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 6U;
	volatile int64_t x398 = INT64_MIN;
	int16_t x399 = 27;
	static int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = -15;

	t99 = ((x397<x398)>>(x399==x400));

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

