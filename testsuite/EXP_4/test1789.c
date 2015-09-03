#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
uint64_t x4 = UINT64_MAX;
int32_t t0 = 628104;
int32_t t2 = -3;
int16_t x24 = INT16_MIN;
volatile uint32_t x26 = 24151U;
int32_t t7 = -302;
static uint32_t x38 = UINT32_MAX;
int32_t t9 = 6974;
int8_t x42 = INT8_MAX;
int32_t t10 = 1201022;
int32_t x49 = 184;
static uint8_t x53 = 9U;
uint16_t x54 = 7074U;
int8_t x57 = INT8_MAX;
static uint64_t x62 = 101416475534LLU;
volatile uint8_t x63 = 6U;
volatile uint64_t x68 = 5LLU;
uint32_t x70 = 54513453U;
uint64_t x72 = UINT64_MAX;
int8_t x77 = INT8_MIN;
volatile int32_t x78 = INT32_MIN;
int8_t x82 = 4;
int16_t x87 = -6611;
int32_t t21 = -255;
int16_t x98 = INT16_MAX;
int32_t t24 = 6550495;
volatile uint16_t x103 = 43U;
uint8_t x112 = UINT8_MAX;
volatile int32_t x114 = -2;
volatile uint32_t x122 = 237238245U;
static int16_t x130 = INT16_MIN;
int32_t x131 = INT32_MIN;
volatile uint8_t x138 = 14U;
int32_t t35 = -26612;
uint16_t x146 = 5U;
int8_t x148 = -10;
uint32_t x152 = 65978754U;
int32_t t38 = 1;
static int32_t x158 = INT32_MIN;
int64_t x159 = INT64_MAX;
volatile uint32_t x160 = UINT32_MAX;
int8_t x168 = 54;
int64_t x177 = INT64_MIN;
int32_t x186 = INT32_MAX;
int8_t x189 = 1;
uint16_t x195 = 185U;
int16_t x200 = INT16_MIN;
uint32_t x204 = 252U;
static int16_t x210 = INT16_MIN;
uint64_t x212 = 28LLU;
int32_t x218 = -2581;
int32_t x219 = INT32_MIN;
volatile int8_t x227 = -2;
int8_t x234 = -1;
uint64_t x236 = 397LLU;
int32_t x239 = -61041;
volatile int64_t x240 = INT64_MIN;
uint16_t x242 = 10U;
volatile int32_t t62 = 59732;
uint8_t x255 = 6U;
int32_t t63 = 57529912;
int64_t x272 = -1LL;
int64_t x274 = -119404339916LL;
uint32_t x278 = 184818002U;
volatile int32_t x285 = -1;
volatile int32_t x287 = INT32_MIN;
uint16_t x295 = 4U;
int64_t x296 = -209698331743393379LL;
int32_t t73 = -945263689;
int32_t x298 = -1;
static int16_t x300 = INT16_MIN;
int16_t x302 = -1;
int64_t x306 = 28878917483379LL;
int16_t x307 = INT16_MIN;
volatile uint16_t x313 = 0U;
static int64_t x314 = INT64_MIN;
static volatile uint8_t x323 = 83U;
static int64_t x325 = -1LL;
volatile int64_t x326 = INT64_MAX;
volatile uint32_t x329 = 966128U;
volatile int32_t t82 = 3495;
int32_t x333 = INT32_MIN;
int32_t x335 = INT32_MIN;
int16_t x338 = -1;
int8_t x340 = 9;
volatile int32_t t84 = -69;
int32_t x341 = -442;
int32_t x343 = INT32_MAX;
int8_t x349 = -1;
int8_t x351 = 1;
volatile int32_t t87 = 333;
uint32_t x354 = 64888671U;
volatile int32_t t88 = 2000635;
volatile int8_t x362 = INT8_MIN;
volatile int8_t x364 = INT8_MIN;
static uint64_t x365 = 249488LLU;
static int32_t t91 = -3771511;
uint32_t x372 = UINT32_MAX;
uint16_t x373 = 6130U;
static int32_t t94 = -7964;
static uint8_t x382 = UINT8_MAX;
static uint16_t x383 = 5U;
int64_t x386 = -13614LL;
static int64_t x387 = 59LL;
static int16_t x400 = INT16_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x3 = INT8_MIN;

	t0 = (x1==(x2==(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int16_t x6 = INT16_MIN;
	int32_t x7 = 901;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 17674093;

	t1 = (x5==(x6==(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint8_t x10 = 123U;
	int16_t x11 = INT16_MIN;
	static volatile int64_t x12 = -3599LL;

	t2 = (x9==(x10==(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 0U;
	volatile int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MAX;
	static int64_t x16 = -1LL;
	int32_t t3 = 41;

	t3 = (x13==(x14==(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x18 = 0;
	volatile uint8_t x19 = 1U;
	static uint32_t x20 = 2785U;
	volatile int32_t t4 = -473800487;

	t4 = (x17==(x18==(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = -1;
	uint64_t x23 = UINT64_MAX;
	static int32_t t5 = 0;

	t5 = (x21==(x22==(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int16_t x27 = -225;
	volatile uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 551667;

	t6 = (x25==(x26==(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -1;
	int32_t x32 = 7;

	t7 = (x29==(x30==(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int32_t x34 = 949;
	int8_t x35 = 51;
	int64_t x36 = -1LL;
	volatile int32_t t8 = -1300;

	t8 = (x33==(x34==(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -18;
	volatile int32_t x39 = INT32_MIN;
	static uint8_t x40 = 2U;

	t9 = (x37==(x38==(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x43 = -1;
	static volatile uint32_t x44 = 46905058U;

	t10 = (x41==(x42==(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 2070365U;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = -9706354;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -248;

	t11 = (x45==(x46==(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	uint64_t x51 = 2346366LLU;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 2273606;

	t12 = (x49==(x50==(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = -1;
	static int16_t x56 = -1;
	volatile int32_t t13 = -12;

	t13 = (x53==(x54==(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	static volatile int16_t x59 = -3216;
	volatile int8_t x60 = 51;
	static int32_t t14 = 0;

	t14 = (x57==(x58==(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 72U;
	volatile uint16_t x64 = 2U;
	volatile int32_t t15 = 3454;

	t15 = (x61==(x62==(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	uint32_t x66 = 436069U;
	static int64_t x67 = INT64_MIN;
	static volatile int32_t t16 = 16166655;

	t16 = (x65==(x66==(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int8_t x71 = 0;
	int32_t t17 = -4;

	t17 = (x69==(x70==(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile uint64_t x74 = UINT64_MAX;
	int16_t x75 = -1;
	uint8_t x76 = 1U;
	static volatile int32_t t18 = -898;

	t18 = (x73==(x74==(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x79 = -8413;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -13;

	t19 = (x77==(x78==(x79&x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static int8_t x83 = INT8_MIN;
	static volatile uint16_t x84 = UINT16_MAX;
	int32_t t20 = -6;

	t20 = (x81==(x82==(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	int32_t x88 = INT32_MIN;

	t21 = (x85==(x86==(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 7079749;

	t22 = (x89==(x90==(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 28184169U;
	volatile int64_t x94 = INT64_MIN;
	static volatile uint64_t x95 = 1238346852LLU;
	uint8_t x96 = 26U;
	int32_t t23 = -1;

	t23 = (x93==(x94==(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 14166792195LLU;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MAX;

	t24 = (x97==(x98==(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -1;
	int64_t x102 = 327200014166218468LL;
	static volatile uint16_t x104 = UINT16_MAX;
	int32_t t25 = -5553842;

	t25 = (x101==(x102==(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = INT8_MAX;
	volatile int64_t x107 = INT64_MIN;
	static int8_t x108 = -17;
	volatile int32_t t26 = -1963;

	t26 = (x105==(x106==(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	static uint64_t x110 = 2609690989254699888LLU;
	int64_t x111 = INT64_MIN;
	volatile int32_t t27 = 0;

	t27 = (x109==(x110==(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -122;
	static volatile int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 688;

	t28 = (x113==(x114==(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	volatile uint8_t x118 = UINT8_MAX;
	int32_t x119 = -77;
	int16_t x120 = -8563;
	volatile int32_t t29 = -457045;

	t29 = (x117==(x118==(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	static volatile int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = 8U;
	int32_t t30 = 420118092;

	t30 = (x121==(x122==(x123&x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MAX;
	uint16_t x126 = 3387U;
	int64_t x127 = -1LL;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -225258;

	t31 = (x125==(x126==(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -13;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = -524488446;

	t32 = (x129==(x130==(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint8_t x134 = 63U;
	int16_t x135 = -1;
	int16_t x136 = -33;
	int32_t t33 = 47;

	t33 = (x133==(x134==(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x139 = UINT8_MAX;
	int8_t x140 = INT8_MAX;
	volatile int32_t t34 = 52000;

	t34 = (x137==(x138==(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 469U;
	uint64_t x142 = 972273LLU;
	int64_t x143 = INT64_MIN;
	volatile uint8_t x144 = UINT8_MAX;

	t35 = (x141==(x142==(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1237U;
	int8_t x147 = INT8_MIN;
	int32_t t36 = 1;

	t36 = (x145==(x146==(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = 120;
	int64_t x150 = INT64_MAX;
	volatile int8_t x151 = -9;
	static int32_t t37 = -9630;

	t37 = (x149==(x150==(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 25U;
	static uint32_t x154 = 18739U;
	uint32_t x155 = 260292U;
	static uint8_t x156 = UINT8_MAX;

	t38 = (x153==(x154==(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -3;
	static int32_t t39 = -3;

	t39 = (x157==(x158==(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 278278;
	uint8_t x162 = 52U;
	int16_t x163 = INT16_MAX;
	volatile uint64_t x164 = 474232921LLU;
	int32_t t40 = 113851;

	t40 = (x161==(x162==(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 1U;
	uint8_t x166 = 6U;
	uint32_t x167 = 1662096U;
	volatile int32_t t41 = -265784486;

	t41 = (x165==(x166==(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	volatile uint16_t x170 = 1341U;
	int32_t x171 = INT32_MAX;
	uint16_t x172 = 1U;
	volatile int32_t t42 = -10728;

	t42 = (x169==(x170==(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int64_t x174 = INT64_MAX;
	volatile uint16_t x175 = UINT16_MAX;
	volatile uint16_t x176 = 6U;
	volatile int32_t t43 = 79;

	t43 = (x173==(x174==(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	static int16_t x179 = INT16_MIN;
	int64_t x180 = 382185259226919137LL;
	int32_t t44 = 336;

	t44 = (x177==(x178==(x179&x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile int32_t x182 = 14017;
	int32_t x183 = INT32_MIN;
	int16_t x184 = 3484;
	int32_t t45 = -38066;

	t45 = (x181==(x182==(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 53504748U;
	int32_t x187 = 336111;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = -2;

	t46 = (x185==(x186==(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = -1LL;
	uint16_t x191 = 1796U;
	volatile uint16_t x192 = 3U;
	static volatile int32_t t47 = -718;

	t47 = (x189==(x190==(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 32394U;
	uint8_t x194 = 19U;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 9;

	t48 = (x193==(x194==(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -1;
	volatile int32_t x198 = -10;
	int64_t x199 = INT64_MAX;
	static volatile int32_t t49 = -5286687;

	t49 = (x197==(x198==(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = -122760691;
	static int8_t x202 = -1;
	int16_t x203 = 3;
	int32_t t50 = 83539510;

	t50 = (x201==(x202==(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = UINT32_MAX;
	static uint8_t x206 = 0U;
	int32_t x207 = 110944;
	uint64_t x208 = UINT64_MAX;
	int32_t t51 = 110778940;

	t51 = (x205==(x206==(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 9939U;
	int16_t x211 = -1;
	static int32_t t52 = -64593827;

	t52 = (x209==(x210==(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	static int8_t x214 = INT8_MIN;
	uint16_t x215 = 149U;
	static uint32_t x216 = UINT32_MAX;
	volatile int32_t t53 = 118;

	t53 = (x213==(x214==(x215&x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 28U;
	volatile int8_t x220 = INT8_MIN;
	static volatile int32_t t54 = 370;

	t54 = (x217==(x218==(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	int16_t x222 = -1;
	volatile int8_t x223 = INT8_MIN;
	static int64_t x224 = INT64_MAX;
	volatile int32_t t55 = -41803156;

	t55 = (x221==(x222==(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	int8_t x226 = -8;
	static volatile int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -179;

	t56 = (x225==(x226==(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	static uint64_t x230 = 59441099LLU;
	uint64_t x231 = 299LLU;
	int16_t x232 = 323;
	int32_t t57 = 326;

	t57 = (x229==(x230==(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int64_t x235 = -1LL;
	int32_t t58 = 5272981;

	t58 = (x233==(x234==(x235&x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 85755946U;
	int32_t x238 = INT32_MIN;
	int32_t t59 = -88412;

	t59 = (x237==(x238==(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 1897897586U;
	int16_t x243 = INT16_MIN;
	int32_t x244 = 1;
	static int32_t t60 = -63783;

	t60 = (x241==(x242==(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 373282LLU;
	static uint64_t x246 = UINT64_MAX;
	static volatile int32_t x247 = -1;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 122;

	t61 = (x245==(x246==(x247&x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -35;
	static uint32_t x250 = 37452U;
	int8_t x251 = 0;
	int16_t x252 = INT16_MAX;

	t62 = (x249==(x250==(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	static volatile int16_t x254 = -1;
	uint32_t x256 = 252U;

	t63 = (x253==(x254==(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	uint64_t x258 = 3696LLU;
	uint8_t x259 = 0U;
	int8_t x260 = INT8_MIN;
	int32_t t64 = -318004;

	t64 = (x257==(x258==(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x262 = -54162700364075LL;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = -1;
	static volatile int32_t t65 = -1;

	t65 = (x261==(x262==(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MAX;
	volatile int8_t x266 = INT8_MAX;
	volatile int16_t x267 = INT16_MIN;
	int8_t x268 = 30;
	volatile int32_t t66 = -1167;

	t66 = (x265==(x266==(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	int16_t x271 = -1;
	volatile int32_t t67 = 11;

	t67 = (x269==(x270==(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = -77;
	static int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 23;

	t68 = (x273==(x274==(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	static uint8_t x279 = UINT8_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 27338432;

	t69 = (x277==(x278==(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 56702924LL;
	int8_t x282 = INT8_MIN;
	int16_t x283 = -4;
	static volatile int8_t x284 = INT8_MIN;
	static int32_t t70 = 10;

	t70 = (x281==(x282==(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x286 = 28LL;
	int16_t x288 = 3774;
	int32_t t71 = -2798998;

	t71 = (x285==(x286==(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MIN;
	int8_t x291 = 1;
	int64_t x292 = INT64_MAX;
	int32_t t72 = -533196824;

	t72 = (x289==(x290==(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = 0;
	uint64_t x294 = 10411LLU;

	t73 = (x293==(x294==(x295&x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	uint16_t x299 = UINT16_MAX;
	volatile int32_t t74 = 3809431;

	t74 = (x297==(x298==(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -3971;
	volatile uint8_t x303 = 13U;
	int64_t x304 = INT64_MAX;
	volatile int32_t t75 = 78;

	t75 = (x301==(x302==(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -1;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 1;

	t76 = (x305==(x306==(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -46442;
	volatile int64_t x310 = INT64_MIN;
	volatile uint64_t x311 = 106203529925999101LLU;
	volatile int16_t x312 = INT16_MAX;
	int32_t t77 = -148;

	t77 = (x309==(x310==(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 1590428;

	t78 = (x313==(x314==(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	static int8_t x318 = -1;
	static volatile uint64_t x319 = 22145216297422407LLU;
	int8_t x320 = INT8_MIN;
	int32_t t79 = 351039629;

	t79 = (x317==(x318==(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x322 = -1;
	int8_t x324 = -1;
	int32_t t80 = 320004029;

	t80 = (x321==(x322==(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x327 = 61639433;
	static uint16_t x328 = UINT16_MAX;
	int32_t t81 = 541;

	t81 = (x325==(x326==(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 2014816475LLU;
	static volatile int8_t x331 = INT8_MIN;
	volatile int64_t x332 = INT64_MIN;

	t82 = (x329==(x330==(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -1;
	static int64_t x336 = INT64_MIN;
	int32_t t83 = 0;

	t83 = (x333==(x334==(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MAX;
	uint32_t x339 = UINT32_MAX;

	t84 = (x337==(x338==(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x342 = -1962968721LL;
	static int8_t x344 = INT8_MAX;
	static volatile int32_t t85 = 0;

	t85 = (x341==(x342==(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 10U;
	static int8_t x348 = 0;
	volatile int32_t t86 = -114467995;

	t86 = (x345==(x346==(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = 9;
	static int32_t x352 = INT32_MIN;

	t87 = (x349==(x350==(x351&x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	static volatile uint8_t x355 = UINT8_MAX;
	static volatile int32_t x356 = 2263;

	t88 = (x353==(x354==(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MAX;
	uint64_t x358 = 290674980LLU;
	static int64_t x359 = INT64_MAX;
	uint64_t x360 = 5692LLU;
	int32_t t89 = -1;

	t89 = (x357==(x358==(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 488595718146LLU;
	static uint8_t x363 = 7U;
	static int32_t t90 = -809272989;

	t90 = (x361==(x362==(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = -11702770;
	int8_t x367 = INT8_MIN;
	static int64_t x368 = INT64_MIN;

	t91 = (x365==(x366==(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	volatile int16_t x370 = -336;
	int64_t x371 = INT64_MIN;
	int32_t t92 = -1;

	t92 = (x369==(x370==(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x374 = INT8_MAX;
	static uint64_t x375 = 1085020698LLU;
	volatile uint64_t x376 = UINT64_MAX;
	volatile int32_t t93 = 55702727;

	t93 = (x373==(x374==(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = 1364;
	int64_t x379 = -1LL;
	volatile int8_t x380 = INT8_MIN;

	t94 = (x377==(x378==(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint32_t x384 = 62U;
	int32_t t95 = -1;

	t95 = (x381==(x382==(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = 42U;
	int16_t x388 = INT16_MIN;
	int32_t t96 = -14933;

	t96 = (x385==(x386==(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = UINT16_MAX;
	int8_t x390 = -14;
	static int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 172942586;

	t97 = (x389==(x390==(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 0U;
	int32_t x394 = -1;
	uint8_t x395 = 1U;
	uint64_t x396 = 27036366398494LLU;
	int32_t t98 = -1;

	t98 = (x393==(x394==(x395&x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 384LLU;
	uint32_t x398 = UINT32_MAX;
	volatile int16_t x399 = INT16_MIN;
	static int32_t t99 = 70;

	t99 = (x397==(x398==(x399&x400)));

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

