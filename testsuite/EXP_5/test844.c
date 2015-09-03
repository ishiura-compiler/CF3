#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 213933758541699943LLU;
volatile int64_t x11 = 15134475597884919LL;
uint16_t x14 = 0U;
int32_t x17 = INT32_MIN;
uint8_t x21 = UINT8_MAX;
uint64_t x22 = 1065426493856896685LLU;
uint64_t t5 = 855437145645728LLU;
int8_t x29 = -1;
static int32_t x30 = -12;
int8_t x34 = INT8_MAX;
static volatile uint32_t x37 = 323241U;
int16_t x42 = INT16_MIN;
volatile int32_t t10 = 0;
int32_t x52 = -1;
volatile int32_t t12 = 58;
int16_t x56 = INT16_MAX;
int64_t x63 = INT64_MIN;
uint16_t x64 = UINT16_MAX;
uint8_t x65 = UINT8_MAX;
static int32_t t16 = 7199807;
static int64_t t17 = INT64_MAX;
volatile int8_t x81 = INT8_MIN;
static volatile uint32_t x83 = 1565697U;
static uint32_t x85 = 85469U;
int8_t x92 = -8;
volatile uint16_t x93 = 3U;
static int64_t x94 = INT64_MIN;
int8_t x99 = 1;
uint32_t x100 = UINT32_MAX;
int64_t t23 = -402026621518LL;
volatile int8_t x106 = INT8_MIN;
int32_t x108 = -1;
volatile uint32_t x111 = UINT32_MAX;
uint32_t x114 = UINT32_MAX;
uint16_t x124 = 235U;
volatile uint32_t t29 = 111U;
volatile int64_t t30 = 892163233LL;
uint32_t x129 = 26481491U;
volatile int64_t t31 = 25396360379LL;
volatile int32_t x133 = INT32_MIN;
volatile int64_t t32 = -109045284LL;
int8_t x140 = INT8_MIN;
int16_t x141 = INT16_MIN;
uint16_t x143 = 865U;
int32_t t34 = -5207642;
int32_t x149 = INT32_MIN;
volatile uint32_t x151 = 3629045U;
int32_t x152 = 872552;
uint64_t t36 = 4LLU;
uint32_t x153 = UINT32_MAX;
int32_t x154 = -3552721;
volatile int64_t x156 = INT64_MAX;
int64_t t37 = INT64_MAX;
int64_t t38 = 2011650458001842LL;
int16_t x161 = INT16_MIN;
int16_t x163 = -13095;
int8_t x164 = INT8_MIN;
int64_t x172 = 27774106948769492LL;
int32_t x182 = INT32_MIN;
uint16_t x183 = 5U;
static uint64_t t46 = 1439982389858450785LLU;
uint32_t x194 = 1U;
int32_t x195 = INT32_MIN;
static int16_t x203 = INT16_MAX;
int64_t x204 = INT64_MIN;
static volatile int8_t x206 = -1;
static volatile uint64_t t50 = 1350429622LLU;
int32_t x209 = INT32_MAX;
uint32_t x210 = 2450185U;
uint32_t x211 = 568254607U;
volatile uint32_t t52 = UINT32_MAX;
int32_t x218 = INT32_MIN;
volatile int16_t x222 = INT16_MIN;
uint64_t t54 = UINT64_MAX;
volatile uint16_t x234 = UINT16_MAX;
volatile uint8_t x245 = UINT8_MAX;
uint64_t x251 = 197756357826502659LLU;
static int8_t x255 = INT8_MIN;
volatile int32_t t64 = 168;
static volatile int32_t x266 = -1;
static uint32_t x272 = 0U;
volatile uint32_t t66 = UINT32_MAX;
int64_t x275 = INT64_MIN;
static int8_t x276 = 0;
volatile int8_t x283 = INT8_MAX;
volatile uint16_t x284 = 2U;
uint16_t x287 = 110U;
volatile int16_t x288 = -1;
uint16_t x289 = UINT16_MAX;
volatile int64_t t71 = -36302920LL;
int64_t x294 = 3551950759LL;
uint64_t x299 = 259137306827464LLU;
volatile uint64_t t73 = 4000742483703LLU;
volatile uint64_t x304 = 4261752494543LLU;
uint64_t t74 = 276246592099926783LLU;
uint32_t x308 = UINT32_MAX;
int32_t x320 = 7;
static int64_t x330 = -1169LL;
int64_t t81 = 14192060LL;
int32_t x344 = 22;
int32_t x346 = INT32_MAX;
int32_t x347 = -8161657;
int32_t x355 = INT32_MIN;
volatile int32_t t86 = 240180797;
static volatile uint32_t x365 = 1U;
volatile uint64_t t89 = 680040395LLU;
uint16_t x369 = UINT16_MAX;
uint8_t x371 = 99U;
int32_t t90 = -42419059;
uint16_t x376 = 16637U;
int16_t x381 = INT16_MAX;
static volatile uint16_t x382 = 327U;
static int16_t x385 = 372;
int16_t x386 = INT16_MIN;
uint64_t t94 = 33061659699721199LLU;
volatile int8_t x391 = -1;
uint8_t x393 = 2U;
static volatile uint32_t x396 = 3U;
static uint32_t x402 = 7U;
uint8_t x403 = 1U;
volatile int64_t t98 = -77859310086676LL;
static uint8_t x406 = 8U;


