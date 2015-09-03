#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 60;
volatile int32_t x6 = 1185;
int8_t x8 = -53;
volatile uint64_t t1 = 148556768600085780LLU;
static int8_t x11 = 9;
int32_t t2 = -27234;
uint32_t x16 = 123516364U;
int32_t x17 = INT32_MIN;
uint32_t x19 = UINT32_MAX;
int64_t x29 = -2970631910144100767LL;
uint32_t x32 = UINT32_MAX;
volatile int64_t x35 = 23LL;
volatile uint8_t x37 = UINT8_MAX;
int32_t x41 = -46047728;
uint64_t x43 = 7052LLU;
uint32_t x47 = 295766U;
volatile uint32_t t11 = 6751U;
volatile uint32_t t12 = 428U;
int64_t t13 = 49721LL;
volatile uint64_t x62 = 73063506LLU;
int64_t t15 = -24699789LL;
static int32_t x65 = INT32_MIN;
volatile int8_t x67 = INT8_MIN;
static int8_t x71 = INT8_MIN;
static uint16_t x73 = 246U;
uint16_t x86 = 4U;
static volatile uint16_t x101 = 31264U;
int8_t x103 = INT8_MIN;
static uint8_t x107 = 54U;
volatile int32_t t26 = 22;
int16_t x112 = -1;
volatile int32_t x117 = 40;
uint32_t t28 = 105U;
uint64_t x121 = UINT64_MAX;
int8_t x130 = INT8_MIN;
int32_t x135 = -13166;
static int64_t x136 = INT64_MIN;
volatile int32_t t33 = -115722;
uint16_t x142 = 113U;
int64_t x157 = -1LL;
int8_t x161 = 1;
int32_t t42 = 1869402;
static uint64_t x177 = 1733573245891LLU;
volatile uint64_t x188 = UINT64_MAX;
int8_t x194 = -21;
volatile uint64_t t46 = 1475736713511369052LLU;
int32_t x197 = INT32_MIN;
uint32_t t47 = 2924U;
volatile int8_t x206 = 0;
uint64_t x212 = 816085275328LLU;
int64_t x213 = INT64_MIN;
uint32_t x214 = 1617U;
static int32_t x216 = INT32_MAX;
int32_t x220 = -2759699;
int16_t x223 = 2444;
uint64_t x231 = 1978925121119505720LLU;
volatile uint8_t x233 = 0U;
static uint8_t x235 = 1U;
volatile uint8_t x237 = UINT8_MAX;
int8_t x240 = INT8_MIN;
uint32_t x245 = UINT32_MAX;
uint32_t t59 = 1890U;
int64_t x249 = -1LL;
volatile int64_t x250 = -79373177565025LL;
volatile int32_t t61 = -17;
uint64_t t63 = 41138233433894068LLU;
int8_t x274 = 7;
int32_t x277 = 321347;
static uint32_t x281 = 7U;
volatile int8_t x283 = -3;
volatile uint32_t x284 = 65110U;
volatile uint64_t x285 = 133932321102LLU;
int16_t x286 = INT16_MIN;
static uint64_t t68 = 82LLU;
uint32_t x289 = 2U;
int8_t x290 = -1;
int16_t x292 = INT16_MIN;
int16_t x305 = -1;
uint64_t x308 = 17LLU;
uint16_t x311 = 1706U;
volatile int32_t t74 = 291855678;
int32_t x318 = INT32_MIN;
int16_t x324 = -204;
uint8_t x328 = 115U;
int8_t x332 = INT8_MAX;
static uint64_t t78 = UINT64_MAX;
int32_t x338 = 1413244;
static int32_t t80 = 1794913;
volatile uint64_t x345 = 37LLU;
int32_t t82 = 5967411;
static uint16_t x351 = 960U;
volatile uint8_t x359 = 6U;
uint8_t x360 = UINT8_MAX;
uint64_t x361 = 0LLU;
volatile int16_t x363 = 1;
volatile uint16_t x365 = 32118U;
static uint16_t x369 = 780U;
static int8_t x371 = INT8_MIN;
volatile uint64_t t89 = 3561968677824785853LLU;
uint8_t x381 = 17U;
int8_t x384 = -1;
int16_t x387 = -157;
volatile uint64_t t93 = 28446569540790LLU;
int8_t x400 = -5;
volatile int32_t t95 = -156;
static uint32_t x401 = UINT32_MAX;
static int16_t x420 = INT16_MIN;


