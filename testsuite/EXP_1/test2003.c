#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = -5;
volatile int32_t t3 = 38748663;
uint8_t x23 = UINT8_MAX;
volatile int64_t x28 = 12580563387850LL;
uint64_t x32 = UINT64_MAX;
uint64_t t6 = 1102571907287LLU;
static int32_t x37 = INT32_MIN;
static int32_t x41 = INT32_MAX;
static uint8_t x42 = UINT8_MAX;
static volatile uint64_t x43 = UINT64_MAX;
int64_t t10 = -454950LL;
static uint64_t x49 = UINT64_MAX;
int64_t x51 = 1343293252213708280LL;
uint64_t t11 = 299510717601LLU;
static int16_t x58 = INT16_MAX;
int16_t x61 = INT16_MIN;
volatile uint16_t x70 = UINT16_MAX;
volatile uint32_t x80 = 31927973U;
uint64_t x81 = UINT64_MAX;
int8_t x82 = 17;
volatile uint64_t x97 = 4554LLU;
int64_t x98 = -120004LL;
int16_t x99 = INT16_MIN;
int64_t x100 = -1LL;
int64_t x101 = INT64_MIN;
volatile int64_t t24 = 13LL;
static uint64_t x106 = UINT64_MAX;
uint64_t x109 = UINT64_MAX;
volatile int32_t t28 = -227194695;
int8_t x122 = -1;
int64_t x127 = 240473947345092899LL;
int64_t t31 = -1570LL;
uint64_t x133 = UINT64_MAX;
int32_t t35 = -512;
volatile uint8_t x151 = 3U;
volatile int16_t x152 = INT16_MIN;
int32_t t36 = 4155887;
static volatile int8_t x159 = INT8_MIN;
int32_t x167 = INT32_MAX;
uint8_t x168 = 9U;
int32_t x185 = INT32_MIN;
int32_t x186 = INT32_MAX;
uint8_t x197 = 93U;
int64_t x205 = -275298732442566LL;
int32_t x209 = -107963223;
volatile uint64_t t52 = 68328LLU;
int8_t x222 = INT8_MIN;
uint64_t x230 = 3961319204342680LLU;
uint16_t x231 = 3U;
static uint16_t x232 = UINT16_MAX;
static volatile int16_t x233 = 1166;
volatile uint8_t x236 = UINT8_MAX;
int8_t x240 = INT8_MAX;
static int64_t t59 = 6749LL;
uint8_t x247 = UINT8_MAX;
int16_t x248 = -1;
int64_t t60 = -4356533LL;
uint16_t x249 = UINT16_MAX;
int64_t t61 = -22335LL;
int64_t x253 = INT64_MIN;
volatile int32_t x269 = INT32_MIN;
uint8_t x276 = 2U;
int64_t t67 = -1768134065LL;
static uint8_t x288 = UINT8_MAX;
static uint32_t x293 = 1652156753U;
static uint64_t x294 = 7349675475137LLU;
int64_t x310 = -1LL;
volatile int64_t t76 = -493481355561134879LL;
int8_t x318 = -1;
uint8_t x321 = 96U;
static int32_t x323 = INT32_MAX;
volatile int64_t t78 = 3LL;
int64_t x331 = INT64_MIN;
uint64_t x333 = UINT64_MAX;
int32_t x336 = -5513993;
volatile uint64_t t81 = 227LLU;
int8_t x337 = -15;
int32_t x341 = INT32_MIN;
uint64_t x342 = 5916667043071750329LLU;
volatile uint64_t x348 = 5LLU;
static volatile int64_t t85 = -265904565LL;
volatile uint16_t x372 = 4760U;
volatile uint64_t t90 = 4669395478441LLU;
int32_t x384 = INT32_MIN;
volatile uint32_t t91 = 1U;
uint64_t x387 = 40654037LLU;
volatile int16_t x392 = INT16_MIN;
static volatile int16_t x399 = 3711;
static int64_t x402 = 858937545873LL;
static uint8_t x404 = UINT8_MAX;
int64_t x407 = INT64_MIN;
int64_t t97 = -1178897475456LL;
int16_t x409 = INT16_MIN;
static volatile int64_t x412 = -5215255LL;
static int16_t x413 = INT16_MAX;