void f0(void) {
	volatile int32_t x1 = -1;
	int16_t x3 = -1;
	uint16_t x4 = 1U;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2%x3)^x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 75U;
	int64_t x6 = INT64_MAX;
	int16_t x7 = 2757;
	int8_t x8 = INT8_MIN;
	int64_t t1 = 111LL;

	t1 = (x5|((x6%x7)^x8));

	if (t1 != -1569LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int64_t x10 = -1LL;
	uint32_t x12 = 790337U;
	int64_t t2 = -21848053LL;

	t2 = (x9|((x10%x11)^x12));

	if (t2 != -790273LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int32_t x15 = -1;
	uint16_t x16 = 1U;
	int64_t t3 = -2181LL;

	t3 = (x13|((x14%x15)^x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = UINT8_MAX;
	int16_t x19 = -1;
	static int8_t x20 = -1;
	int32_t t4 = 0;

	t4 = (x17|((x18%x19)^x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x23 = -1506397405LL;
	int8_t x24 = INT8_MAX;

	t5 = (x21|((x22%x23)^x24));

	if (t5 != 1065426493856896767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 17U;
	static int8_t x26 = 19;
	static volatile uint64_t x27 = 47491362702208023LLU;
	static int8_t x28 = -1;
	uint64_t t6 = 35092023LLU;

	t6 = (x25|((x26%x27)^x28));

	if (t6 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x31 = 30429296085LLU;
	uint16_t x32 = UINT16_MAX;
	static uint64_t t7 = UINT64_MAX;

	t7 = (x29|((x30%x31)^x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 80U;
	static uint32_t x35 = 4190U;
	int64_t x36 = 515933679398LL;
	int64_t t8 = -874663195529083299LL;

	t8 = (x33|((x34%x35)^x36));

	if (t8 != 515933679449LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -1LL;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MIN;
	uint64_t t9 = 41898544100LLU;

	t9 = (x37|((x38%x39)^x40));

	if (t9 != 18446744073709547177LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	volatile uint8_t x43 = 88U;
	volatile uint8_t x44 = UINT8_MAX;

	t10 = (x41|((x42%x43)^x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 790497628532LL;
	int8_t x46 = -25;
	static int32_t x47 = 70922;
	int16_t x48 = INT16_MAX;
	static volatile int64_t t11 = -330623LL;

	t11 = (x45|((x46%x47)^x48));

	if (t11 != -28292LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 30;
	int16_t x50 = INT16_MAX;
	volatile int8_t x51 = 63;

	t12 = (x49|((x50%x51)^x52));

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile uint16_t x54 = UINT16_MAX;
	volatile int64_t x55 = -1LL;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x53|((x54%x55)^x56));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	uint8_t x58 = UINT8_MAX;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = 3;
	int32_t t14 = INT32_MAX;

	t14 = (x57|((x58%x59)^x60));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 15U;
	int64_t x62 = 84LL;
	volatile int64_t t15 = 179584355460476308LL;

	t15 = (x61|((x62%x63)^x64));

	if (t15 != 65455LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 0;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 13U;

	t16 = (x65|((x66%x67)^x68));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = 8;
	uint8_t x72 = 34U;

	t17 = (x69|((x70%x71)^x72));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	int64_t x74 = -1LL;
	int16_t x75 = -1;
	int32_t x76 = -1;
	static int64_t t18 = 362726907LL;

	t18 = (x73|((x74%x75)^x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MAX;
	int32_t x84 = INT32_MIN;
	uint32_t t19 = 1U;

	t19 = (x81|((x82%x83)^x84));

	if (t19 != 4294967204U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MIN;
	static uint64_t x87 = UINT64_MAX;
	static uint32_t x88 = 698U;
	uint64_t t20 = 220091LLU;

	t20 = (x85|((x86%x87)^x88));

	if (t20 != 9223372036854861823LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MAX;
	uint32_t x90 = 2045851U;
	volatile int8_t x91 = INT8_MAX;
	static uint32_t t21 = UINT32_MAX;

	t21 = (x89|((x90%x91)^x92));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x95 = 13867U;
	static uint32_t x96 = UINT32_MAX;
	int64_t t22 = -1733630708299351696LL;

	t22 = (x93|((x94%x95)^x96));

	if (t22 != -4294955289LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int64_t x98 = INT64_MIN;

	t23 = (x97|((x98%x99)^x100));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = -1;
	static int16_t x102 = INT16_MIN;
	static volatile int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	volatile int64_t t24 = -6579090689480854LL;

	t24 = (x101|((x102%x103)^x104));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	volatile int32_t t25 = -218275;

	t25 = (x105|((x106%x107)^x108));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 0LLU;
	static int64_t x110 = -3LL;
	int8_t x112 = -1;
	volatile uint64_t t26 = 806902307235590882LLU;

	t26 = (x109|((x110%x111)^x112));

	if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = -1;
	int64_t t27 = 28739410569758427LL;

	t27 = (x113|((x114%x115)^x116));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = -222464715296904309LL;
	int8_t x118 = INT8_MIN;
	int8_t x119 = 2;
	int64_t x120 = 1847LL;
	volatile int64_t t28 = -1854695LL;

	t28 = (x117|((x118%x119)^x120));

	if (t28 != -222464715296903233LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	int8_t x122 = 1;
	uint32_t x123 = 314941U;

	t29 = (x121|((x122%x123)^x124));

	if (t29 != 32767U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -111975257823808967LL;
	volatile int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MIN;
	static int64_t x128 = INT64_MAX;

	t30 = (x125|((x126%x127)^x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x130 = INT16_MIN;
	uint32_t x131 = 4679U;
	int64_t x132 = INT64_MIN;

	t31 = (x129|((x130%x131)^x132));

	if (t31 != -9223372036828294281LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MIN;
	uint16_t x135 = 5570U;
	int64_t x136 = INT64_MAX;

	t32 = (x133|((x134%x135)^x136));

	if (t32 != -2147480081LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 3U;
	int64_t x138 = 15962648LL;
	uint64_t x139 = 8271406LLU;
	volatile uint64_t t33 = 4LLU;

	t33 = (x137|((x138%x139)^x140));

	if (t33 != 18446744073701860459LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x142 = -490;
	uint16_t x144 = UINT16_MAX;

	t34 = (x141|((x142%x143)^x144));

	if (t34 != -32279) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x145 = -1;
	int32_t x146 = 659;
	static int32_t x147 = INT32_MIN;
	int16_t x148 = 48;
	volatile int32_t t35 = -66827;

	t35 = (x145|((x146%x147)^x148));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x150 = UINT64_MAX;

	t36 = (x149|((x150%x151)^x152));

	if (t36 != 18446744071562616141LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x155 = 85U;

	t37 = (x153|((x154%x155)^x156));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = 1LL;
	int8_t x159 = -1;
	int64_t x160 = INT64_MIN;

	t38 = (x157|((x158%x159)^x160));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x162 = 173097U;
	uint32_t t39 = 2891U;

	t39 = (x161|((x162%x163)^x164));

	if (t39 != 4294957993U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -1400966LL;
	uint64_t x167 = 3241826701595LLU;
	int16_t x168 = -1;
	static uint64_t t40 = 3225413173566935978LLU;

	t40 = (x165|((x166%x167)^x168));

	if (t40 != 18446744071797789970LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	uint8_t x170 = 3U;
	static int16_t x171 = INT16_MIN;
	int64_t t41 = -26993049594930LL;

	t41 = (x169|((x170%x171)^x172));

	if (t41 != 27774106948769535LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 8U;
	static uint8_t x174 = 21U;
	int32_t x175 = INT32_MIN;
	volatile uint16_t x176 = UINT16_MAX;
	static int32_t t42 = -85460058;

	t42 = (x173|((x174%x175)^x176));

	if (t42 != 65514) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = 0;
	int64_t x179 = 34217113324723110LL;
	int64_t x180 = -12367007911593306LL;
	volatile int64_t t43 = 266338671528464LL;

	t43 = (x177|((x178%x179)^x180));

	if (t43 != -17754LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x181 = -25504689;
	int8_t x184 = INT8_MAX;
	int32_t t44 = -1828188;

	t44 = (x181|((x182%x183)^x184));

	if (t44 != -49) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MAX;
	volatile uint32_t x187 = UINT32_MAX;
	uint32_t x188 = UINT32_MAX;
	uint32_t t45 = 20U;

	t45 = (x185|((x186%x187)^x188));

	if (t45 != 4294967168U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	uint64_t x191 = 7862366131LLU;
	uint32_t x192 = 493044U;

	t46 = (x189|((x190%x191)^x192));

	if (t46 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 1U;
	static int32_t x196 = -1;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x193|((x194%x195)^x196));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	int32_t x200 = 24953;
	int64_t t48 = -1635LL;

	t48 = (x197|((x198%x199)^x200));

	if (t48 != -24839LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile uint64_t t49 = 111LLU;

	t49 = (x201|((x202%x203)^x204));

	if (t49 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x205 = 9966221U;
	static uint64_t x207 = UINT64_MAX;
	int16_t x208 = 753;

	t50 = (x205|((x206%x207)^x208));

	if (t50 != 9966333LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x212 = UINT32_MAX;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x209|((x210%x211)^x212));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x213 = 3;
	uint32_t x214 = 701U;
	volatile uint8_t x215 = 1U;
	static int8_t x216 = -1;

	t52 = (x213|((x214%x215)^x216));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = -1;
	int64_t x219 = INT64_MIN;
	static uint8_t x220 = 89U;
	volatile int64_t t53 = -5796077022951LL;

	t53 = (x217|((x218%x219)^x220));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int16_t x223 = 44;
	int64_t x224 = INT64_MIN;

	t54 = (x221|((x222%x223)^x224));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x225 = UINT64_MAX;
	volatile int64_t x226 = INT64_MIN;
	static int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (x225|((x226%x227)^x228));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x229 = -1;
	int32_t x230 = INT32_MIN;
	int64_t x231 = 13LL;
	int8_t x232 = -15;
	volatile int64_t t56 = -1LL;

	t56 = (x229|((x230%x231)^x232));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x233 = INT8_MIN;
	static int64_t x235 = INT64_MIN;
	static volatile int32_t x236 = INT32_MIN;
	int64_t t57 = 1LL;

	t57 = (x233|((x234%x235)^x236));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x238 = 463917921U;
	volatile int8_t x239 = INT8_MIN;
	static int32_t x240 = -1;
	static volatile int64_t t58 = 135715108224389632LL;

	t58 = (x237|((x238%x239)^x240));

	if (t58 != -9223372033023726434LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 786226443U;
	int64_t x242 = INT64_MIN;
	int64_t x243 = -57225LL;
	static int16_t x244 = -1;
	volatile int64_t t59 = 234LL;

	t59 = (x241|((x242%x243)^x244));

	if (t59 != 786234715LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x246 = INT16_MAX;
	volatile int16_t x247 = INT16_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t60 = 3776778262LLU;

	t60 = (x245|((x246%x247)^x248));

	if (t60 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	uint32_t x252 = 68431890U;
	volatile uint64_t t61 = 8687147479619LLU;

	t61 = (x249|((x250%x251)^x252));

	if (t61 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = UINT16_MAX;
	static uint16_t x254 = 26052U;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t62 = -283764;

	t62 = (x253|((x254%x255)^x256));

	if (t62 != -2147418113) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = 3720U;
	uint16_t x259 = UINT16_MAX;
	static volatile int16_t x260 = -1;
	static int32_t t63 = 295;

	t63 = (x257|((x258%x259)^x260));

	if (t63 != -3585) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = -1;
	uint16_t x262 = 28U;
	uint16_t x263 = 12698U;
	int16_t x264 = 5;

	t64 = (x261|((x262%x263)^x264));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile uint32_t x267 = 449199U;
	volatile uint8_t x268 = 0U;
	uint32_t t65 = 8965U;

	t65 = (x265|((x266%x267)^x268));

	if (t65 != 4294967208U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x270 = -782;
	int16_t x271 = INT16_MAX;

	t66 = (x269|((x270%x271)^x272));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = -1;
	volatile int64_t t67 = -71LL;

	t67 = (x273|((x274%x275)^x276));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 111U;
	volatile int32_t x279 = INT32_MIN;
	volatile int64_t x280 = 194597546LL;
	uint64_t t68 = UINT64_MAX;

	t68 = (x277|((x278%x279)^x280));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x281 = -1;
	static volatile int8_t x282 = -16;
	volatile int32_t t69 = -26142;

	t69 = (x281|((x282%x283)^x284));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MIN;
	uint32_t x286 = 2080711U;
	volatile uint32_t t70 = 423449166U;

	t70 = (x285|((x286%x287)^x288));

	if (t70 != 4294967234U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x290 = INT64_MIN;
	volatile int8_t x291 = 4;
	volatile uint8_t x292 = 81U;

	t71 = (x289|((x290%x291)^x292));

	if (t71 != 65535LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = UINT64_MAX;
	volatile int8_t x295 = INT8_MIN;
	int16_t x296 = -1;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x293|((x294%x295)^x296));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x297 = 13LLU;
	uint32_t x298 = 410U;
	int16_t x300 = INT16_MAX;

	t73 = (x297|((x298%x299)^x300));

	if (t73 != 32365LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x302 = 12U;
	volatile int8_t x303 = 31;

	t74 = (x301|((x302%x303)^x304));

	if (t74 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	volatile int16_t x306 = INT16_MIN;
	uint64_t x307 = UINT64_MAX;
	uint64_t t75 = UINT64_MAX;

	t75 = (x305|((x306%x307)^x308));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = 872;
	uint32_t x310 = 162490441U;
	volatile uint16_t x311 = UINT16_MAX;
	uint8_t x312 = UINT8_MAX;
	uint32_t t76 = 80U;

	t76 = (x309|((x310%x311)^x312));

	if (t76 != 29551U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x313 = -1;
	static int8_t x314 = -13;
	volatile int64_t x315 = -54560091LL;
	int32_t x316 = -1;
	int64_t t77 = 29827709942LL;

	t77 = (x313|((x314%x315)^x316));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = 167U;
	static int8_t x318 = INT8_MIN;
	volatile int64_t x319 = INT64_MIN;
	int64_t t78 = -2039151206630LL;

	t78 = (x317|((x318%x319)^x320));

	if (t78 != -89LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	volatile uint16_t x326 = UINT16_MAX;
	uint64_t x327 = 7640281043607859LLU;
	int16_t x328 = INT16_MAX;
	uint64_t t79 = 688191166808LLU;

	t79 = (x325|((x326%x327)^x328));

	if (t79 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -1;
	int16_t x331 = 1;
	int16_t x332 = INT16_MIN;
	volatile int64_t t80 = -31441137111226LL;

	t80 = (x329|((x330%x331)^x332));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = 367493;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;

	t81 = (x333|((x334%x335)^x336));

	if (t81 != -7046LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 1U;
	static int8_t x338 = INT8_MIN;
	volatile int32_t x339 = INT32_MIN;
	volatile uint32_t x340 = UINT32_MAX;
	uint32_t t82 = 127U;

	t82 = (x337|((x338%x339)^x340));

	if (t82 != 127U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x342 = 0U;
	static int32_t x343 = INT32_MAX;
	int64_t t83 = -6736968831196LL;

	t83 = (x341|((x342%x343)^x344));

	if (t83 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	int32_t x348 = -1;
	static int32_t t84 = -1;

	t84 = (x345|((x346%x347)^x348));

	if (t84 != -17585) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x349 = -1;
	int32_t x350 = INT32_MIN;
	volatile int16_t x351 = INT16_MAX;
	static uint64_t x352 = 161LLU;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x349|((x350%x351)^x352));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MIN;
	volatile int16_t x356 = INT16_MAX;

	t86 = (x353|((x354%x355)^x356));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	static int64_t x358 = 0LL;
	volatile int8_t x359 = -1;
	int32_t x360 = -3460630;
	static volatile int64_t t87 = 946976904897784LL;

	t87 = (x357|((x358%x359)^x360));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 612U;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = 2;
	int32_t x364 = -77073503;
	uint32_t t88 = 9205U;

	t88 = (x361|((x362%x363)^x364));

	if (t88 != 4217893860U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x366 = UINT64_MAX;
	static int8_t x367 = 7;
	int32_t x368 = INT32_MIN;

	t89 = (x365|((x366%x367)^x368));

	if (t89 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = 28;
	int8_t x372 = 15;

	t90 = (x369|((x370%x371)^x372));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x373 = INT32_MIN;
	int64_t x374 = 6331394290LL;
	int16_t x375 = -108;
	volatile int64_t t91 = -3656597969992LL;

	t91 = (x373|((x374%x375)^x376));

	if (t91 != -2147467029LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x377 = 65U;
	int64_t x378 = INT64_MIN;
	int16_t x379 = -52;
	int32_t x380 = -300;
	int64_t t92 = 3LL;

	t92 = (x377|((x378%x379)^x380));

	if (t92 != 365LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x383 = -1;
	int16_t x384 = 1344;
	static int32_t t93 = -796;

	t93 = (x381|((x382%x383)^x384));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x387 = INT16_MIN;
	static uint64_t x388 = 2018089983079432226LLU;

	t94 = (x385|((x386%x387)^x388));

	if (t94 != 2018089983079432566LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x389 = -1;
	static int16_t x390 = INT16_MIN;
	volatile int32_t x392 = INT32_MAX;
	volatile int32_t t95 = 13;

	t95 = (x389|((x390%x391)^x392));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x394 = 165LLU;
	uint8_t x395 = 59U;
	uint64_t t96 = 11039663208LLU;

	t96 = (x393|((x394%x395)^x396));

	if (t96 != 46LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x397 = 36LLU;
	uint8_t x398 = 9U;
	static volatile uint32_t x399 = UINT32_MAX;
	static int8_t x400 = INT8_MAX;
	uint64_t t97 = 27908943401LLU;

	t97 = (x397|((x398%x399)^x400));

	if (t97 != 118LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x401 = UINT32_MAX;
	int64_t x404 = INT64_MIN;

	t98 = (x401|((x402%x403)^x404));

	if (t98 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MAX;
	static int16_t x407 = INT16_MIN;
	int64_t x408 = 67720039034504LL;
	int64_t t99 = -9LL;

	t99 = (x405|((x406%x407)^x408));

	if (t99 != 67720039038975LL) { NG(); } else { ; }
	
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

