#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x12 = UINT8_MAX;
uint64_t t1 = 1379077784369265LLU;
int16_t x13 = INT16_MIN;
int16_t x16 = 203;
int32_t x22 = -1;
volatile uint64_t x24 = 49506384946951LLU;
uint64_t t3 = 2303680540605LLU;
int32_t x30 = 1;
static int64_t x38 = INT64_MAX;
int64_t x39 = 46726151LL;
uint32_t x42 = 200370945U;
int32_t x44 = INT32_MIN;
int8_t x46 = INT8_MIN;
int32_t x48 = INT32_MIN;
volatile int32_t x55 = -146560096;
static int16_t x56 = INT16_MIN;
volatile int8_t x61 = 1;
int64_t t11 = 240773858088646924LL;
volatile int32_t x73 = -113;
int64_t x75 = 5LL;
volatile int64_t t13 = -60545527552481561LL;
uint32_t x77 = 1U;
volatile int64_t x87 = INT64_MIN;
volatile int64_t t16 = 13029366811198895LL;
int64_t x89 = INT64_MIN;
uint8_t x96 = UINT8_MAX;
int8_t x102 = -1;
volatile uint32_t x103 = UINT32_MAX;
int64_t x105 = INT64_MIN;
volatile int16_t x106 = INT16_MAX;
volatile int8_t x110 = -1;
volatile uint64_t t22 = 401394499292497433LLU;
int16_t x117 = INT16_MAX;
int64_t x118 = INT64_MAX;
uint32_t x119 = 2436U;
static uint32_t x124 = UINT32_MAX;
static int32_t x125 = -1;
static int32_t x126 = INT32_MIN;
uint32_t x128 = UINT32_MAX;
static volatile uint32_t t25 = 108U;
volatile int64_t x134 = INT64_MIN;
int16_t x147 = INT16_MAX;
int16_t x148 = -48;
volatile uint8_t x155 = UINT8_MAX;
uint8_t x159 = UINT8_MAX;
int8_t x161 = 1;
int16_t x162 = -1;
int64_t x184 = -1LL;
int32_t x189 = -1;
volatile int16_t x190 = -1;
static volatile int8_t x193 = -2;
int8_t x209 = 0;
int16_t x214 = INT16_MAX;
int64_t x215 = -56836071017LL;
static uint32_t x234 = UINT32_MAX;
uint16_t x242 = 13U;
int8_t x246 = -1;
uint32_t t53 = 32476U;
int16_t x251 = 1;
static volatile int64_t t54 = -1LL;
volatile uint32_t x258 = 1227U;
int16_t x259 = 121;
uint8_t x268 = UINT8_MAX;
static int64_t x269 = -1LL;
int64_t x291 = INT64_MIN;
uint16_t x293 = 3202U;
volatile int16_t x294 = -763;
uint64_t t64 = 9926141110614LLU;
uint64_t x315 = 1836087094397267LLU;
static int64_t x316 = -1805975159LL;
int64_t t68 = 1898LL;
int8_t x327 = INT8_MIN;
int16_t x330 = INT16_MIN;
uint64_t x339 = UINT64_MAX;
volatile uint64_t t73 = 973209019258357LLU;
int64_t x345 = INT64_MIN;
volatile uint64_t t74 = 202905LLU;
static volatile uint64_t t75 = 136809LLU;
int8_t x353 = -1;
int32_t x354 = INT32_MIN;
static volatile int32_t x362 = 42;
int64_t t78 = 325620268273LL;
int16_t x378 = 11;
volatile int64_t x387 = INT64_MIN;
uint64_t x395 = 35LLU;
uint16_t x397 = UINT16_MAX;
volatile uint8_t x404 = 1U;
static uint32_t t87 = 39U;
volatile int32_t x420 = INT32_MAX;
static volatile uint32_t t89 = 25178490U;
static volatile int32_t t91 = -512;
static uint8_t x444 = 16U;
static int32_t x446 = INT32_MIN;
int8_t x447 = INT8_MIN;
int64_t x448 = -1LL;
int8_t x449 = INT8_MIN;
int32_t x453 = INT32_MAX;
static int32_t x461 = -5812999;
uint8_t x462 = 4U;
uint32_t t99 = 8378U;