void f0(void) {
	uint32_t x1 = 3U;
	uint8_t x2 = 3U;
	uint32_t x3 = 3889883U;
	uint32_t x4 = 3464791U;
	static volatile uint32_t t0 = 3502U;

	t0 = (((x1|x2)|x3)+x4);

	if (t0 != 7354674U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	static int64_t x6 = INT64_MIN;
	int16_t x7 = -1;
	int16_t x8 = INT16_MAX;
	int64_t t1 = 148023891660765891LL;

	t1 = (((x5|x6)|x7)+x8);

	if (t1 != 32766LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = -1;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 0;

	t2 = (((x9|x10)|x11)+x12);

	if (t2 != 2147483646) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	int16_t x14 = INT16_MIN;
	int32_t x15 = -1;
	int32_t x16 = INT32_MAX;

	t3 = (((x13|x14)|x15)+x16);

	if (t3 != 2147483646) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 1U;
	uint32_t x22 = 56874U;
	int8_t x24 = INT8_MIN;
	volatile uint32_t t4 = 44U;

	t4 = (((x21|x22)|x23)+x24);

	if (t4 != 56959U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	static uint8_t x26 = UINT8_MAX;
	int64_t x27 = INT64_MAX;
	volatile uint64_t t5 = 30990914962439569LLU;

	t5 = (((x25|x26)|x27)+x28);

	if (t5 != 12580563387849LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	uint8_t x30 = 0U;
	int16_t x31 = 15879;

	t6 = (((x29|x30)|x31)+x32);

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	uint16_t x34 = 1986U;
	volatile uint16_t x35 = 42U;
	uint32_t x36 = UINT32_MAX;
	volatile uint64_t t7 = 0LLU;

	t7 = (((x33|x34)|x35)+x36);

	if (t7 != 4294967294LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x38 = -686842;
	static volatile int64_t x39 = 4LL;
	volatile int64_t x40 = INT64_MAX;
	int64_t t8 = 486430108LL;

	t8 = (((x37|x38)|x39)+x40);

	if (t8 != 9223372036854088965LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x44 = INT32_MAX;
	uint64_t t9 = 47940596388LLU;

	t9 = (((x41|x42)|x43)+x44);

	if (t9 != 2147483646LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 1015294LL;
	int8_t x46 = INT8_MAX;
	int8_t x47 = -3;
	static int64_t x48 = 1682477183169LL;

	t10 = (((x45|x46)|x47)+x48);

	if (t10 != 1682477183168LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x50 = UINT8_MAX;
	static uint32_t x52 = 24013U;

	t11 = (((x49|x50)|x51)+x52);

	if (t11 != 24012LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = INT16_MIN;
	int64_t x54 = 1308400124548066197LL;
	volatile int8_t x55 = INT8_MAX;
	static int8_t x56 = 0;
	static int64_t t12 = 600306975941806LL;

	t12 = (((x53|x54)|x55)+x56);

	if (t12 != -21505LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	static int16_t x60 = 1662;
	int64_t t13 = -48LL;

	t13 = (((x57|x58)|x59)+x60);

	if (t13 != 1661LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	volatile int16_t x64 = -1;
	int32_t t14 = -153221;

	t14 = (((x61|x62)|x63)+x64);

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	static int32_t x66 = -1;
	static int16_t x67 = INT16_MIN;
	static int8_t x68 = INT8_MAX;
	int32_t t15 = 280371581;

	t15 = (((x65|x66)|x67)+x68);

	if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	volatile int8_t x71 = INT8_MAX;
	static int64_t x72 = -1LL;
	int64_t t16 = -1LL;

	t16 = (((x69|x70)|x71)+x72);

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = 2;
	int32_t x74 = INT32_MAX;
	static int64_t x75 = 293072434656LL;
	uint16_t x76 = 1U;
	int64_t t17 = -17058084643444LL;

	t17 = (((x73|x74)|x75)+x76);

	if (t17 != 294205259776LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x77 = UINT8_MAX;
	static int64_t x78 = -1LL;
	static int8_t x79 = INT8_MIN;
	volatile int64_t t18 = -7629573LL;

	t18 = (((x77|x78)|x79)+x80);

	if (t18 != 31927972LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MIN;
	uint64_t t19 = 2055768869LLU;

	t19 = (((x81|x82)|x83)+x84);

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = 17U;
	static int8_t x86 = -1;
	static int64_t x87 = INT64_MIN;
	int64_t x88 = 68344103093LL;
	volatile int64_t t20 = 516294601LL;

	t20 = (((x85|x86)|x87)+x88);

	if (t20 != 68344103092LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	volatile uint8_t x90 = 21U;
	uint32_t x91 = 23929U;
	int32_t x92 = 21844262;
	int64_t t21 = 3548545326LL;

	t21 = (((x89|x90)|x91)+x92);

	if (t21 != -9223372036832907613LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 8U;
	int32_t x94 = 1;
	uint64_t x95 = 108LLU;
	int16_t x96 = -1;
	volatile uint64_t t22 = 487737788828LLU;

	t22 = (((x93|x94)|x95)+x96);

	if (t22 != 108LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t t23 = 3952261963400440632LLU;

	t23 = (((x97|x98)|x99)+x100);

	if (t23 != 18446744073709534205LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x102 = -4115;
	int64_t x103 = INT64_MAX;
	static volatile uint16_t x104 = 2U;

	t24 = (((x101|x102)|x103)+x104);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -24;
	uint8_t x107 = UINT8_MAX;
	int64_t x108 = 0LL;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x105|x106)|x107)+x108);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MAX;
	uint16_t x111 = 2U;
	uint32_t x112 = 16U;
	uint64_t t26 = 3792991LLU;

	t26 = (((x109|x110)|x111)+x112);

	if (t26 != 15LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -27748384229LL;
	uint16_t x114 = 62U;
	int64_t x115 = INT64_MAX;
	uint64_t x116 = UINT64_MAX;
	uint64_t t27 = 136161584300983LLU;

	t27 = (((x113|x114)|x115)+x116);

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = -1;
	volatile int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;

	t28 = (((x117|x118)|x119)+x120);

	if (t28 != -129) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 0U;
	int8_t x123 = -1;
	static int32_t x124 = 41251;
	int32_t t29 = -191028999;

	t29 = (((x121|x122)|x123)+x124);

	if (t29 != 41250) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = 73796268;
	volatile uint32_t x126 = UINT32_MAX;
	int64_t x128 = -1LL;
	volatile int64_t t30 = -161841045LL;

	t30 = (((x125|x126)|x127)+x128);

	if (t30 != 240473947592720382LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MAX;
	static int16_t x130 = INT16_MAX;
	uint32_t x131 = 54U;
	volatile int8_t x132 = INT8_MIN;

	t31 = (((x129|x130)|x131)+x132);

	if (t31 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 0U;
	int16_t x136 = -7104;
	uint64_t t32 = 75541LLU;

	t32 = (((x133|x134)|x135)+x136);

	if (t32 != 18446744073709544511LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 8198223862153624260LLU;
	static uint64_t x138 = 4748222752413LLU;
	int64_t x139 = INT64_MIN;
	int64_t x140 = -1LL;
	static uint64_t t33 = 548213066803910455LLU;

	t33 = (((x137|x138)|x139)+x140);

	if (t33 != 17421600645083659996LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = INT8_MAX;
	volatile int64_t x142 = -1LL;
	volatile int64_t x143 = 26709LL;
	uint16_t x144 = 37U;
	int64_t t34 = 606068LL;

	t34 = (((x141|x142)|x143)+x144);

	if (t34 != 36LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = INT8_MIN;

	t35 = (((x145|x146)|x147)+x148);

	if (t35 != -2147418241) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x150 = 34;

	t36 = (((x149|x150)|x151)+x152);

	if (t36 != -32513) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = UINT32_MAX;
	static int16_t x154 = 3;
	uint16_t x155 = 2U;
	static int32_t x156 = -1;
	uint32_t t37 = 29U;

	t37 = (((x153|x154)|x155)+x156);

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	int16_t x158 = 7566;
	uint16_t x160 = 7U;
	volatile int32_t t38 = -7524480;

	t38 = (((x157|x158)|x159)+x160);

	if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	uint32_t x162 = 3552U;
	int16_t x163 = 0;
	static uint32_t x164 = 0U;
	uint32_t t39 = UINT32_MAX;

	t39 = (((x161|x162)|x163)+x164);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 0LL;
	int16_t x166 = -9995;
	int64_t t40 = 0LL;

	t40 = (((x165|x166)|x167)+x168);

	if (t40 != 8LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = 1225LL;
	int64_t x171 = 30827878023925814LL;
	uint16_t x172 = 22218U;
	volatile int64_t t41 = 1326690217841LL;

	t41 = (((x169|x170)|x171)+x172);

	if (t41 != 22217LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = INT8_MAX;
	int16_t x174 = INT16_MIN;
	int64_t x175 = -180985285936068LL;
	volatile int8_t x176 = INT8_MAX;
	static int64_t t42 = -47681336811657919LL;

	t42 = (((x173|x174)|x175)+x176);

	if (t42 != -770LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MAX;
	volatile int64_t x180 = INT64_MAX;
	int64_t t43 = -54LL;

	t43 = (((x177|x178)|x179)+x180);

	if (t43 != 9223372036854743166LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MAX;
	volatile int32_t x183 = -1;
	static uint32_t x184 = UINT32_MAX;
	volatile uint64_t t44 = 88LLU;

	t44 = (((x181|x182)|x183)+x184);

	if (t44 != 4294967294LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x187 = INT32_MIN;
	uint64_t x188 = 174631740859679LLU;
	uint64_t t45 = 64718573LLU;

	t45 = (((x185|x186)|x187)+x188);

	if (t45 != 174631740859678LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = -1LL;
	uint64_t x191 = UINT64_MAX;
	volatile int32_t x192 = INT32_MIN;
	uint64_t t46 = 2945592927136741LLU;

	t46 = (((x189|x190)|x191)+x192);

	if (t46 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -1LL;
	static uint32_t x194 = 530609754U;
	uint8_t x195 = 7U;
	uint16_t x196 = 349U;
	volatile int64_t t47 = 9LL;

	t47 = (((x193|x194)|x195)+x196);

	if (t47 != 348LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 1214LLU;
	uint64_t t48 = 34335790637437525LLU;

	t48 = (((x197|x198)|x199)+x200);

	if (t48 != 9223372036854777115LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = -1LL;
	int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MAX;
	volatile int32_t x204 = INT32_MIN;
	volatile int64_t t49 = -6225658691162LL;

	t49 = (((x201|x202)|x203)+x204);

	if (t49 != -2147483649LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x206 = 9U;
	static int32_t x207 = INT32_MAX;
	int32_t x208 = 13212;
	static int64_t t50 = -44837109042720LL;

	t50 = (((x205|x206)|x207)+x208);

	if (t50 != -275296666242149LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = INT32_MAX;
	uint32_t x211 = 462806U;
	int32_t x212 = 15;
	uint32_t t51 = 824421427U;

	t51 = (((x209|x210)|x211)+x212);

	if (t51 != 14U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile uint8_t x214 = 1U;
	int64_t x215 = INT64_MIN;
	uint64_t x216 = 600171884558339171LLU;

	t52 = (((x213|x214)|x215)+x216);

	if (t52 != 9823543921413114980LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x217 = -12794697;
	uint64_t x218 = UINT64_MAX;
	volatile int32_t x219 = INT32_MIN;
	int32_t x220 = -1;
	uint64_t t53 = 66LLU;

	t53 = (((x217|x218)|x219)+x220);

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x221 = -1;
	uint16_t x223 = UINT16_MAX;
	static uint8_t x224 = 5U;
	int32_t t54 = -1;

	t54 = (((x221|x222)|x223)+x224);

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x225 = INT8_MIN;
	uint64_t x226 = 10326568208217LLU;
	volatile int64_t x227 = INT64_MAX;
	int32_t x228 = -191;
	volatile uint64_t t55 = 143574995606658745LLU;

	t55 = (((x225|x226)|x227)+x228);

	if (t55 != 18446744073709551424LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MIN;
	uint64_t t56 = 234508096529045309LLU;

	t56 = (((x229|x230)|x231)+x232);

	if (t56 != 52122LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x234 = INT8_MIN;
	static int32_t x235 = -1;
	volatile int32_t t57 = -49;

	t57 = (((x233|x234)|x235)+x236);

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 5LLU;
	volatile int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MIN;
	volatile uint64_t t58 = 4LLU;

	t58 = (((x237|x238)|x239)+x240);

	if (t58 != 9223372036854808702LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x241 = UINT8_MAX;
	static int64_t x242 = -6895511747457LL;
	int32_t x243 = -5483096;
	int8_t x244 = INT8_MAX;

	t59 = (((x241|x242)|x243)+x244);

	if (t59 != -207234LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = -1LL;
	int64_t x246 = 2105266211341881LL;

	t60 = (((x245|x246)|x247)+x248);

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x250 = INT64_MAX;
	static uint32_t x251 = UINT32_MAX;
	int8_t x252 = -1;

	t61 = (((x249|x250)|x251)+x252);

	if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x254 = INT32_MIN;
	int8_t x255 = -14;
	volatile uint32_t x256 = UINT32_MAX;
	int64_t t62 = -111775LL;

	t62 = (((x253|x254)|x255)+x256);

	if (t62 != 4294967281LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x258 = 1U;
	int32_t x259 = 1;
	int16_t x260 = INT16_MIN;
	int32_t t63 = 2478;

	t63 = (((x257|x258)|x259)+x260);

	if (t63 != -65535) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MAX;
	uint16_t x262 = 1612U;
	volatile int16_t x263 = -1;
	uint16_t x264 = 1808U;
	int32_t t64 = 26;

	t64 = (((x261|x262)|x263)+x264);

	if (t64 != 1807) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	static int8_t x267 = 0;
	uint64_t x268 = 86081077LLU;
	static volatile uint64_t t65 = 22816284673167LLU;

	t65 = (((x265|x266)|x267)+x268);

	if (t65 != 86081076LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = -13;
	int32_t x272 = -2849;
	static uint64_t t66 = 27LLU;

	t66 = (((x269|x270)|x271)+x272);

	if (t66 != 18446744073709548766LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = -123253381548441LL;
	int32_t x275 = -14243820;

	t67 = (((x273|x274)|x275)+x276);

	if (t67 != -16775LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	static uint32_t x278 = 6784439U;
	uint64_t x279 = 1LLU;
	uint8_t x280 = UINT8_MAX;
	volatile uint64_t t68 = 33247177388849LLU;

	t68 = (((x277|x278)|x279)+x280);

	if (t68 != 4294967478LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 19U;
	static int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	volatile uint32_t t69 = 2U;

	t69 = (((x285|x286)|x287)+x288);

	if (t69 != 254U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = -80928LL;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = 3;
	uint64_t x292 = 121490023269982269LLU;
	uint64_t t70 = 632006049127LLU;

	t70 = (((x289|x290)|x291)+x292);

	if (t70 != 121490023269901372LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x295 = INT32_MIN;
	volatile uint8_t x296 = UINT8_MAX;
	volatile uint64_t t71 = 26777253988LLU;

	t71 = (((x293|x294)|x295)+x296);

	if (t71 != 18446744073625397968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	static uint16_t x300 = UINT16_MAX;
	volatile uint64_t t72 = 369437018191LLU;

	t72 = (((x297|x298)|x299)+x300);

	if (t72 != 65534LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = 17838556916008612LL;
	int8_t x302 = INT8_MIN;
	int16_t x303 = 28;
	static uint16_t x304 = UINT16_MAX;
	volatile int64_t t73 = -14813729LL;

	t73 = (((x301|x302)|x303)+x304);

	if (t73 != 65467LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = INT64_MIN;
	static volatile int16_t x306 = -183;
	int8_t x307 = 48;
	volatile int8_t x308 = -5;
	static int64_t t74 = -3229733512918LL;

	t74 = (((x305|x306)|x307)+x308);

	if (t74 != -140LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x309 = 9LLU;
	static int32_t x311 = -380437607;
	uint16_t x312 = 19U;
	volatile uint64_t t75 = 1967921448LLU;

	t75 = (((x309|x310)|x311)+x312);

	if (t75 != 18LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MIN;
	static int16_t x315 = 0;
	uint16_t x316 = 24U;

	t76 = (((x313|x314)|x315)+x316);

	if (t76 != -32744LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -2129298758225104858LL;
	uint32_t x319 = 0U;
	volatile int64_t x320 = 106387400562LL;
	volatile int64_t t77 = 0LL;

	t77 = (((x317|x318)|x319)+x320);

	if (t77 != 106387400561LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = INT16_MIN;
	int64_t x324 = -1250986127279LL;

	t78 = (((x321|x322)|x323)+x324);

	if (t78 != -1250986127280LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = INT64_MIN;
	static int32_t x326 = -1;
	static int8_t x327 = INT8_MAX;
	volatile int64_t x328 = 2LL;
	int64_t t79 = 14LL;

	t79 = (((x325|x326)|x327)+x328);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x329 = 17U;
	volatile int32_t x330 = -1;
	int64_t x332 = 459605699LL;
	volatile int64_t t80 = -2977745LL;

	t80 = (((x329|x330)|x331)+x332);

	if (t80 != 459605698LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MAX;

	t81 = (((x333|x334)|x335)+x336);

	if (t81 != 18446744073704037622LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x338 = 0;
	int16_t x339 = -10529;
	static uint32_t x340 = 233931U;
	uint32_t t82 = 11891408U;

	t82 = (((x337|x338)|x339)+x340);

	if (t82 != 233930U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x343 = 0U;
	int16_t x344 = -1;
	uint64_t t83 = 1105327301556516LLU;

	t83 = (((x341|x342)|x343)+x344);

	if (t83 != 18446744073383276728LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -7158LL;
	int32_t x346 = 11500;
	static int16_t x347 = -1;
	static volatile uint64_t t84 = 16345957506LLU;

	t84 = (((x345|x346)|x347)+x348);

	if (t84 != 4LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x353 = -1LL;
	static uint16_t x354 = 197U;
	uint16_t x355 = 12409U;
	volatile int8_t x356 = 29;

	t85 = (((x353|x354)|x355)+x356);

	if (t85 != 28LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = UINT16_MAX;
	volatile int64_t t86 = -2543384264832137246LL;

	t86 = (((x357|x358)|x359)+x360);

	if (t86 != 65534LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x361 = 73U;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MAX;
	volatile int64_t x364 = -1LL;
	volatile uint64_t t87 = 7118045042552LLU;

	t87 = (((x361|x362)|x363)+x364);

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = -1;
	int16_t x367 = INT16_MIN;
	static int16_t x368 = 3;
	int32_t t88 = -3316206;

	t88 = (((x365|x366)|x367)+x368);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x369 = 2024024LLU;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -13252935;
	volatile uint64_t t89 = 11180LLU;

	t89 = (((x369|x370)|x371)+x372);

	if (t89 != 18446744073709549969LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 15240511964525LLU;
	int16_t x378 = -196;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = INT32_MIN;

	t90 = (((x377|x378)|x379)+x380);

	if (t90 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -502;
	uint32_t x382 = 24541U;
	uint32_t x383 = UINT32_MAX;

	t91 = (((x381|x382)|x383)+x384);

	if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = -1;
	static int64_t x388 = INT64_MIN;
	uint64_t t92 = 109LLU;

	t92 = (((x385|x386)|x387)+x388);

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MIN;
	static uint8_t x390 = UINT8_MAX;
	volatile int16_t x391 = -1;
	int64_t t93 = 263399012610LL;

	t93 = (((x389|x390)|x391)+x392);

	if (t93 != -32769LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = UINT8_MAX;
	volatile int32_t x394 = -11;
	uint16_t x395 = UINT16_MAX;
	uint16_t x396 = 179U;
	volatile int32_t t94 = 352;

	t94 = (((x393|x394)|x395)+x396);

	if (t94 != 178) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x397 = 12121492U;
	int32_t x398 = -1;
	volatile int8_t x400 = INT8_MAX;
	volatile uint32_t t95 = 1350230U;

	t95 = (((x397|x398)|x399)+x400);

	if (t95 != 126U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = -1;
	static int64_t x403 = INT64_MIN;
	volatile int64_t t96 = 99136LL;

	t96 = (((x401|x402)|x403)+x404);

	if (t96 != 254LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x405 = 10035;
	volatile uint16_t x406 = UINT16_MAX;
	int64_t x408 = -1LL;

	t97 = (((x405|x406)|x407)+x408);

	if (t97 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x410 = -60;
	volatile int8_t x411 = -1;
	static int64_t t98 = -1287958835650LL;

	t98 = (((x409|x410)|x411)+x412);

	if (t98 != -5215256LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x414 = 125U;
	int16_t x415 = INT16_MIN;
	int64_t x416 = -1LL;
	static volatile int64_t t99 = 50389972070LL;

	t99 = (((x413|x414)|x415)+x416);

	if (t99 != -2LL) { NG(); } else { ; }
	
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