void f0(void) {
	int16_t x1 = 13287;
	int16_t x3 = -1;
	volatile int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 439431;

	t0 = ((x1==x2)-(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	uint64_t x7 = 19LLU;

	t1 = ((x5==x6)-(x7%x8));

	if (t1 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static uint64_t x10 = 446LLU;
	int16_t x12 = INT16_MIN;

	t2 = ((x9==x10)-(x11%x12));

	if (t2 != -9) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int64_t x14 = INT64_MIN;
	volatile int8_t x15 = INT8_MIN;
	uint32_t t3 = 13U;

	t3 = ((x13==x14)-(x15%x16));

	if (t3 != 4199556504U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MAX;
	static volatile int64_t x20 = 695304LL;
	volatile int64_t t4 = -24497126389003LL;

	t4 = ((x17==x18)-(x19%x20));

	if (t4 != -74487LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static volatile int8_t x22 = -14;
	static int8_t x23 = INT8_MAX;
	int8_t x24 = -1;
	static int32_t t5 = -6;

	t5 = ((x21==x22)-(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -3;
	int8_t x26 = -1;
	volatile int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -22635;

	t6 = ((x25==x26)-(x27%x28));

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	int16_t x31 = -42;
	volatile uint32_t t7 = 3037U;

	t7 = ((x29==x30)-(x31%x32));

	if (t7 != 42U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -210929826;
	int32_t x34 = -1;
	static int32_t x36 = INT32_MAX;
	int64_t t8 = -30886445349LL;

	t8 = ((x33==x34)-(x35%x36));

	if (t8 != -23LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = 5U;
	int16_t x39 = 1736;
	uint32_t x40 = 135355202U;
	uint32_t t9 = 40408067U;

	t9 = ((x37==x38)-(x39%x40));

	if (t9 != 4294965560U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = 274189323444749LL;
	int8_t x44 = -1;
	uint64_t t10 = 6797LLU;

	t10 = ((x41==x42)-(x43%x44));

	if (t10 != 18446744073709544564LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -5;
	int64_t x46 = INT64_MAX;
	static uint16_t x48 = 7U;

	t11 = ((x45==x46)-(x47%x48));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	uint8_t x50 = UINT8_MAX;
	static volatile uint32_t x51 = 399U;
	uint32_t x52 = 4005079U;

	t12 = ((x49==x50)-(x51%x52));

	if (t12 != 4294966897U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int8_t x54 = -1;
	int64_t x55 = 8LL;
	int64_t x56 = INT64_MIN;

	t13 = ((x53==x54)-(x55%x56));

	if (t13 != -7LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	uint16_t x58 = 26U;
	int32_t x59 = INT32_MAX;
	static int16_t x60 = -6;
	int32_t t14 = 745945;

	t14 = ((x57==x58)-(x59%x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MIN;

	t15 = ((x61==x62)-(x63%x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = INT16_MIN;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 117699812;

	t16 = ((x65==x66)-(x67%x68));

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int64_t x70 = -50LL;
	volatile uint32_t x72 = UINT32_MAX;
	volatile uint32_t t17 = 20511U;

	t17 = ((x69==x70)-(x71%x72));

	if (t17 != 128U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -4;
	int32_t x75 = INT32_MAX;
	int64_t x76 = -70060LL;
	volatile int64_t t18 = -19238079LL;

	t18 = ((x73==x74)-(x75%x76));

	if (t18 != -4527LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MAX;
	uint32_t x79 = 15456406U;
	int32_t x80 = INT32_MIN;
	static volatile uint32_t t19 = 498237328U;

	t19 = ((x77==x78)-(x79%x80));

	if (t19 != 4279510890U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -2;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = 1;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = ((x81==x82)-(x83%x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -83542591;
	static uint64_t x87 = 19465664200LLU;
	int8_t x88 = -14;
	uint64_t t21 = 7048930719485238532LLU;

	t21 = ((x85==x86)-(x87%x88));

	if (t21 != 18446744054243887416LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 1731U;
	uint8_t x90 = 0U;
	int8_t x91 = INT8_MIN;
	int16_t x92 = -11891;
	volatile int32_t t22 = 327390695;

	t22 = ((x89==x90)-(x91%x92));

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	volatile uint64_t x94 = 60351397258920LLU;
	uint8_t x95 = UINT8_MAX;
	uint32_t x96 = 708U;
	uint32_t t23 = 990092233U;

	t23 = ((x93==x94)-(x95%x96));

	if (t23 != 4294967041U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 55;
	volatile int16_t x98 = INT16_MIN;
	static int8_t x99 = -1;
	int64_t x100 = -1231LL;
	volatile int64_t t24 = 3122LL;

	t24 = ((x97==x98)-(x99%x100));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 4488;
	uint16_t x104 = 265U;
	int32_t t25 = 182773244;

	t25 = ((x101==x102)-(x103%x104));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int8_t x106 = INT8_MIN;
	int32_t x108 = -1;

	t26 = ((x105==x106)-(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = -1;
	int16_t x111 = INT16_MIN;
	static volatile int32_t t27 = 328281;

	t27 = ((x109==x110)-(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	static uint16_t x120 = 47U;

	t28 = ((x117==x118)-(x119%x120));

	if (t28 != 4294967255U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x122 = 2U;
	uint32_t x123 = 3792U;
	int8_t x124 = INT8_MIN;
	uint32_t t29 = 5717U;

	t29 = ((x121==x122)-(x123%x124));

	if (t29 != 4294963504U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = -14;
	int16_t x126 = INT16_MIN;
	volatile int64_t x127 = -1LL;
	uint8_t x128 = 6U;
	int64_t t30 = 26652LL;

	t30 = ((x125==x126)-(x127%x128));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	int16_t x131 = -1;
	volatile int32_t x132 = 16;
	static volatile int32_t t31 = -58583;

	t31 = ((x129==x130)-(x131%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 44LLU;
	int8_t x134 = INT8_MIN;
	static volatile int64_t t32 = 120993LL;

	t32 = ((x133==x134)-(x135%x136));

	if (t32 != 13166LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	static uint16_t x138 = 461U;
	int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MIN;

	t33 = ((x137==x138)-(x139%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	int64_t x144 = 1670LL;
	int64_t t34 = 15232080141377751LL;

	t34 = ((x141==x142)-(x143%x144));

	if (t34 != 128LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x145 = UINT16_MAX;
	volatile int16_t x146 = INT16_MIN;
	uint32_t x147 = 1578270826U;
	int32_t x148 = INT32_MIN;
	static uint32_t t35 = 99U;

	t35 = ((x145==x146)-(x147%x148));

	if (t35 != 2716696470U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = 5758U;
	uint32_t x150 = 11U;
	static uint16_t x151 = 3U;
	uint32_t x152 = 81025195U;
	volatile uint32_t t36 = 31130623U;

	t36 = ((x149==x150)-(x151%x152));

	if (t36 != 4294967293U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = 0U;
	volatile int32_t x154 = INT32_MIN;
	uint8_t x155 = 20U;
	int16_t x156 = 2;
	int32_t t37 = 0;

	t37 = ((x153==x154)-(x155%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x158 = -160120152;
	int16_t x159 = 1;
	volatile uint32_t x160 = 1290U;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = ((x157==x158)-(x159%x160));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	uint16_t x163 = UINT16_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t39 = -47;

	t39 = ((x161==x162)-(x163%x164));

	if (t39 != -65535) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = -1;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t40 = 0;

	t40 = ((x165==x166)-(x167%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x169 = -19;
	uint32_t x170 = 20766U;
	static int16_t x171 = -1;
	int64_t x172 = INT64_MAX;
	static volatile int64_t t41 = 130984933504LL;

	t41 = ((x169==x170)-(x171%x172));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x173 = 479548LLU;
	static int8_t x174 = 3;
	int32_t x175 = INT32_MAX;
	static volatile int32_t x176 = INT32_MAX;

	t42 = ((x173==x174)-(x175%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x178 = -1;
	volatile int32_t x179 = INT32_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t43 = 4456308489755339037LLU;

	t43 = ((x177==x178)-(x179%x180));

	if (t43 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x185 = UINT16_MAX;
	static uint8_t x186 = 12U;
	uint32_t x187 = 68U;
	volatile uint64_t t44 = 303941290729255158LLU;

	t44 = ((x185==x186)-(x187%x188));

	if (t44 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 10U;
	int8_t x190 = -1;
	volatile uint32_t x191 = 15023484U;
	int16_t x192 = -15806;
	uint32_t t45 = 855U;

	t45 = ((x189==x190)-(x191%x192));

	if (t45 != 4279943812U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -1;
	static uint64_t x195 = 271884822064032684LLU;
	int32_t x196 = INT32_MIN;

	t46 = ((x193==x194)-(x195%x196));

	if (t46 != 18174859251645518932LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = -397565339;
	static volatile uint32_t x199 = UINT32_MAX;
	int8_t x200 = INT8_MAX;

	t47 = ((x197==x198)-(x199%x200));

	if (t47 != 4294967281U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MAX;
	static uint8_t x202 = 57U;
	uint64_t x203 = 17174408999LLU;
	uint8_t x204 = UINT8_MAX;
	static volatile uint64_t t48 = 12319972172LLU;

	t48 = ((x201==x202)-(x203%x204));

	if (t48 != 18446744073709551482LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	int8_t x207 = -19;
	static int64_t x208 = INT64_MIN;
	int64_t t49 = -70199480224312572LL;

	t49 = ((x205==x206)-(x207%x208));

	if (t49 != 19LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	int16_t x210 = -1;
	static int8_t x211 = 0;
	volatile uint64_t t50 = 0LLU;

	t50 = ((x209==x210)-(x211%x212));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x215 = UINT16_MAX;
	volatile int32_t t51 = 3252082;

	t51 = ((x213==x214)-(x215%x216));

	if (t51 != -65535) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = 8138909;
	static int64_t x219 = -5598673LL;
	static int64_t t52 = -249006420LL;

	t52 = ((x217==x218)-(x219%x220));

	if (t52 != 79275LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x221 = -4095736LL;
	volatile uint8_t x222 = 41U;
	int32_t x224 = -1;
	int32_t t53 = -3661525;

	t53 = ((x221==x222)-(x223%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	static volatile int8_t x227 = -4;
	static int32_t x228 = 1352;
	volatile int32_t t54 = -5191282;

	t54 = ((x225==x226)-(x227%x228));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x229 = 3U;
	int8_t x230 = -1;
	static int32_t x232 = -1;
	uint64_t t55 = 14521LLU;

	t55 = ((x229==x230)-(x231%x232));

	if (t55 != 16467818952590045896LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x234 = INT64_MAX;
	static volatile uint32_t x236 = 6036U;
	uint32_t t56 = UINT32_MAX;

	t56 = ((x233==x234)-(x235%x236));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = INT32_MIN;
	volatile int32_t x239 = 284974;
	volatile int32_t t57 = -90317784;

	t57 = ((x237==x238)-(x239%x240));

	if (t57 != -46) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = 1529;
	static int8_t x242 = -1;
	volatile int8_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t58 = 1876531;

	t58 = ((x241==x242)-(x243%x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = -1LL;
	uint8_t x247 = UINT8_MAX;
	uint32_t x248 = UINT32_MAX;

	t59 = ((x245==x246)-(x247%x248));

	if (t59 != 4294967041U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x251 = 23006U;
	int64_t x252 = INT64_MAX;
	int64_t t60 = -2432053562582479LL;

	t60 = ((x249==x250)-(x251%x252));

	if (t60 != -23006LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x253 = -1;
	volatile int16_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -3495920;

	t61 = ((x253==x254)-(x255%x256));

	if (t61 != 32769) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = -1;
	int8_t x262 = 1;
	int8_t x263 = INT8_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	volatile int32_t t62 = 1053;

	t62 = ((x261==x262)-(x263%x264));

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = 1;
	static int64_t x266 = -4924734223670672LL;
	volatile uint64_t x267 = 93LLU;
	static int32_t x268 = INT32_MIN;

	t63 = ((x265==x266)-(x267%x268));

	if (t63 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x269 = 1U;
	uint8_t x270 = 1U;
	volatile int16_t x271 = INT16_MAX;
	uint64_t x272 = 3LLU;
	volatile uint64_t t64 = 104895352393585592LLU;

	t64 = ((x269==x270)-(x271%x272));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -1LL;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t x276 = -57332004925LL;
	static int64_t t65 = 18788LL;

	t65 = ((x273==x274)-(x275%x276));

	if (t65 != -255LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x278 = -1;
	volatile uint64_t x279 = 2LLU;
	uint16_t x280 = 1284U;
	uint64_t t66 = 28787220514LLU;

	t66 = ((x277==x278)-(x279%x280));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = 48;
	volatile uint32_t t67 = 35627775U;

	t67 = ((x281==x282)-(x283%x284));

	if (t67 != 4294916043U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x287 = INT32_MIN;
	static uint64_t x288 = 6116704972LLU;

	t68 = ((x285==x286)-(x287%x288));

	if (t68 != 18446744072629166324LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x291 = 22U;
	static volatile int32_t t69 = -833928;

	t69 = ((x289==x290)-(x291%x292));

	if (t69 != -22) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = 7;
	int32_t x294 = 130964944;
	uint32_t x295 = 21U;
	int16_t x296 = -87;
	static uint32_t t70 = 1498061U;

	t70 = ((x293==x294)-(x295%x296));

	if (t70 != 4294967275U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = -1;
	uint16_t x298 = 53U;
	int16_t x299 = INT16_MAX;
	static uint32_t x300 = 101U;
	uint32_t t71 = 36959U;

	t71 = ((x297==x298)-(x299%x300));

	if (t71 != 4294967253U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x301 = UINT32_MAX;
	uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 1843LLU;
	int8_t x304 = INT8_MIN;
	volatile uint64_t t72 = 92253887448300213LLU;

	t72 = ((x301==x302)-(x303%x304));

	if (t72 != 18446744073709549774LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = -50;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x305==x306)-(x307%x308));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 106929463LLU;
	uint16_t x310 = UINT16_MAX;
	int16_t x312 = INT16_MIN;

	t74 = ((x309==x310)-(x311%x312));

	if (t74 != -1706) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = -4;
	static int32_t x319 = INT32_MIN;
	volatile uint32_t x320 = 1U;
	uint32_t t75 = 3715U;

	t75 = ((x317==x318)-(x319%x320));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x321 = INT64_MIN;
	int64_t x322 = 88471207351027083LL;
	int16_t x323 = INT16_MAX;
	int32_t t76 = -6709473;

	t76 = ((x321==x322)-(x323%x324));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = INT16_MIN;
	int32_t t77 = -1;

	t77 = ((x325==x326)-(x327%x328));

	if (t77 != 108) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = UINT64_MAX;
	static uint32_t x330 = 165454U;
	static uint64_t x331 = UINT64_MAX;

	t78 = ((x329==x330)-(x331%x332));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MAX;
	static int16_t x336 = -6526;
	volatile int32_t t79 = 100;

	t79 = ((x333==x334)-(x335%x336));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -1;
	uint8_t x339 = 7U;
	int16_t x340 = 167;

	t80 = ((x337==x338)-(x339%x340));

	if (t80 != -7) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = INT64_MIN;
	static int16_t x342 = 556;
	int32_t x343 = INT32_MIN;
	volatile int16_t x344 = INT16_MAX;
	int32_t t81 = 930330355;

	t81 = ((x341==x342)-(x343%x344));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x346 = -6;
	int8_t x347 = INT8_MAX;
	static int8_t x348 = INT8_MIN;

	t82 = ((x345==x346)-(x347%x348));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	uint16_t x352 = 4U;
	volatile int32_t t83 = -507;

	t83 = ((x349==x350)-(x351%x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x353 = 922U;
	volatile int32_t x354 = -4;
	int32_t x355 = -1;
	int64_t x356 = INT64_MAX;
	volatile int64_t t84 = -506233105830LL;

	t84 = ((x353==x354)-(x355%x356));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = 64U;
	uint64_t x358 = 63550722LLU;
	volatile int32_t t85 = 29;

	t85 = ((x357==x358)-(x359%x360));

	if (t85 != -6) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x362 = 0;
	volatile int32_t x364 = -424;
	int32_t t86 = 0;

	t86 = ((x361==x362)-(x363%x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x366 = -1;
	static int16_t x367 = INT16_MAX;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t87 = -380762LL;

	t87 = ((x365==x366)-(x367%x368));

	if (t87 != -32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x370 = INT32_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t88 = 1883;

	t88 = ((x369==x370)-(x371%x372));

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = 5LLU;
	static int64_t x376 = -1LL;

	t89 = ((x373==x374)-(x375%x376));

	if (t89 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = -1;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t90 = 2;

	t90 = ((x377==x378)-(x379%x380));

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x382 = 22U;
	int64_t x383 = INT64_MAX;
	volatile int64_t t91 = 418081468250254932LL;

	t91 = ((x381==x382)-(x383%x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x385 = 9345519U;
	int32_t x386 = 297946;
	static int8_t x388 = 9;
	volatile int32_t t92 = -10535;

	t92 = ((x385==x386)-(x387%x388));

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = 33;
	int16_t x390 = INT16_MIN;
	static uint64_t x391 = 70LLU;
	int64_t x392 = INT64_MIN;

	t93 = ((x389==x390)-(x391%x392));

	if (t93 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x393 = -23370467802006892LL;
	int16_t x394 = INT16_MIN;
	static volatile int32_t x395 = -1;
	static volatile int8_t x396 = INT8_MIN;
	int32_t t94 = 225693191;

	t94 = ((x393==x394)-(x395%x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x397 = -6422839870854625LL;
	static uint32_t x398 = UINT32_MAX;
	int32_t x399 = 158928528;

	t95 = ((x397==x398)-(x399%x400));

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x402 = INT16_MIN;
	uint8_t x403 = UINT8_MAX;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t96 = -31317029;

	t96 = ((x401==x402)-(x403%x404));

	if (t96 != -255) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x409 = 25843831324533LLU;
	int8_t x410 = INT8_MIN;
	volatile int64_t x411 = -250LL;
	int32_t x412 = -1;
	static int64_t t97 = -1654979823969LL;

	t97 = ((x409==x410)-(x411%x412));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 2U;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = 41;
	int16_t x416 = -1;
	int32_t t98 = 0;

	t98 = ((x413==x414)-(x415%x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = UINT64_MAX;
	int8_t x418 = -1;
	static uint32_t x419 = UINT32_MAX;
	uint32_t t99 = 32586703U;

	t99 = ((x417==x418)-(x419%x420));

	if (t99 != 4294934530U) { NG(); } else { ; }
	
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

