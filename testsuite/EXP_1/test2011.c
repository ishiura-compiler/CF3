#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 27277143;
int32_t x5 = INT32_MIN;
int64_t x7 = -1LL;
int32_t x10 = -14;
volatile int16_t x12 = INT16_MIN;
volatile uint32_t x16 = 34752760U;
static int64_t x20 = -1LL;
int8_t x25 = INT8_MIN;
volatile int32_t t6 = -180599793;
int32_t t7 = 584;
static int8_t x33 = INT8_MAX;
int32_t x35 = INT32_MIN;
volatile int32_t t8 = 19020;
static int32_t x42 = 4;
static int32_t t10 = 653370;
uint64_t x45 = 1366651306LLU;
volatile uint64_t x46 = UINT64_MAX;
volatile int8_t x49 = INT8_MAX;
static int64_t x54 = -1LL;
int64_t x55 = 281396489856LL;
static int16_t x56 = INT16_MIN;
int32_t x57 = INT32_MIN;
int64_t x60 = INT64_MIN;
uint64_t x64 = UINT64_MAX;
int64_t x70 = INT64_MAX;
uint64_t x72 = UINT64_MAX;
static int64_t x73 = -1093063280LL;
static uint32_t x77 = UINT32_MAX;
volatile uint8_t x81 = 0U;
int64_t x85 = INT64_MAX;
volatile int32_t t21 = 1;
uint32_t x89 = 60892346U;
int32_t x92 = -19;
int32_t x99 = INT32_MIN;
static int8_t x100 = INT8_MAX;
volatile int64_t x103 = 437715417LL;
int64_t x112 = 180703LL;
static int64_t x118 = 390703240699775571LL;
volatile int32_t t29 = 1760505;
volatile int16_t x123 = -293;
static int32_t x125 = INT32_MAX;
static int16_t x131 = 11;
static int8_t x132 = INT8_MAX;
volatile int32_t t32 = -1;
static int32_t x135 = -1;
static int64_t x146 = INT64_MIN;
static volatile int8_t x152 = -9;
uint8_t x154 = 62U;
int64_t x166 = INT64_MAX;
int32_t x168 = -6;
static volatile int32_t t41 = 133223160;
uint32_t x169 = 1216U;
uint32_t x175 = UINT32_MAX;
int16_t x182 = -1;
volatile uint64_t x184 = UINT64_MAX;
static int32_t t45 = -18;
volatile int64_t x186 = -1LL;
uint64_t x195 = 1LLU;
volatile int32_t t51 = 216566961;
static int32_t x215 = INT32_MAX;
volatile int8_t x217 = -1;
int64_t x224 = INT64_MIN;
volatile uint32_t x231 = 3U;
int32_t t57 = -152;
static int8_t x240 = INT8_MAX;
int32_t t59 = 248456;
int16_t x241 = INT16_MAX;
int64_t x244 = INT64_MIN;
static int64_t x252 = INT64_MIN;
int16_t x253 = INT16_MIN;
uint16_t x255 = 107U;
volatile int32_t t63 = 40326;
int64_t x258 = -1LL;
int32_t t65 = 15155174;
static int64_t x272 = -4699823453516LL;
uint64_t x279 = 9147416951054003451LLU;
static int32_t t70 = 832826459;
volatile int32_t t72 = 332782908;
uint16_t x293 = 11085U;
volatile int32_t t75 = -5925058;
int8_t x308 = INT8_MAX;
volatile int32_t t76 = 0;
static int32_t t77 = 1;
static int16_t x316 = -1;
static int16_t x320 = INT16_MIN;
volatile uint8_t x321 = UINT8_MAX;
int16_t x325 = INT16_MAX;
int64_t x327 = INT64_MIN;
int16_t x333 = INT16_MIN;
int64_t x335 = 22158378LL;
int32_t x337 = -1;
int8_t x338 = INT8_MIN;
int32_t t84 = -224683059;
static uint8_t x347 = 1U;
int8_t x351 = -1;
volatile int16_t x353 = INT16_MIN;
int32_t t92 = -421;
int8_t x382 = 42;
int8_t x383 = INT8_MIN;
volatile int32_t x388 = INT32_MIN;
static uint32_t x389 = 1515760727U;
int8_t x394 = INT8_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int16_t x2 = -1;
	int16_t x3 = INT16_MIN;
	static uint16_t x4 = 30U;

	t0 = (((x1|x2)|x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = 58202105U;
	volatile int64_t x8 = 5389383609241785LL;
	static int32_t t1 = 0;

	t1 = (((x5|x6)|x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -58;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -2383;

	t2 = (((x9|x10)|x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 908930953616131LL;
	int16_t x14 = 6;
	static int32_t x15 = INT32_MIN;
	int32_t t3 = 92434625;

	t3 = (((x13|x14)|x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 179028;
	int8_t x18 = 11;
	int8_t x19 = -1;
	int32_t t4 = -6;

	t4 = (((x17|x18)|x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1141693U;
	int32_t x22 = 14422;
	static int8_t x23 = INT8_MIN;
	uint8_t x24 = 61U;
	int32_t t5 = -19059;

	t5 = (((x21|x22)|x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x26 = 4084U;
	uint16_t x27 = UINT16_MAX;
	uint64_t x28 = UINT64_MAX;

	t6 = (((x25|x26)|x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MIN;
	uint16_t x31 = 10U;
	volatile uint8_t x32 = 17U;

	t7 = (((x29|x30)|x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	static uint16_t x36 = 7U;

	t8 = (((x33|x34)|x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 43;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = 58U;
	volatile uint32_t x40 = 7431U;
	volatile int32_t t9 = 991918;

	t9 = (((x37|x38)|x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int8_t x43 = -1;
	static int16_t x44 = INT16_MAX;

	t10 = (((x41|x42)|x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = -66891;
	uint8_t x48 = 1U;
	volatile int32_t t11 = -30522272;

	t11 = (((x45|x46)|x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	int64_t x51 = 373606428098LL;
	static volatile int64_t x52 = INT64_MAX;
	int32_t t12 = 313167657;

	t12 = (((x49|x50)|x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	volatile int32_t t13 = 20441;

	t13 = (((x53|x54)|x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x58 = -1;
	uint64_t x59 = 5LLU;
	int32_t t14 = 18909756;

	t14 = (((x57|x58)|x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;
	static volatile int64_t x62 = 1313286554LL;
	static volatile int64_t x63 = -1LL;
	int32_t t15 = -701;

	t15 = (((x61|x62)|x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1LL;
	uint16_t x66 = 0U;
	int16_t x67 = INT16_MIN;
	int8_t x68 = -1;
	int32_t t16 = -5647700;

	t16 = (((x65|x66)|x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 246LLU;
	volatile int16_t x71 = -1;
	static volatile int32_t t17 = -18885041;

	t17 = (((x69|x70)|x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 2U;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 1;

	t18 = (((x73|x74)|x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x78 = -1;
	int8_t x79 = INT8_MAX;
	static int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -6165898;

	t19 = (((x77|x78)|x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 28128259U;
	int64_t x83 = INT64_MAX;
	static uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -800701813;

	t20 = (((x81|x82)|x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 25U;
	volatile int32_t x87 = INT32_MAX;
	int64_t x88 = -1LL;

	t21 = (((x85|x86)|x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = INT16_MAX;
	uint8_t x91 = 2U;
	static int32_t t22 = 98956;

	t22 = (((x89|x90)|x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MAX;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	static int32_t t23 = -61;

	t23 = (((x93|x94)|x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -5;
	int8_t x98 = INT8_MIN;
	int32_t t24 = -1317;

	t24 = (((x97|x98)|x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -10;
	uint16_t x102 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -783859;

	t25 = (((x101|x102)|x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 3883298218LLU;
	static int32_t x106 = INT32_MIN;
	uint16_t x107 = UINT16_MAX;
	int64_t x108 = -1LL;
	volatile int32_t t26 = 451490;

	t26 = (((x105|x106)|x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int16_t x110 = -1;
	uint8_t x111 = 1U;
	static int32_t t27 = 52;

	t27 = (((x109|x110)|x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1932LL;
	int8_t x114 = -1;
	uint8_t x115 = 73U;
	static uint32_t x116 = UINT32_MAX;
	int32_t t28 = -3752096;

	t28 = (((x113|x114)|x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int32_t x120 = -1;

	t29 = (((x117|x118)|x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int8_t x122 = INT8_MIN;
	volatile int64_t x124 = INT64_MIN;
	int32_t t30 = -39450;

	t30 = (((x121|x122)|x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	int8_t x128 = -1;
	int32_t t31 = -1808170;

	t31 = (((x125|x126)|x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 9U;
	uint8_t x130 = UINT8_MAX;

	t32 = (((x129|x130)|x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 1;
	int64_t x134 = -43114985318LL;
	int16_t x136 = -1;
	volatile int32_t t33 = 0;

	t33 = (((x133|x134)|x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 6841542267971LLU;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = UINT32_MAX;
	volatile uint16_t x140 = 156U;
	static int32_t t34 = 0;

	t34 = (((x137|x138)|x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 203627744U;
	uint16_t x142 = 23U;
	volatile int8_t x143 = -1;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -269972;

	t35 = (((x141|x142)|x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int32_t x147 = INT32_MIN;
	static int32_t x148 = 4928;
	int32_t t36 = -172561717;

	t36 = (((x145|x146)|x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 0LL;
	static int8_t x150 = -1;
	int16_t x151 = INT16_MIN;
	int32_t t37 = 29929384;

	t37 = (((x149|x150)|x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 2111LL;
	uint64_t x155 = UINT64_MAX;
	uint64_t x156 = UINT64_MAX;
	int32_t t38 = -1;

	t38 = (((x153|x154)|x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int64_t x158 = -1LL;
	static int16_t x159 = INT16_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -14007096;

	t39 = (((x157|x158)|x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	volatile int16_t x162 = -1;
	int8_t x163 = INT8_MAX;
	int16_t x164 = -1671;
	int32_t t40 = -4;

	t40 = (((x161|x162)|x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x165 = INT8_MIN;
	int8_t x167 = -1;

	t41 = (((x165|x166)|x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x170 = -1260124LL;
	static uint64_t x171 = 57LLU;
	int8_t x172 = INT8_MAX;
	int32_t t42 = -492;

	t42 = (((x169|x170)|x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x173 = 68874425583920LLU;
	static int64_t x174 = INT64_MAX;
	uint32_t x176 = 823003094U;
	int32_t t43 = 1881410;

	t43 = (((x173|x174)|x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	volatile int32_t x178 = -1;
	int32_t x179 = -1;
	volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -1755487;

	t44 = (((x177|x178)|x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	volatile uint64_t x183 = 35447466961135107LLU;

	t45 = (((x181|x182)|x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 6817967410154LLU;
	int64_t x187 = -359LL;
	static volatile int16_t x188 = INT16_MIN;
	int32_t t46 = -38;

	t46 = (((x185|x186)|x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 49;
	uint8_t x190 = UINT8_MAX;
	static int16_t x191 = -1;
	int64_t x192 = INT64_MAX;
	static int32_t t47 = -30;

	t47 = (((x189|x190)|x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -9;
	uint64_t x194 = 1139LLU;
	volatile int16_t x196 = 1623;
	volatile int32_t t48 = 3935;

	t48 = (((x193|x194)|x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 12300U;
	int64_t x198 = INT64_MIN;
	volatile int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = 59919379;

	t49 = (((x197|x198)|x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = 129700204119716339LL;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -57LL;
	int32_t t50 = 1570926;

	t50 = (((x201|x202)|x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static uint8_t x206 = 45U;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = 12852220973795LLU;

	t51 = (((x205|x206)|x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 26044202275LLU;
	uint64_t x210 = UINT64_MAX;
	volatile uint64_t x211 = UINT64_MAX;
	int64_t x212 = -91LL;
	int32_t t52 = 411139;

	t52 = (((x209|x210)|x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 4U;
	int32_t x214 = INT32_MIN;
	uint32_t x216 = 3U;
	int32_t t53 = -1;

	t53 = (((x213|x214)|x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = -10680402;
	int32_t x219 = -972746;
	uint32_t x220 = UINT32_MAX;
	int32_t t54 = 49499;

	t54 = (((x217|x218)|x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = INT32_MIN;
	static int32_t x222 = INT32_MIN;
	static int32_t x223 = INT32_MIN;
	int32_t t55 = -270418561;

	t55 = (((x221|x222)|x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	volatile int32_t x226 = INT32_MIN;
	static int64_t x227 = -51197649136583545LL;
	uint16_t x228 = 14094U;
	volatile int32_t t56 = -16026;

	t56 = (((x225|x226)|x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 1U;
	int16_t x230 = -3696;
	static volatile int8_t x232 = INT8_MAX;

	t57 = (((x229|x230)|x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -192;
	static int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	int32_t t58 = -1727;

	t58 = (((x233|x234)|x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MIN;

	t59 = (((x237|x238)|x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = UINT16_MAX;
	int64_t x243 = -222612LL;
	volatile int32_t t60 = 49;

	t60 = (((x241|x242)|x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 66U;
	uint64_t x246 = 559380015701166LLU;
	int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MAX;
	static volatile int32_t t61 = 26;

	t61 = (((x245|x246)|x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = 3282;
	volatile int32_t x251 = INT32_MIN;
	int32_t t62 = -18926738;

	t62 = (((x249|x250)|x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = UINT16_MAX;
	uint64_t x256 = UINT64_MAX;

	t63 = (((x253|x254)|x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MAX;
	volatile int64_t x259 = INT64_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 2;

	t64 = (((x257|x258)|x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	int32_t x263 = -1;
	int8_t x264 = 50;

	t65 = (((x261|x262)|x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -639223215;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 1U;
	volatile int32_t t66 = -2799;

	t66 = (((x265|x266)|x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	uint32_t x270 = 231334808U;
	static int32_t x271 = INT32_MAX;
	volatile int32_t t67 = -1;

	t67 = (((x269|x270)|x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 469U;
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MAX;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t68 = -239232;

	t68 = (((x273|x274)|x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	int64_t x280 = INT64_MIN;
	int32_t t69 = 1;

	t69 = (((x277|x278)|x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	uint64_t x283 = UINT64_MAX;
	static int8_t x284 = INT8_MAX;

	t70 = (((x281|x282)|x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = -1;
	int16_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MAX;
	static int32_t t71 = -1478;

	t71 = (((x285|x286)|x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MIN;
	static int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;

	t72 = (((x289|x290)|x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -1;
	static volatile int8_t x295 = -1;
	volatile uint32_t x296 = 13646714U;
	static int32_t t73 = 947019;

	t73 = (((x293|x294)|x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 3U;
	uint8_t x298 = UINT8_MAX;
	volatile int16_t x299 = -1254;
	uint8_t x300 = 4U;
	static volatile int32_t t74 = 974;

	t74 = (((x297|x298)|x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MAX;
	uint32_t x303 = 628144291U;
	volatile int8_t x304 = -1;

	t75 = (((x301|x302)|x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	volatile int8_t x306 = -1;
	int32_t x307 = -1;

	t76 = (((x305|x306)|x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -380LL;
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MIN;

	t77 = (((x309|x310)|x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = -1;
	static int32_t x315 = 691;
	int32_t t78 = -498;

	t78 = (((x313|x314)|x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 6;
	int16_t x318 = -1;
	volatile int8_t x319 = 14;
	static volatile int32_t t79 = -245559635;

	t79 = (((x317|x318)|x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x322 = INT8_MAX;
	int16_t x323 = -112;
	static volatile int16_t x324 = INT16_MAX;
	int32_t t80 = 1271688;

	t80 = (((x321|x322)|x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = INT8_MIN;
	static uint64_t x328 = UINT64_MAX;
	int32_t t81 = 7321;

	t81 = (((x325|x326)|x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	uint64_t x330 = UINT64_MAX;
	uint32_t x331 = 53U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -297785;

	t82 = (((x329|x330)|x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	static int16_t x336 = INT16_MIN;
	int32_t t83 = 1570852;

	t83 = (((x333|x334)|x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x339 = UINT16_MAX;
	int8_t x340 = -1;

	t84 = (((x337|x338)|x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -1;
	static volatile uint32_t x342 = 332959480U;
	uint8_t x343 = UINT8_MAX;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t85 = -236247198;

	t85 = (((x341|x342)|x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = 404;
	static volatile uint8_t x348 = 2U;
	int32_t t86 = 1;

	t86 = (((x345|x346)|x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int16_t x350 = 7879;
	int16_t x352 = INT16_MAX;
	int32_t t87 = 267626;

	t87 = (((x349|x350)|x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = -1;
	volatile int32_t t88 = -3064117;

	t88 = (((x353|x354)|x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	volatile uint8_t x359 = 12U;
	int8_t x360 = 13;
	int32_t t89 = 18109;

	t89 = (((x357|x358)|x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 2990LL;
	volatile int8_t x362 = -1;
	int8_t x363 = -32;
	int64_t x364 = -219548231892336LL;
	int32_t t90 = -4168910;

	t90 = (((x361|x362)|x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MAX;
	static int8_t x366 = INT8_MAX;
	int8_t x367 = -1;
	int64_t x368 = INT64_MIN;
	int32_t t91 = 99971;

	t91 = (((x365|x366)|x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 2;
	int8_t x370 = -1;
	int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MAX;

	t92 = (((x369|x370)|x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 845661LL;
	uint16_t x374 = 0U;
	volatile int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MAX;
	int32_t t93 = 24883382;

	t93 = (((x373|x374)|x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	uint16_t x378 = 1567U;
	static int8_t x379 = INT8_MIN;
	uint64_t x380 = 5436534LLU;
	int32_t t94 = -619943496;

	t94 = (((x377|x378)|x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -762201374014LL;
	uint16_t x384 = 123U;
	int32_t t95 = -10463318;

	t95 = (((x381|x382)|x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x385 = 7U;
	static volatile int16_t x386 = INT16_MAX;
	uint32_t x387 = UINT32_MAX;
	volatile int32_t t96 = 22555822;

	t96 = (((x385|x386)|x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x390 = 0;
	int16_t x391 = INT16_MIN;
	int64_t x392 = -363LL;
	int32_t t97 = 7179;

	t97 = (((x389|x390)|x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x395 = 4519517LLU;
	uint16_t x396 = 1773U;
	int32_t t98 = -7656;

	t98 = (((x393|x394)|x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = UINT8_MAX;
	static int64_t x398 = -70718780034659232LL;
	int8_t x399 = -32;
	int32_t x400 = -428;
	static volatile int32_t t99 = 0;

	t99 = (((x397|x398)|x399)<x400);

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