void f0(void) {
	int8_t x5 = -1;
	int64_t x6 = -1LL;
	int8_t x7 = -1;
	int16_t x8 = INT16_MIN;
	int64_t t0 = -74LL;

	t0 = (((x5/x6)+x7)+x8);

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 0U;
	volatile int32_t x10 = 33;
	uint64_t x11 = 5876110993LLU;

	t1 = (((x9/x10)+x11)+x12);

	if (t1 != 5876111248LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = 266633;
	volatile uint16_t x15 = UINT16_MAX;
	static int32_t t2 = -4;

	t2 = (((x13/x14)+x15)+x16);

	if (t2 != 65738) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int8_t x23 = INT8_MIN;

	t3 = (((x21/x22)+x23)+x24);

	if (t3 != 49506384946568LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 70226124165163LLU;
	static int8_t x27 = -1;
	int16_t x28 = 4213;
	uint64_t t4 = 12370381222LLU;

	t4 = (((x25/x26)+x27)+x28);

	if (t4 != 4212LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -3;
	uint64_t x31 = UINT64_MAX;
	uint32_t x32 = 163104U;
	static uint64_t t5 = 5135587434LLU;

	t5 = (((x29/x30)+x31)+x32);

	if (t5 != 163100LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MAX;
	int16_t x40 = INT16_MAX;
	volatile int64_t t6 = -744972749280418328LL;

	t6 = (((x37/x38)+x39)+x40);

	if (t6 != 46758918LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = INT32_MIN;
	volatile int16_t x43 = -30;
	uint32_t t7 = 161941U;

	t7 = (((x41/x42)+x43)+x44);

	if (t7 != 2147483628U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = 8734714422249716LL;
	int8_t x47 = 46;
	static volatile int64_t t8 = 917249997691LL;

	t8 = (((x45/x46)+x47)+x48);

	if (t8 != -68242103907427LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x53 = INT16_MIN;
	static int16_t x54 = -1;
	int32_t t9 = -13;

	t9 = (((x53/x54)+x55)+x56);

	if (t9 != -146560096) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x62 = 565U;
	uint32_t x63 = 139605857U;
	volatile int32_t x64 = INT32_MAX;
	volatile uint32_t t10 = 97518U;

	t10 = (((x61/x62)+x63)+x64);

	if (t10 != 2287089504U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = INT64_MAX;
	uint32_t x66 = 4274347U;
	static int16_t x67 = -1;
	static int8_t x68 = INT8_MAX;

	t11 = (((x65/x66)+x67)+x68);

	if (t11 != 2157843534320LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MIN;
	volatile uint32_t x71 = 74U;
	uint8_t x72 = UINT8_MAX;
	volatile uint32_t t12 = 50505U;

	t12 = (((x69/x70)+x71)+x72);

	if (t12 != 16777545U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x74 = 531489930LL;
	static volatile int32_t x76 = INT32_MIN;

	t13 = (((x73/x74)+x75)+x76);

	if (t13 != -2147483643LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x78 = 4086528LLU;
	static int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;
	uint64_t t14 = 103438731538LLU;

	t14 = (((x77/x78)+x79)+x80);

	if (t14 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MAX;
	volatile int32_t x82 = INT32_MAX;
	uint64_t x83 = UINT64_MAX;
	static int64_t x84 = INT64_MIN;
	volatile uint64_t t15 = 214506580631296744LLU;

	t15 = (((x81/x82)+x83)+x84);

	if (t15 != 9223372041149743105LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = 2;
	static int16_t x86 = -900;
	int32_t x88 = 6841;

	t16 = (((x85/x86)+x87)+x88);

	if (t16 != -9223372036854768967LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x90 = INT64_MIN;
	static int8_t x91 = INT8_MIN;
	uint32_t x92 = 237U;
	volatile int64_t t17 = 1274539LL;

	t17 = (((x89/x90)+x91)+x92);

	if (t17 != 110LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x93 = 21U;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	volatile int32_t t18 = 344871;

	t18 = (((x93/x94)+x95)+x96);

	if (t18 != -32513) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x101 = 3241LL;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t19 = 700015662604361983LLU;

	t19 = (((x101/x102)+x103)+x104);

	if (t19 != 4294964053LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x107 = -1LL;
	int8_t x108 = INT8_MIN;
	static int64_t t20 = 116LL;

	t20 = (((x105/x106)+x107)+x108);

	if (t20 != -281483566907529LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = UINT32_MAX;
	int32_t x111 = INT32_MIN;
	int64_t x112 = 3509475603027LL;
	int64_t t21 = 1023952LL;

	t21 = (((x109/x110)+x111)+x112);

	if (t21 != 3511623086676LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = 548993018LL;
	static int8_t x115 = INT8_MIN;
	uint64_t x116 = UINT64_MAX;

	t22 = (((x113/x114)+x115)+x116);

	if (t22 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x120 = 1U;
	int64_t t23 = -139460LL;

	t23 = (((x117/x118)+x119)+x120);

	if (t23 != 2437LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x121 = INT8_MIN;
	int16_t x122 = -1;
	int8_t x123 = INT8_MAX;
	static uint32_t t24 = 180078U;

	t24 = (((x121/x122)+x123)+x124);

	if (t24 != 254U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x127 = 46U;

	t25 = (((x125/x126)+x127)+x128);

	if (t25 != 45U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = -7511;
	static uint64_t x130 = 832029LLU;
	static int8_t x131 = 0;
	static volatile int32_t x132 = -90;
	uint64_t t26 = 193491LLU;

	t26 = (((x129/x130)+x131)+x132);

	if (t26 != 22170794616094LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	int16_t x135 = -2627;
	int32_t x136 = 4;
	volatile int64_t t27 = 227176396055LL;

	t27 = (((x133/x134)+x135)+x136);

	if (t27 != -2623LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = 37;
	static uint8_t x138 = 27U;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MAX;
	int32_t t28 = -76;

	t28 = (((x137/x138)+x139)+x140);

	if (t28 != 98303) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = UINT64_MAX;
	int8_t x142 = 20;
	volatile int8_t x143 = INT8_MAX;
	volatile uint16_t x144 = 12U;
	volatile uint64_t t29 = 5516175531382435LLU;

	t29 = (((x141/x142)+x143)+x144);

	if (t29 != 922337203685477719LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = 31;
	uint32_t t30 = 108496370U;

	t30 = (((x145/x146)+x147)+x148);

	if (t30 != 138580051U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -2322800LL;
	int16_t x150 = INT16_MAX;
	int16_t x151 = -1;
	static int8_t x152 = INT8_MIN;
	int64_t t31 = -5294269288076978LL;

	t31 = (((x149/x150)+x151)+x152);

	if (t31 != -199LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = INT8_MAX;
	volatile int64_t x154 = 3462014256LL;
	static int64_t x156 = -1LL;
	volatile int64_t t32 = -28651014721861LL;

	t32 = (((x153/x154)+x155)+x156);

	if (t32 != 254LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = -568LL;
	int16_t x158 = -110;
	static int8_t x160 = INT8_MAX;
	int64_t t33 = -15696LL;

	t33 = (((x157/x158)+x159)+x160);

	if (t33 != 387LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x163 = 51U;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t34 = -25;

	t34 = (((x161/x162)+x163)+x164);

	if (t34 != -2147483598) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x165 = -11031;
	uint32_t x166 = 29U;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MAX;
	int64_t t35 = -1056258300LL;

	t35 = (((x165/x166)+x167)+x168);

	if (t35 != -9223372034559190221LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = -1;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = 61660114LLU;
	uint64_t t36 = 23376800369585LLU;

	t36 = (((x173/x174)+x175)+x176);

	if (t36 != 61659986LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x177 = -1;
	int16_t x178 = -1;
	uint32_t x179 = 4828U;
	int16_t x180 = INT16_MIN;
	volatile uint32_t t37 = 65U;

	t37 = (((x177/x178)+x179)+x180);

	if (t37 != 4294939357U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x181 = -31;
	uint16_t x182 = 2U;
	int32_t x183 = INT32_MAX;
	volatile int64_t t38 = 355321779306429LL;

	t38 = (((x181/x182)+x183)+x184);

	if (t38 != 2147483631LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -25;
	static uint8_t x186 = 115U;
	static int8_t x187 = INT8_MAX;
	uint16_t x188 = 250U;
	volatile int32_t t39 = 1;

	t39 = (((x185/x186)+x187)+x188);

	if (t39 != 377) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x191 = INT16_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t40 = 1688;

	t40 = (((x189/x190)+x191)+x192);

	if (t40 != 32640) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x194 = UINT16_MAX;
	static int32_t x195 = INT32_MAX;
	int32_t x196 = INT32_MIN;
	int32_t t41 = -1;

	t41 = (((x193/x194)+x195)+x196);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x197 = 1LL;
	int8_t x198 = -1;
	int64_t x199 = INT64_MAX;
	int16_t x200 = INT16_MIN;
	int64_t t42 = 7LL;

	t42 = (((x197/x198)+x199)+x200);

	if (t42 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x205 = 4U;
	volatile int8_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int8_t x208 = 19;
	volatile int32_t t43 = 51;

	t43 = (((x205/x206)+x207)+x208);

	if (t43 != -113) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x210 = INT8_MIN;
	volatile int8_t x211 = -4;
	int8_t x212 = INT8_MAX;
	int32_t t44 = -2705;

	t44 = (((x209/x210)+x211)+x212);

	if (t44 != 123) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = 164U;
	volatile int64_t x216 = 44751519347283254LL;
	volatile int64_t t45 = 1LL;

	t45 = (((x213/x214)+x215)+x216);

	if (t45 != 44751462511212237LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x217 = -1;
	volatile int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	static int16_t x220 = -2;
	static volatile int32_t t46 = 10887;

	t46 = (((x217/x218)+x219)+x220);

	if (t46 != -130) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = UINT64_MAX;
	uint32_t x222 = 80250218U;
	int16_t x223 = -2;
	volatile uint64_t x224 = 135807147LLU;
	uint64_t t47 = 11017823918104LLU;

	t47 = (((x221/x222)+x223)+x224);

	if (t47 != 230001152479LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x225 = INT8_MIN;
	uint32_t x226 = UINT32_MAX;
	static int16_t x227 = INT16_MIN;
	uint8_t x228 = 122U;
	volatile uint32_t t48 = 0U;

	t48 = (((x225/x226)+x227)+x228);

	if (t48 != 4294934650U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x229 = INT64_MIN;
	uint32_t x230 = 263656702U;
	int64_t x231 = -1LL;
	int8_t x232 = 0;
	static volatile int64_t t49 = 432LL;

	t49 = (((x229/x230)+x231)+x232);

	if (t49 != -34982505535LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = 1779697;
	volatile int16_t x235 = INT16_MIN;
	uint16_t x236 = 5621U;
	static volatile uint32_t t50 = 32U;

	t50 = (((x233/x234)+x235)+x236);

	if (t50 != 4294940149U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x237 = 1U;
	uint16_t x238 = UINT16_MAX;
	volatile int16_t x239 = INT16_MIN;
	uint16_t x240 = 206U;
	volatile int32_t t51 = 3;

	t51 = (((x237/x238)+x239)+x240);

	if (t51 != -32562) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -11;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = 1U;
	volatile int32_t t52 = 172580;

	t52 = (((x241/x242)+x243)+x244);

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x245 = 3U;
	uint8_t x247 = 0U;
	int8_t x248 = -5;

	t53 = (((x245/x246)+x247)+x248);

	if (t53 != 4294967291U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x249 = INT64_MIN;
	volatile int8_t x250 = INT8_MIN;
	uint16_t x252 = 2U;

	t54 = (((x249/x250)+x251)+x252);

	if (t54 != 72057594037927939LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x257 = INT16_MIN;
	volatile int32_t x260 = 78251948;
	uint32_t t55 = 1011342673U;

	t55 = (((x257/x258)+x259)+x260);

	if (t55 != 81752423U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = UINT32_MAX;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = 4;
	uint32_t t56 = 118821430U;

	t56 = (((x265/x266)+x267)+x268);

	if (t56 != 260U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x270 = UINT64_MAX;
	uint64_t x271 = 3916155522388LLU;
	int64_t x272 = -1LL;
	uint64_t t57 = 43637956LLU;

	t57 = (((x269/x270)+x271)+x272);

	if (t57 != 3916155522388LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -47;
	volatile int16_t x274 = -8268;
	static uint32_t x275 = UINT32_MAX;
	volatile uint64_t x276 = 224LLU;
	volatile uint64_t t58 = 277759600112936578LLU;

	t58 = (((x273/x274)+x275)+x276);

	if (t58 != 4294967519LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x277 = INT16_MAX;
	int64_t x278 = -31335359564666LL;
	int8_t x279 = INT8_MAX;
	static volatile int8_t x280 = INT8_MIN;
	volatile int64_t t59 = 218383956252989LL;

	t59 = (((x277/x278)+x279)+x280);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = 0;
	uint16_t x286 = 13U;
	uint8_t x287 = 4U;
	static int16_t x288 = INT16_MAX;
	int32_t t60 = 244830;

	t60 = (((x285/x286)+x287)+x288);

	if (t60 != 32771) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x289 = INT32_MAX;
	static volatile uint32_t x290 = UINT32_MAX;
	uint32_t x292 = UINT32_MAX;
	int64_t t61 = -78570842920392LL;

	t61 = (((x289/x290)+x291)+x292);

	if (t61 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x295 = INT8_MIN;
	int16_t x296 = 66;
	volatile int32_t t62 = -24884;

	t62 = (((x293/x294)+x295)+x296);

	if (t62 != -66) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = 2647826;
	uint64_t x299 = 4207426335019483618LLU;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t63 = 7405779318718523526LLU;

	t63 = (((x297/x298)+x299)+x300);

	if (t63 != 13430798371874259426LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = -108;
	int64_t x302 = INT64_MAX;
	int8_t x303 = -1;
	uint64_t x304 = 143815026LLU;

	t64 = (((x301/x302)+x303)+x304);

	if (t64 != 143815025LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x305 = 11U;
	int8_t x306 = INT8_MAX;
	int32_t x307 = 4;
	int64_t x308 = INT64_MIN;
	volatile int64_t t65 = 115777004LL;

	t65 = (((x305/x306)+x307)+x308);

	if (t65 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x309 = 84325;
	int32_t x310 = 1809;
	int64_t x311 = 0LL;
	int8_t x312 = INT8_MAX;
	static int64_t t66 = -23854LL;

	t66 = (((x309/x310)+x311)+x312);

	if (t66 != 173LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = -947730818;
	uint64_t t67 = 39025158651428LLU;

	t67 = (((x313/x314)+x315)+x316);

	if (t67 != 1836085288422109LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x317 = 31271255LL;
	volatile int32_t x318 = 379852;
	int16_t x319 = 146;
	static int64_t x320 = -1LL;

	t68 = (((x317/x318)+x319)+x320);

	if (t68 != 227LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x321 = 47914646367LLU;
	int64_t x322 = -1LL;
	int64_t x323 = -16234LL;
	int16_t x324 = -57;
	volatile uint64_t t69 = 1644876508957580674LLU;

	t69 = (((x321/x322)+x323)+x324);

	if (t69 != 18446744073709535325LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = 0;
	int8_t x326 = INT8_MIN;
	int64_t x328 = 393929275LL;
	volatile int64_t t70 = -4062398LL;

	t70 = (((x325/x326)+x327)+x328);

	if (t70 != 393929147LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MIN;
	static volatile int64_t x331 = 3117711635265LL;
	int16_t x332 = -1;
	int64_t t71 = 7453985LL;

	t71 = (((x329/x330)+x331)+x332);

	if (t71 != 3117711700800LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MIN;
	int64_t x335 = -1LL;
	int8_t x336 = INT8_MAX;
	static int64_t t72 = 1500010163881LL;

	t72 = (((x333/x334)+x335)+x336);

	if (t72 != -385LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	uint16_t x340 = UINT16_MAX;

	t73 = (((x337/x338)+x339)+x340);

	if (t73 != 65790LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x346 = 139316657242LLU;
	int64_t x347 = -1LL;
	uint8_t x348 = 6U;

	t74 = (((x345/x346)+x347)+x348);

	if (t74 != 66204378LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x349 = 137076103;
	int16_t x350 = INT16_MAX;
	volatile uint64_t x351 = 151340451161276913LLU;
	int64_t x352 = -2649839019522682820LL;

	t75 = (((x349/x350)+x351)+x352);

	if (t75 != 15948245505348149892LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x355 = 135LLU;
	int8_t x356 = 7;
	volatile uint64_t t76 = 2401LLU;

	t76 = (((x353/x354)+x355)+x356);

	if (t76 != 142LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MAX;
	uint64_t x358 = 6334057762095176275LLU;
	int64_t x359 = -1LL;
	volatile uint64_t x360 = 368251684206995LLU;
	uint64_t t77 = 538016587898LLU;

	t77 = (((x357/x358)+x359)+x360);

	if (t77 != 368251684206994LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x361 = 20341426245317LL;
	volatile int8_t x363 = INT8_MIN;
	static int16_t x364 = -1;

	t78 = (((x361/x362)+x363)+x364);

	if (t78 != 484319672378LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = INT64_MIN;
	volatile int16_t x370 = 6;
	static int8_t x371 = INT8_MIN;
	static volatile uint16_t x372 = UINT16_MAX;
	static int64_t t79 = 1LL;

	t79 = (((x369/x370)+x371)+x372);

	if (t79 != -1537228672809063894LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x377 = 85U;
	volatile int16_t x379 = 217;
	int32_t x380 = -1;
	int32_t t80 = 21758107;

	t80 = (((x377/x378)+x379)+x380);

	if (t80 != 223) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x383 = 465689509527513814LL;
	volatile uint32_t x384 = 4088545U;
	volatile int64_t t81 = 162944642766648204LL;

	t81 = (((x381/x382)+x383)+x384);

	if (t81 != 465689509531602359LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = -101;
	static uint64_t x386 = 514LLU;
	int32_t x388 = INT32_MIN;
	static volatile uint64_t t82 = 29327531255253799LLU;

	t82 = (((x385/x386)+x387)+x388);

	if (t82 != 9259260641854587007LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x390 = 260670980452348LLU;
	volatile uint32_t x391 = 397319U;
	int64_t x392 = -1LL;
	static uint64_t t83 = 684276569714LLU;

	t83 = (((x389/x390)+x391)+x392);

	if (t83 != 468084LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = UINT8_MAX;
	int32_t x396 = INT32_MIN;
	uint64_t t84 = 11147LLU;

	t84 = (((x393/x394)+x395)+x396);

	if (t84 != 18446744071562067875LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 18940578691099512LL;
	int64_t t85 = 1212701494903003LL;

	t85 = (((x397/x398)+x399)+x400);

	if (t85 != 18940578691066744LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = 13U;
	int32_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	static uint64_t t86 = 13LLU;

	t86 = (((x401/x402)+x403)+x404);

	if (t86 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = -95;
	uint16_t x414 = 58U;
	int16_t x415 = -127;
	uint32_t x416 = 506U;

	t87 = (((x413/x414)+x415)+x416);

	if (t87 != 378U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = -1;
	int64_t x418 = 1405766836LL;
	volatile uint16_t x419 = 393U;
	int64_t t88 = -55504959LL;

	t88 = (((x417/x418)+x419)+x420);

	if (t88 != 2147484040LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x421 = -1;
	static uint8_t x422 = 21U;
	static int8_t x423 = INT8_MAX;
	uint32_t x424 = 92916U;

	t89 = (((x421/x422)+x423)+x424);

	if (t89 != 93043U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x425 = -3993775LL;
	uint64_t x426 = UINT64_MAX;
	uint32_t x427 = 0U;
	volatile int64_t x428 = INT64_MAX;
	static uint64_t t90 = 639139003598LLU;

	t90 = (((x425/x426)+x427)+x428);

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x429 = UINT8_MAX;
	static volatile uint16_t x430 = UINT16_MAX;
	int16_t x431 = 3;
	int8_t x432 = 5;

	t91 = (((x429/x430)+x431)+x432);

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x433 = 130952LL;
	int32_t x434 = INT32_MAX;
	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = UINT32_MAX;
	int64_t t92 = -67598107497LL;

	t92 = (((x433/x434)+x435)+x436);

	if (t92 != 4294967550LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x441 = -1;
	int32_t x442 = INT32_MIN;
	volatile int32_t x443 = INT32_MIN;
	int32_t t93 = 20519;

	t93 = (((x441/x442)+x443)+x444);

	if (t93 != -2147483632) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = INT32_MIN;
	volatile int64_t t94 = -2240531470383642LL;

	t94 = (((x445/x446)+x447)+x448);

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x450 = 20731851457LL;
	uint32_t x451 = UINT32_MAX;
	uint8_t x452 = UINT8_MAX;
	int64_t t95 = 176190852354054549LL;

	t95 = (((x449/x450)+x451)+x452);

	if (t95 != 4294967550LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x454 = -1;
	volatile uint32_t x455 = UINT32_MAX;
	int32_t x456 = INT32_MIN;
	volatile uint32_t t96 = 6763175U;

	t96 = (((x453/x454)+x455)+x456);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x457 = 1U;
	volatile uint64_t x458 = UINT64_MAX;
	uint16_t x459 = UINT16_MAX;
	uint16_t x460 = UINT16_MAX;
	uint64_t t97 = 75214824LLU;

	t97 = (((x457/x458)+x459)+x460);

	if (t97 != 131070LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x463 = INT32_MAX;
	int16_t x464 = 0;
	volatile int32_t t98 = 188;

	t98 = (((x461/x462)+x463)+x464);

	if (t98 != 2146030398) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x465 = 9U;
	uint32_t x466 = 217101076U;
	uint16_t x467 = 8890U;
	volatile int16_t x468 = 3743;

	t99 = (((x465/x466)+x467)+x468);

	if (t99 != 12633U) { NG(); } else { ; }
	
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

