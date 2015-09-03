#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
volatile int32_t x14 = INT32_MIN;
volatile uint8_t x16 = 0U;
volatile int64_t x17 = INT64_MIN;
uint8_t x24 = 0U;
uint16_t x27 = 31U;
volatile uint64_t x29 = UINT64_MAX;
uint64_t x31 = 836830047209499252LLU;
int32_t x36 = -30213013;
volatile int32_t t8 = -81;
int32_t t9 = 61910;
int8_t x43 = INT8_MIN;
int16_t x45 = -1;
int32_t x46 = -1;
static volatile uint16_t x47 = UINT16_MAX;
volatile int16_t x48 = INT16_MIN;
static uint8_t x51 = 6U;
uint16_t x52 = 4U;
int32_t t12 = 78280795;
int64_t x63 = -14182970160LL;
uint8_t x66 = UINT8_MAX;
int16_t x70 = INT16_MIN;
int64_t x73 = -1LL;
int8_t x83 = -1;
static volatile int32_t x90 = -1706996;
int64_t x94 = 19538488LL;
uint32_t x97 = 1U;
int64_t x100 = INT64_MIN;
int8_t x101 = 13;
static int64_t x105 = INT64_MIN;
volatile int32_t x106 = INT32_MAX;
int64_t x116 = INT64_MIN;
int32_t t29 = -165855;
int8_t x123 = 8;
volatile int8_t x128 = 0;
int32_t x132 = -125319393;
uint32_t x135 = UINT32_MAX;
int32_t x141 = INT32_MAX;
int64_t x142 = 63094826995128LL;
int64_t x145 = -1105108766539664292LL;
volatile int64_t x147 = 13876LL;
volatile int32_t t36 = 89;
int8_t x150 = INT8_MAX;
volatile uint16_t x155 = 116U;
volatile int32_t t39 = 167886;
int64_t x164 = INT64_MIN;
int16_t x169 = -1;
static volatile int8_t x171 = INT8_MIN;
int8_t x173 = 1;
int32_t x176 = INT32_MIN;
int32_t t44 = 1;
int32_t x186 = INT32_MIN;
static int32_t x188 = INT32_MIN;
static int8_t x193 = INT8_MIN;
int16_t x194 = INT16_MIN;
int64_t x197 = 2LL;
static int16_t x204 = -3;
uint8_t x207 = 23U;
int32_t t50 = -983170914;
int32_t t51 = 1773438;
int32_t x216 = -1;
int32_t t53 = 1008922749;
volatile int64_t x224 = -1LL;
int64_t x227 = -2591626757LL;
int64_t x230 = 17085703395LL;
uint16_t x232 = 1U;
uint32_t x236 = 98625227U;
int32_t t57 = 844609;
int64_t x237 = INT64_MIN;
static int32_t x239 = INT32_MAX;
int32_t t61 = -3;
volatile int32_t t64 = -7;
int32_t t65 = -81466947;
static volatile int32_t t66 = -13690;
int32_t t67 = -6889;
volatile int8_t x277 = INT8_MAX;
int8_t x283 = INT8_MIN;
static int16_t x288 = 1;
int8_t x290 = -1;
int16_t x291 = -123;
volatile int32_t t71 = -31663398;
static int16_t x293 = -12;
static int32_t x297 = INT32_MIN;
int32_t t73 = 1;
int32_t t75 = -9;
static uint8_t x314 = 1U;
int32_t t77 = 0;
int16_t x320 = INT16_MIN;
int64_t x325 = -3774LL;
int32_t x327 = -1;
int8_t x330 = INT8_MIN;
uint8_t x333 = UINT8_MAX;
int32_t t84 = -15066;
int64_t x349 = INT64_MAX;
uint64_t x355 = UINT64_MAX;
int16_t x357 = 49;
volatile int32_t t87 = -11;
int8_t x362 = INT8_MAX;
uint16_t x367 = UINT16_MAX;
int16_t x370 = 0;
static int32_t x386 = INT32_MIN;
int32_t x391 = -2586032;
uint64_t x392 = UINT64_MAX;
int8_t x396 = INT8_MAX;
int8_t x397 = INT8_MAX;
uint8_t x404 = UINT8_MAX;
static int32_t x406 = -1;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int16_t x3 = INT16_MAX;
	uint8_t x4 = 32U;
	int32_t t0 = -72933934;

	t0 = (x1<((x2<=x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 356566988292417465LLU;
	uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 0U;
	static int32_t x8 = -1966997;
	int32_t t1 = -53796;

	t1 = (x5<((x6<=x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = -2383LL;
	uint64_t x12 = 655164364288LLU;
	int32_t t2 = 29;

	t2 = (x9<((x10<=x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 3368U;
	int16_t x15 = -1;
	volatile int32_t t3 = 2858815;

	t3 = (x13<((x14<=x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	static int64_t x19 = -18999LL;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -893152;

	t4 = (x17<((x18<=x19)+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	static volatile int32_t x22 = -350844;
	static int16_t x23 = -1;
	int32_t t5 = -1370;

	t5 = (x21<((x22<=x23)+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -11;
	int8_t x26 = 0;
	int16_t x28 = INT16_MAX;
	static volatile int32_t t6 = 73640100;

	t6 = (x25<((x26<=x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	uint64_t x32 = 1LLU;
	static volatile int32_t t7 = -5136;

	t7 = (x29<((x30<=x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int64_t x34 = -37983643428585LL;
	int8_t x35 = INT8_MAX;

	t8 = (x33<((x34<=x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -4132583489LL;
	int16_t x38 = INT16_MAX;
	static int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;

	t9 = (x37<((x38<=x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 2588;

	t10 = (x41<((x42<=x43)+x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t t11 = 287;

	t11 = (x45<((x46<=x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static volatile uint32_t x50 = UINT32_MAX;

	t12 = (x49<((x50<=x51)+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	int16_t x56 = 80;
	int32_t t13 = 5292701;

	t13 = (x53<((x54<=x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int8_t x58 = -1;
	int8_t x59 = INT8_MIN;
	int64_t x60 = -122LL;
	volatile int32_t t14 = -22392;

	t14 = (x57<((x58<=x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int8_t x62 = 52;
	uint32_t x64 = 3194957U;
	volatile int32_t t15 = 40624926;

	t15 = (x61<((x62<=x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1U;
	uint32_t x67 = UINT32_MAX;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = -43324501;

	t16 = (x65<((x66<=x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 56;
	static uint32_t x71 = UINT32_MAX;
	volatile int8_t x72 = 1;
	volatile int32_t t17 = 5;

	t17 = (x69<((x70<=x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 81U;
	uint8_t x75 = 14U;
	int8_t x76 = INT8_MAX;
	int32_t t18 = -6146;

	t18 = (x73<((x74<=x75)+x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int16_t x78 = 9970;
	uint32_t x79 = 116919329U;
	static uint64_t x80 = 30LLU;
	int32_t t19 = 0;

	t19 = (x77<((x78<=x79)+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int8_t x82 = -1;
	static int64_t x84 = -1LL;
	volatile int32_t t20 = -919606;

	t20 = (x81<((x82<=x83)+x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 4225905;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = 54U;
	volatile uint8_t x88 = UINT8_MAX;
	static int32_t t21 = 10;

	t21 = (x85<((x86<=x87)+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	static int64_t x91 = 98143LL;
	uint64_t x92 = 163032LLU;
	volatile int32_t t22 = -1;

	t22 = (x89<((x90<=x91)+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;
	int32_t t23 = -2;

	t23 = (x93<((x94<=x95)+x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = INT32_MIN;
	static uint64_t x99 = 3869969123090437606LLU;
	volatile int32_t t24 = -1;

	t24 = (x97<((x98<=x99)+x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -21;
	volatile uint64_t x103 = 1340LLU;
	int64_t x104 = 60448202803821LL;
	int32_t t25 = 43301;

	t25 = (x101<((x102<=x103)+x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x107 = INT64_MIN;
	static volatile uint8_t x108 = 5U;
	static int32_t t26 = -551370;

	t26 = (x105<((x106<=x107)+x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -25;
	uint32_t x110 = 1350577221U;
	int8_t x111 = 41;
	int8_t x112 = -1;
	volatile int32_t t27 = -19434;

	t27 = (x109<((x110<=x111)+x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 7593U;
	volatile int8_t x114 = 56;
	uint8_t x115 = 107U;
	int32_t t28 = -15;

	t28 = (x113<((x114<=x115)+x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 36776481120LL;
	static uint32_t x118 = 201485U;
	volatile int32_t x119 = -371510325;
	int32_t x120 = -1;

	t29 = (x117<((x118<=x119)+x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	volatile int8_t x122 = 3;
	int8_t x124 = INT8_MIN;
	static int32_t t30 = -1;

	t30 = (x121<((x122<=x123)+x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 0U;
	static int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	static volatile int32_t t31 = 11170;

	t31 = (x125<((x126<=x127)+x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 18LLU;
	int64_t x130 = INT64_MAX;
	uint16_t x131 = 14925U;
	int32_t t32 = 3;

	t32 = (x129<((x130<=x131)+x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = -1;
	int64_t x134 = 106934LL;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 2;

	t33 = (x133<((x134<=x135)+x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 19U;
	static volatile uint16_t x138 = 300U;
	int64_t x139 = 46985090940716060LL;
	static int16_t x140 = 7641;
	volatile int32_t t34 = -104387;

	t34 = (x137<((x138<=x139)+x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x143 = 2U;
	int8_t x144 = -1;
	volatile int32_t t35 = 3226;

	t35 = (x141<((x142<=x143)+x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int8_t x148 = INT8_MIN;

	t36 = (x145<((x146<=x147)+x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	volatile uint8_t x151 = 26U;
	uint8_t x152 = 7U;
	int32_t t37 = -3183;

	t37 = (x149<((x150<=x151)+x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MAX;
	volatile int8_t x154 = INT8_MIN;
	int64_t x156 = -1LL;
	int32_t t38 = -1;

	t38 = (x153<((x154<=x155)+x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MIN;
	int8_t x159 = -30;
	int16_t x160 = -676;

	t39 = (x157<((x158<=x159)+x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 0U;
	int32_t x162 = INT32_MIN;
	int64_t x163 = INT64_MAX;
	volatile int32_t t40 = -65339;

	t40 = (x161<((x162<=x163)+x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static uint64_t x166 = 76LLU;
	int32_t x167 = -1;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t41 = -2466;

	t41 = (x165<((x166<=x167)+x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MAX;
	volatile int32_t x172 = INT32_MIN;
	int32_t t42 = 19916608;

	t42 = (x169<((x170<=x171)+x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MAX;
	int32_t t43 = 2938490;

	t43 = (x173<((x174<=x175)+x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = 1;
	static uint64_t x179 = 2030582589400LLU;
	volatile uint8_t x180 = 6U;

	t44 = (x177<((x178<=x179)+x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = UINT16_MAX;
	volatile uint32_t x182 = UINT32_MAX;
	uint32_t x183 = UINT32_MAX;
	static int8_t x184 = -1;
	volatile int32_t t45 = 15815;

	t45 = (x181<((x182<=x183)+x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x187 = 4U;
	volatile int32_t t46 = -3587923;

	t46 = (x185<((x186<=x187)+x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x195 = 3;
	int64_t x196 = -1LL;
	int32_t t47 = -416784;

	t47 = (x193<((x194<=x195)+x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x198 = 858440946227361101LL;
	static uint32_t x199 = UINT32_MAX;
	volatile uint8_t x200 = 3U;
	volatile int32_t t48 = 105;

	t48 = (x197<((x198<=x199)+x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = -16118;
	volatile int32_t x203 = -1;
	volatile int32_t t49 = -27485;

	t49 = (x201<((x202<=x203)+x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = 2441;
	int64_t x206 = INT64_MIN;
	int8_t x208 = INT8_MAX;

	t50 = (x205<((x206<=x207)+x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = UINT8_MAX;
	volatile uint16_t x210 = 1611U;
	static uint32_t x211 = 42682U;
	volatile int16_t x212 = 1244;

	t51 = (x209<((x210<=x211)+x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 407971U;
	uint16_t x214 = 4627U;
	static volatile uint16_t x215 = 1216U;
	int32_t t52 = 444231;

	t52 = (x213<((x214<=x215)+x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = 444807180;
	uint64_t x218 = 65638358855LLU;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = -1;

	t53 = (x217<((x218<=x219)+x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	volatile int32_t t54 = 5;

	t54 = (x221<((x222<=x223)+x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	int32_t x226 = 308269259;
	static int8_t x228 = INT8_MAX;
	int32_t t55 = 143;

	t55 = (x225<((x226<=x227)+x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x229 = 66484234;
	uint32_t x231 = 1767U;
	volatile int32_t t56 = 210;

	t56 = (x229<((x230<=x231)+x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1;
	int32_t x234 = INT32_MAX;
	int32_t x235 = -1;

	t57 = (x233<((x234<=x235)+x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x238 = 57U;
	volatile uint32_t x240 = 90737309U;
	static int32_t t58 = 0;

	t58 = (x237<((x238<=x239)+x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -3;
	static int16_t x242 = INT16_MIN;
	volatile uint64_t x243 = UINT64_MAX;
	volatile int8_t x244 = 1;
	volatile int32_t t59 = 5924663;

	t59 = (x241<((x242<=x243)+x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 556U;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t60 = -22920384;

	t60 = (x245<((x246<=x247)+x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x249 = 10U;
	uint64_t x250 = UINT64_MAX;
	int16_t x251 = 0;
	int64_t x252 = -116180876864987LL;

	t61 = (x249<((x250<=x251)+x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MAX;
	int64_t x255 = -1LL;
	int32_t x256 = -1;
	int32_t t62 = -116;

	t62 = (x253<((x254<=x255)+x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = -1;
	int64_t x259 = INT64_MAX;
	int8_t x260 = INT8_MAX;
	int32_t t63 = -896982605;

	t63 = (x257<((x258<=x259)+x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 1U;
	uint64_t x262 = 314878554982869771LLU;
	static uint8_t x263 = 1U;
	static int64_t x264 = INT64_MIN;

	t64 = (x261<((x262<=x263)+x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	uint32_t x267 = 819U;
	uint32_t x268 = 489337U;

	t65 = (x265<((x266<=x267)+x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = 12069755;
	static int16_t x271 = 1;
	int32_t x272 = -140;

	t66 = (x269<((x270<=x271)+x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MAX;
	static int64_t x274 = INT64_MIN;
	uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MIN;

	t67 = (x273<((x274<=x275)+x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x278 = INT64_MIN;
	static int32_t x279 = INT32_MIN;
	static uint64_t x280 = 8LLU;
	int32_t t68 = -1737487;

	t68 = (x277<((x278<=x279)+x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = UINT16_MAX;
	static volatile int8_t x282 = INT8_MIN;
	int8_t x284 = -1;
	static int32_t t69 = 171519;

	t69 = (x281<((x282<=x283)+x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x285 = 29829912U;
	volatile uint64_t x286 = 209606986457LLU;
	int16_t x287 = 1;
	static int32_t t70 = 271898440;

	t70 = (x285<((x286<=x287)+x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	int64_t x292 = -12880745LL;

	t71 = (x289<((x290<=x291)+x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x294 = 524;
	uint16_t x295 = 206U;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t72 = -1386748;

	t72 = (x293<((x294<=x295)+x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x298 = -1;
	int64_t x299 = 1247600234316410556LL;
	volatile int64_t x300 = INT64_MIN;

	t73 = (x297<((x298<=x299)+x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MAX;
	static volatile int8_t x302 = 3;
	int16_t x303 = -1113;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t74 = -2823;

	t74 = (x301<((x302<=x303)+x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 70U;
	int8_t x306 = -22;
	volatile int32_t x307 = -1;
	static int64_t x308 = -1LL;

	t75 = (x305<((x306<=x307)+x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = -1LL;
	static volatile uint64_t x310 = 1586544920887346LLU;
	uint16_t x311 = 6761U;
	int32_t x312 = 13230710;
	int32_t t76 = 16145541;

	t76 = (x309<((x310<=x311)+x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = -4102592;
	int32_t x315 = 4;
	uint64_t x316 = UINT64_MAX;

	t77 = (x313<((x314<=x315)+x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MAX;
	int16_t x318 = -1;
	static uint64_t x319 = UINT64_MAX;
	volatile int32_t t78 = 18027932;

	t78 = (x317<((x318<=x319)+x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x321 = INT8_MIN;
	static int16_t x322 = INT16_MIN;
	int8_t x323 = -1;
	volatile int8_t x324 = INT8_MIN;
	int32_t t79 = -8006;

	t79 = (x321<((x322<=x323)+x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x326 = 77;
	volatile uint16_t x328 = UINT16_MAX;
	volatile int32_t t80 = -183787;

	t80 = (x325<((x326<=x327)+x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = -10252;
	int16_t x331 = INT16_MAX;
	uint32_t x332 = 151U;
	static int32_t t81 = 320;

	t81 = (x329<((x330<=x331)+x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x334 = 508;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 108602230U;
	int32_t t82 = 3908700;

	t82 = (x333<((x334<=x335)+x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MAX;
	uint64_t x338 = 5LLU;
	volatile int32_t x339 = -112;
	int16_t x340 = -1;
	static int32_t t83 = 16376121;

	t83 = (x337<((x338<=x339)+x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = 5LLU;
	int16_t x342 = INT16_MAX;
	volatile int8_t x343 = 0;
	int64_t x344 = 0LL;

	t84 = (x341<((x342<=x343)+x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x350 = -532;
	int32_t x351 = INT32_MAX;
	int64_t x352 = -15834353785006144LL;
	static int32_t t85 = 32440468;

	t85 = (x349<((x350<=x351)+x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = 321473987;
	static int16_t x354 = INT16_MIN;
	volatile int8_t x356 = 23;
	volatile int32_t t86 = -91140631;

	t86 = (x353<((x354<=x355)+x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = INT16_MIN;
	volatile int64_t x359 = -226LL;
	int64_t x360 = -1LL;

	t87 = (x357<((x358<=x359)+x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -1LL;
	int32_t x363 = INT32_MIN;
	volatile uint64_t x364 = 114137177082076778LLU;
	volatile int32_t t88 = -225239;

	t88 = (x361<((x362<=x363)+x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = UINT64_MAX;
	static int64_t x366 = 892259LL;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t89 = 10568947;

	t89 = (x365<((x366<=x367)+x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x369 = -1;
	int64_t x371 = 10363082690LL;
	int8_t x372 = -1;
	int32_t t90 = 2;

	t90 = (x369<((x370<=x371)+x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = 22749433;
	int32_t x374 = INT32_MAX;
	volatile int16_t x375 = -17;
	volatile uint8_t x376 = 6U;
	volatile int32_t t91 = 2;

	t91 = (x373<((x374<=x375)+x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x377 = 7365U;
	uint32_t x378 = 135U;
	static int8_t x379 = -1;
	static int8_t x380 = INT8_MIN;
	int32_t t92 = -5;

	t92 = (x377<((x378<=x379)+x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x381 = 4U;
	uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 5811988127818895423LLU;
	uint32_t x384 = 798U;
	static int32_t t93 = 24862584;

	t93 = (x381<((x382<=x383)+x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = -844;
	int64_t x387 = 7148119LL;
	volatile int64_t x388 = -1LL;
	int32_t t94 = 9180;

	t94 = (x385<((x386<=x387)+x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = 56176U;
	int32_t x390 = -1;
	int32_t t95 = 70;

	t95 = (x389<((x390<=x391)+x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	uint64_t x394 = UINT64_MAX;
	static uint32_t x395 = UINT32_MAX;
	volatile int32_t t96 = 15;

	t96 = (x393<((x394<=x395)+x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x398 = -1;
	int8_t x399 = INT8_MIN;
	volatile int8_t x400 = 1;
	int32_t t97 = -1;

	t97 = (x397<((x398<=x399)+x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x401 = 0;
	int8_t x402 = -1;
	int32_t x403 = INT32_MIN;
	volatile int32_t t98 = 1799;

	t98 = (x401<((x402<=x403)+x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = INT64_MAX;
	int8_t x407 = INT8_MAX;
	volatile int32_t x408 = -3226547;
	static int32_t t99 = 6311554;

	t99 = (x405<((x406<=x407)+x408));

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

