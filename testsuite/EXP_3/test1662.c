#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = UINT16_MAX;
static uint16_t x8 = 383U;
int8_t x9 = INT8_MAX;
int32_t x12 = -276634427;
int32_t t2 = 9;
int8_t x18 = -37;
volatile uint16_t x24 = UINT16_MAX;
volatile int64_t x26 = -494793732685319LL;
uint8_t x31 = 3U;
volatile int32_t x36 = 282999;
static int32_t t8 = 955281;
static volatile int16_t x40 = 580;
uint64_t x42 = 1994659LLU;
volatile uint64_t t10 = 5022036LLU;
volatile int32_t t11 = -12;
int64_t x60 = INT64_MIN;
int32_t x61 = INT32_MIN;
uint64_t x63 = 96859795554073LLU;
int16_t x66 = -29;
static volatile uint8_t x69 = 5U;
int16_t x70 = -1;
int32_t x71 = INT32_MIN;
int8_t x80 = INT8_MAX;
uint16_t x85 = 2938U;
volatile int16_t x89 = INT16_MAX;
int64_t x94 = INT64_MIN;
int64_t x99 = -1LL;
uint32_t x100 = 4U;
uint32_t x103 = 949263646U;
volatile int64_t x105 = -1LL;
int8_t x107 = INT8_MAX;
volatile uint64_t x108 = 722056LLU;
int16_t x109 = INT16_MIN;
uint16_t x120 = 26U;
volatile int32_t t29 = 9844;
int64_t x124 = INT64_MIN;
int32_t t32 = 64519;
int64_t x138 = INT64_MAX;
int32_t x151 = INT32_MIN;
int64_t x152 = -32937412LL;
static int64_t x161 = 15LL;
volatile int64_t x163 = INT64_MIN;
volatile int16_t x165 = INT16_MAX;
static uint16_t x166 = 14810U;
uint64_t x167 = UINT64_MAX;
uint16_t x171 = UINT16_MAX;
int16_t x175 = INT16_MIN;
uint64_t x178 = 18162LLU;
int64_t x183 = -1LL;
static int8_t x194 = -1;
static int16_t x195 = INT16_MIN;
uint32_t x199 = 1007U;
volatile int32_t t49 = 1;
int16_t x201 = INT16_MIN;
volatile int32_t x204 = INT32_MAX;
static int8_t x205 = -1;
int16_t x207 = -14673;
int32_t x210 = -207782688;
int64_t x212 = -16910341LL;
int8_t x218 = INT8_MAX;
int32_t t54 = -143623849;
int8_t x224 = -4;
static int32_t t55 = -4305;
int32_t t57 = 58094762;
static int32_t x238 = INT32_MIN;
volatile int16_t x240 = INT16_MIN;
uint8_t x244 = 0U;
int64_t x250 = -1LL;
static uint16_t x257 = 12987U;
uint64_t x260 = 357LLU;
static uint8_t x278 = 33U;
volatile int64_t t69 = -2263565950883660LL;
static volatile int16_t x285 = INT16_MIN;
int64_t t71 = 8084771LL;
volatile uint16_t x291 = UINT16_MAX;
int32_t x296 = INT32_MIN;
uint32_t x300 = UINT32_MAX;
volatile uint64_t t74 = 42033090917LLU;
volatile int32_t t75 = -17;
int32_t x305 = -199666;
uint8_t x308 = 17U;
volatile int32_t t76 = -3;
int32_t t77 = 13397216;
int32_t x314 = INT32_MIN;
int8_t x317 = INT8_MIN;
static int64_t x322 = 16636420781461993LL;
int8_t x326 = INT8_MIN;
uint32_t x328 = 33U;
int32_t t81 = -8806158;
volatile int64_t x329 = -6519993979337684LL;
volatile uint64_t x334 = 205201278715LLU;
uint16_t x335 = 36U;
int64_t t84 = -613441LL;
volatile int32_t t85 = 8745;
volatile uint16_t x353 = 2U;
int8_t x364 = -1;
static uint8_t x368 = 12U;
int32_t x369 = -178706;
uint32_t x370 = 150U;
uint32_t x373 = 10U;
uint32_t x380 = UINT32_MAX;
volatile int16_t x383 = -43;
int64_t x385 = INT64_MIN;
volatile int32_t x388 = INT32_MAX;
static volatile int64_t t96 = 5391841130LL;
uint64_t t97 = 288326189LLU;
uint32_t x393 = 3128648U;
volatile int32_t t99 = 47314225;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = -6;

	t0 = ((x1&x2)&(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	int64_t t1 = -1769394245008463LL;

	t1 = ((x5&x6)&(x7<=x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	static int32_t x11 = INT32_MAX;

	t2 = ((x9&x10)&(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	int8_t x14 = INT8_MAX;
	volatile int8_t x15 = -1;
	volatile int64_t x16 = INT64_MIN;
	static volatile int32_t t3 = 3;

	t3 = ((x13&x14)&(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	uint8_t x19 = 0U;
	int64_t x20 = 154447LL;
	volatile int32_t t4 = 10776;

	t4 = ((x17&x18)&(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 7U;
	volatile int8_t x22 = 0;
	int64_t x23 = INT64_MIN;
	volatile uint32_t t5 = 3419154U;

	t5 = ((x21&x22)&(x23<=x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	uint16_t x27 = 8130U;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t6 = -628878423383LL;

	t6 = ((x25&x26)&(x27<=x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = -1;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -2948;

	t7 = ((x29&x30)&(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	int16_t x34 = INT16_MAX;
	int64_t x35 = -2979760843337180247LL;

	t8 = ((x33&x34)&(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	volatile uint8_t x38 = 5U;
	uint32_t x39 = 5474692U;
	static volatile uint64_t t9 = 20214076154924LLU;

	t9 = ((x37&x38)&(x39<=x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	uint8_t x43 = 3U;
	volatile uint8_t x44 = 10U;

	t10 = ((x41&x42)&(x43<=x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 4U;
	uint8_t x46 = 0U;
	static uint8_t x47 = UINT8_MAX;
	int64_t x48 = INT64_MIN;

	t11 = ((x45&x46)&(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MIN;
	static int64_t x51 = INT64_MAX;
	int16_t x52 = 860;
	volatile int32_t t12 = 28944044;

	t12 = ((x49&x50)&(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	volatile int32_t x54 = -1;
	static uint8_t x55 = UINT8_MAX;
	int8_t x56 = -4;
	static int32_t t13 = 341860193;

	t13 = ((x53&x54)&(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	uint64_t x58 = 1LLU;
	static uint8_t x59 = 13U;
	static uint64_t t14 = 885838119269605LLU;

	t14 = ((x57&x58)&(x59<=x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MAX;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 16310;

	t15 = ((x61&x62)&(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 2703942512017LL;
	int16_t x67 = 907;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t16 = 64829797LL;

	t16 = ((x65&x66)&(x67<=x68));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -1489;

	t17 = ((x69&x70)&(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = -10;
	uint32_t x75 = UINT32_MAX;
	uint32_t x76 = UINT32_MAX;
	int64_t t18 = -309997456294847LL;

	t18 = ((x73&x74)&(x75<=x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -15348;
	int16_t x78 = INT16_MAX;
	int64_t x79 = INT64_MIN;
	int32_t t19 = 22354;

	t19 = ((x77&x78)&(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	uint16_t x82 = 45U;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 704422941577LLU;
	volatile int32_t t20 = -44;

	t20 = ((x81&x82)&(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = INT64_MIN;
	volatile int16_t x87 = -496;
	int64_t x88 = INT64_MAX;
	int64_t t21 = 62912834LL;

	t21 = ((x85&x86)&(x87<=x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	int8_t x91 = -3;
	int64_t x92 = INT64_MAX;
	int64_t t22 = -22LL;

	t22 = ((x89&x90)&(x91<=x92));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 10U;
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MAX;
	static volatile int64_t t23 = -64446892679LL;

	t23 = ((x93&x94)&(x95<=x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -211798LL;
	uint32_t x98 = 21189U;
	int64_t t24 = 54207326105271482LL;

	t24 = ((x97&x98)&(x99<=x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = 13508411U;
	int16_t x104 = -834;
	uint32_t t25 = 31726862U;

	t25 = ((x101&x102)&(x103<=x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 1U;
	volatile int64_t t26 = 212816045836LL;

	t26 = ((x105&x106)&(x107<=x108));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = 770LL;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = -1;
	volatile int64_t t27 = 18711293510LL;

	t27 = ((x109&x110)&(x111<=x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 1180U;
	int32_t x114 = INT32_MIN;
	volatile int8_t x115 = 38;
	int8_t x116 = -1;
	static volatile uint32_t t28 = 4U;

	t28 = ((x113&x114)&(x115<=x116));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -1;
	volatile int32_t x118 = 0;
	int64_t x119 = INT64_MIN;

	t29 = ((x117&x118)&(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 2159U;
	uint8_t x122 = 2U;
	int32_t x123 = INT32_MAX;
	static uint32_t t30 = 1091101U;

	t30 = ((x121&x122)&(x123<=x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = -4882LL;
	static int16_t x126 = -1;
	uint8_t x127 = 0U;
	uint64_t x128 = 8999315LLU;
	volatile int64_t t31 = -773011494LL;

	t31 = ((x125&x126)&(x127<=x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -12;
	volatile int8_t x130 = -19;
	int16_t x131 = INT16_MIN;
	volatile uint8_t x132 = 84U;

	t32 = ((x129&x130)&(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 47731114804415972LLU;
	int16_t x134 = -140;
	volatile int8_t x135 = -1;
	int16_t x136 = INT16_MIN;
	static uint64_t t33 = 196LLU;

	t33 = ((x133&x134)&(x135<=x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 10696442LLU;
	int16_t x139 = INT16_MIN;
	volatile int32_t x140 = 329;
	uint64_t t34 = 2642538LLU;

	t34 = ((x137&x138)&(x139<=x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 29;
	int16_t x142 = INT16_MIN;
	static int16_t x143 = INT16_MIN;
	int16_t x144 = -1;
	static int32_t t35 = 119608;

	t35 = ((x141&x142)&(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MIN;
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 6U;
	int32_t t36 = -1274;

	t36 = ((x145&x146)&(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MAX;
	volatile int64_t t37 = 2157149LL;

	t37 = ((x149&x150)&(x151<=x152));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	volatile int64_t x154 = 271746800603562031LL;
	int8_t x155 = 2;
	uint64_t x156 = 467259LLU;
	static volatile int64_t t38 = 125LL;

	t38 = ((x153&x154)&(x155<=x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	int64_t x158 = INT64_MIN;
	static int16_t x159 = -1;
	int8_t x160 = INT8_MIN;
	volatile int64_t t39 = -39748284836030054LL;

	t39 = ((x157&x158)&(x159<=x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	int64_t x164 = -1LL;
	volatile int64_t t40 = -35704635787050072LL;

	t40 = ((x161&x162)&(x163<=x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x168 = -36072;
	volatile int32_t t41 = -8049;

	t41 = ((x165&x166)&(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 908U;
	volatile uint64_t x170 = 3349LLU;
	int32_t x172 = -1;
	uint64_t t42 = 11LLU;

	t42 = ((x169&x170)&(x171<=x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	volatile int16_t x174 = INT16_MIN;
	volatile uint16_t x176 = 8U;
	int32_t t43 = -2;

	t43 = ((x173&x174)&(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -3757017844136014950LL;
	volatile int16_t x179 = INT16_MAX;
	uint64_t x180 = UINT64_MAX;
	uint64_t t44 = 170937592LLU;

	t44 = ((x177&x178)&(x179<=x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -1;
	int32_t x182 = 18515;
	uint64_t x184 = 103757938514686LLU;
	int32_t t45 = -28929350;

	t45 = ((x181&x182)&(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 9U;
	int32_t x186 = 3;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -6590;

	t46 = ((x185&x186)&(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = -8806774;
	volatile uint8_t x191 = 60U;
	volatile int32_t x192 = -1;
	int32_t t47 = 0;

	t47 = ((x189&x190)&(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int8_t x196 = -7;
	int32_t t48 = -189;

	t48 = ((x193&x194)&(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	int16_t x198 = 0;
	int16_t x200 = INT16_MAX;

	t49 = ((x197&x198)&(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MAX;
	int16_t x203 = INT16_MIN;
	volatile int32_t t50 = 511190664;

	t50 = ((x201&x202)&(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x206 = INT16_MIN;
	int16_t x208 = -1548;
	int32_t t51 = 145;

	t51 = ((x205&x206)&(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 881LL;
	uint16_t x211 = 5U;
	volatile int64_t t52 = -236754118LL;

	t52 = ((x209&x210)&(x211<=x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 4088LL;
	static int64_t x214 = INT64_MIN;
	volatile int32_t x215 = INT32_MIN;
	static int64_t x216 = -1LL;
	int64_t t53 = -49605871243LL;

	t53 = ((x213&x214)&(x215<=x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x219 = 44U;
	int32_t x220 = INT32_MIN;

	t54 = ((x217&x218)&(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 18U;
	static volatile uint16_t x222 = UINT16_MAX;
	int32_t x223 = 83822702;

	t55 = ((x221&x222)&(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -11277;
	uint16_t x226 = 0U;
	int16_t x227 = 1;
	int64_t x228 = 501002594LL;
	volatile int32_t t56 = 468814786;

	t56 = ((x225&x226)&(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -20;
	volatile int16_t x230 = -89;
	int32_t x231 = INT32_MIN;
	uint8_t x232 = UINT8_MAX;

	t57 = ((x229&x230)&(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	static volatile uint32_t t58 = 327U;

	t58 = ((x233&x234)&(x235<=x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 99U;
	int64_t x239 = INT64_MAX;
	int32_t t59 = -14629338;

	t59 = ((x237&x238)&(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -3452602386LL;
	int32_t x242 = -3;
	static int8_t x243 = INT8_MIN;
	static volatile int64_t t60 = -1195295LL;

	t60 = ((x241&x242)&(x243<=x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MIN;
	int64_t x247 = -10331663716008LL;
	uint16_t x248 = UINT16_MAX;
	static volatile int64_t t61 = 1512064LL;

	t61 = ((x245&x246)&(x247<=x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -12175780294923868LL;
	int64_t x251 = -117181096394032LL;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t62 = 122LL;

	t62 = ((x249&x250)&(x251<=x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 22U;
	uint64_t t63 = 47026407LLU;

	t63 = ((x253&x254)&(x255<=x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = UINT32_MAX;
	int32_t t64 = 35004132;

	t64 = ((x257&x258)&(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile int64_t x262 = INT64_MIN;
	int64_t x263 = -228397LL;
	int8_t x264 = INT8_MIN;
	volatile int64_t t65 = 64920476LL;

	t65 = ((x261&x262)&(x263<=x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -14;
	volatile int64_t x266 = INT64_MIN;
	int16_t x267 = -1;
	static uint8_t x268 = 2U;
	volatile int64_t t66 = -171281369556546337LL;

	t66 = ((x265&x266)&(x267<=x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	uint16_t x270 = 6U;
	uint32_t x271 = 0U;
	int16_t x272 = 14;
	int32_t t67 = -338;

	t67 = ((x269&x270)&(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 1;
	int32_t x274 = 14;
	static int16_t x275 = -1;
	uint16_t x276 = 18552U;
	int32_t t68 = -52;

	t68 = ((x273&x274)&(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = 70601671073973LL;
	static int8_t x279 = -1;
	int64_t x280 = -1LL;

	t69 = ((x277&x278)&(x279<=x280));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 490U;
	uint16_t x282 = 86U;
	uint64_t x283 = 49139648LLU;
	int32_t x284 = -1;
	volatile int32_t t70 = -163114;

	t70 = ((x281&x282)&(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MAX;
	uint64_t x288 = 718674334105821LLU;

	t71 = ((x285&x286)&(x287<=x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int16_t x290 = 9;
	static volatile uint64_t x292 = UINT64_MAX;
	volatile int32_t t72 = -116154142;

	t72 = ((x289&x290)&(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 3U;
	int64_t x294 = -1LL;
	volatile int32_t x295 = -1;
	static volatile int64_t t73 = -937867LL;

	t73 = ((x293&x294)&(x295<=x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 283LLU;
	int16_t x298 = -1;
	int8_t x299 = 4;

	t74 = ((x297&x298)&(x299<=x300));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -78;
	int8_t x302 = -29;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;

	t75 = ((x301&x302)&(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = 4U;
	volatile uint16_t x307 = 306U;

	t76 = ((x305&x306)&(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	int32_t x310 = 483518120;
	uint16_t x311 = 0U;
	volatile int16_t x312 = INT16_MIN;

	t77 = ((x309&x310)&(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 26870U;
	int32_t x315 = INT32_MIN;
	volatile int8_t x316 = -1;
	volatile uint32_t t78 = 0U;

	t78 = ((x313&x314)&(x315<=x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	static int8_t x320 = INT8_MIN;
	int32_t t79 = 17995;

	t79 = ((x317&x318)&(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	static volatile uint64_t x324 = 988LLU;
	uint64_t t80 = 16355LLU;

	t80 = ((x321&x322)&(x323<=x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	uint16_t x327 = 15U;

	t81 = ((x325&x326)&(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x330 = 881U;
	int16_t x331 = -7733;
	int8_t x332 = INT8_MIN;
	static volatile int64_t t82 = 3304163LL;

	t82 = ((x329&x330)&(x331<=x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 0U;
	static int8_t x336 = INT8_MIN;
	static volatile uint64_t t83 = 29042224LLU;

	t83 = ((x333&x334)&(x335<=x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	volatile int64_t x338 = INT64_MAX;
	static int64_t x339 = -1LL;
	int64_t x340 = 24081LL;

	t84 = ((x337&x338)&(x339<=x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MIN;
	int16_t x343 = -1;
	int64_t x344 = -1LL;

	t85 = ((x341&x342)&(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = -1;
	static uint64_t x346 = 1LLU;
	uint64_t x347 = 16LLU;
	volatile int16_t x348 = INT16_MIN;
	volatile uint64_t t86 = 204687620510556085LLU;

	t86 = ((x345&x346)&(x347<=x348));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	volatile uint32_t x350 = 37806U;
	volatile int32_t x351 = -1;
	int16_t x352 = 940;
	volatile uint32_t t87 = 239739U;

	t87 = ((x349&x350)&(x351<=x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = 1;
	static volatile int8_t x355 = 1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -57909700;

	t88 = ((x353&x354)&(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 0U;
	int32_t x358 = 13650;
	static int32_t x359 = INT32_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = 23502;

	t89 = ((x357&x358)&(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 88655LL;
	int64_t x362 = -1LL;
	int32_t x363 = -2357152;
	int64_t t90 = -502812766315LL;

	t90 = ((x361&x362)&(x363<=x364));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 38738U;
	int32_t x366 = 744301;
	int16_t x367 = INT16_MIN;
	uint32_t t91 = 88120686U;

	t91 = ((x365&x366)&(x367<=x368));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x371 = 57132LLU;
	volatile int32_t x372 = INT32_MIN;
	static volatile uint32_t t92 = 727076971U;

	t92 = ((x369&x370)&(x371<=x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x374 = 1;
	uint8_t x375 = 6U;
	int32_t x376 = INT32_MAX;
	static uint32_t t93 = 39305574U;

	t93 = ((x373&x374)&(x375<=x376));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	uint32_t x379 = UINT32_MAX;
	int32_t t94 = 184;

	t94 = ((x377&x378)&(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = UINT32_MAX;
	static int8_t x382 = -1;
	int16_t x384 = INT16_MIN;
	uint32_t t95 = 762025U;

	t95 = ((x381&x382)&(x383<=x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = 47U;
	static int32_t x387 = 2271538;

	t96 = ((x385&x386)&(x387<=x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;

	t97 = ((x389&x390)&(x391<=x392));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x394 = INT8_MIN;
	static int8_t x395 = 27;
	static uint64_t x396 = 120924746LLU;
	uint32_t t98 = 1595622U;

	t98 = ((x393&x394)&(x395<=x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = UINT8_MAX;
	static int16_t x398 = INT16_MAX;
	uint32_t x399 = 11683U;
	static int32_t x400 = INT32_MIN;

	t99 = ((x397&x398)&(x399<=x400));

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

