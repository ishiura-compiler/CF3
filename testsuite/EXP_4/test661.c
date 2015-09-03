#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 14496LLU;
volatile uint64_t t1 = 12903637644379LLU;
int16_t x15 = -1;
volatile int32_t x16 = INT32_MIN;
uint32_t x30 = 147U;
uint8_t x31 = UINT8_MAX;
uint32_t t6 = 75227314U;
int64_t x38 = INT64_MIN;
int8_t x39 = INT8_MIN;
int8_t x40 = INT8_MIN;
static int64_t t8 = -2910629930611883010LL;
uint16_t x41 = UINT16_MAX;
int32_t x44 = INT32_MIN;
static volatile uint32_t x54 = UINT32_MAX;
volatile uint32_t t12 = 480U;
static uint64_t t13 = 691784965978LLU;
int16_t x62 = 3;
static int8_t x65 = -1;
volatile uint8_t x66 = UINT8_MAX;
static volatile uint16_t x68 = 31U;
int32_t t16 = 77;
uint8_t x73 = 0U;
volatile uint16_t x74 = 111U;
int16_t x86 = -1;
int8_t x102 = 1;
volatile uint64_t t23 = 12463650154LLU;
static volatile uint64_t t24 = 6128983848682254052LLU;
int32_t x109 = INT32_MAX;
static int8_t x110 = 10;
int16_t x111 = -1562;
volatile int32_t t25 = 16319;
int8_t x113 = -1;
int64_t x114 = 18LL;
int64_t t26 = -14288763LL;
int32_t x124 = -7919;
volatile uint32_t t28 = 5464726U;
int64_t x125 = INT64_MIN;
int32_t x134 = -1;
int16_t x135 = INT16_MIN;
uint16_t x136 = 1210U;
int32_t x137 = INT32_MAX;
static int8_t x140 = INT8_MAX;
static uint8_t x145 = UINT8_MAX;
static int32_t x155 = 100;
static int8_t x161 = -1;
int16_t x171 = INT16_MAX;
volatile int16_t x175 = -3789;
int64_t x176 = -17506LL;
volatile int32_t x177 = INT32_MIN;
static volatile uint32_t x189 = 951640700U;
volatile int64_t x198 = -19LL;
volatile uint8_t x200 = 40U;
volatile int32_t x206 = 0;
static int8_t x215 = INT8_MIN;
uint64_t x219 = 942778LLU;
int64_t t52 = -8565563909387449LL;
uint16_t x230 = 2U;
int16_t x233 = INT16_MAX;
volatile uint8_t x234 = 47U;
int32_t t54 = 641253;
uint32_t x242 = UINT32_MAX;
volatile int64_t t57 = -9189241588LL;
volatile int32_t x251 = INT32_MIN;
int8_t x253 = INT8_MIN;
uint32_t x254 = 30455U;
volatile int8_t x257 = INT8_MIN;
static int8_t x258 = -1;
volatile int64_t t61 = 541198155333386981LL;
static volatile uint32_t x271 = 610U;
int16_t x278 = INT16_MIN;
uint64_t x280 = 134205LLU;
int64_t x285 = -1LL;
int64_t x287 = 122144559382717LL;
int32_t x291 = INT32_MAX;
int32_t x303 = INT32_MIN;
volatile int8_t x318 = INT8_MAX;
int32_t x321 = INT32_MAX;
int16_t x324 = INT16_MIN;
static int64_t t75 = 65855372903957747LL;
static uint8_t x325 = UINT8_MAX;
static uint64_t t76 = 21617LLU;
uint32_t x335 = 407186U;
int16_t x336 = INT16_MIN;
int64_t x339 = -104LL;
volatile uint64_t t79 = 29453474109LLU;
int16_t x344 = -1;
volatile int64_t t81 = 47903641654432664LL;
int16_t x349 = 1;
uint64_t x359 = UINT64_MAX;
static uint64_t t84 = 7178773171747184LLU;
int16_t x362 = 0;
uint64_t t85 = 890290131520526LLU;
uint16_t x371 = 2847U;
int32_t t87 = -1946;
static volatile uint32_t x374 = UINT32_MAX;
int64_t t88 = 18983558546720224LL;
int64_t x378 = -6012236LL;
int16_t x379 = 0;
volatile int16_t x387 = -27;
volatile uint16_t x392 = UINT16_MAX;
volatile uint64_t t92 = 120995612498LLU;
int32_t t94 = -2;
static volatile int64_t x403 = INT64_MAX;
int32_t x408 = INT32_MIN;
int16_t x411 = -1;
volatile int32_t t97 = 663269609;
int32_t t98 = -6849959;
int8_t x418 = INT8_MIN;
volatile int16_t x420 = INT16_MIN;


void f0(void) {
	int64_t x1 = 7860937960641964LL;
	int8_t x2 = INT8_MAX;
	int16_t x3 = 2796;
	uint64_t x4 = 9884LLU;

	t0 = (x1&(x2|(x3/x4)));

	if (t0 != 44LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	uint32_t x6 = 675674U;
	uint64_t x7 = 32633LLU;
	static int8_t x8 = INT8_MAX;

	t1 = (x5&(x6|(x7/x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x13 = 932;
	int64_t x14 = -1745909322009051364LL;
	int64_t t2 = 12394LL;

	t2 = (x13&(x14|(x15/x16)));

	if (t2 != 772LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 55101LLU;
	uint64_t x18 = 558856683639707636LLU;
	uint64_t x19 = 33920893LLU;
	static int8_t x20 = INT8_MAX;
	volatile uint64_t t3 = 931258195580857664LLU;

	t3 = (x17&(x18|(x19/x20)));

	if (t3 != 38709LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	volatile uint64_t x22 = UINT64_MAX;
	volatile uint64_t x23 = 3431182013038717005LLU;
	volatile uint8_t x24 = 7U;
	static uint64_t t4 = 232LLU;

	t4 = (x21&(x22|(x23/x24)));

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	int32_t x26 = 825937;
	static int16_t x27 = -1;
	int32_t x28 = -83004;
	volatile int32_t t5 = -248175512;

	t5 = (x25&(x26|(x27/x28)));

	if (t5 != 819200) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -907;
	int16_t x32 = -10807;

	t6 = (x29&(x30|(x31/x32)));

	if (t6 != 17U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	static int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MAX;
	int8_t x36 = 12;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x33&(x34|(x35/x36)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 86U;

	t8 = (x37&(x38|(x39/x40)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = -1;
	uint32_t x43 = 15U;
	volatile uint32_t t9 = 7U;

	t9 = (x41&(x42|(x43/x44)));

	if (t9 != 65535U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MIN;
	uint32_t x46 = UINT32_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint32_t t10 = 14750881U;

	t10 = (x45&(x46|(x47/x48)));

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 7LLU;
	uint32_t x50 = 336032U;
	uint32_t x51 = UINT32_MAX;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 22LLU;

	t11 = (x49&(x50|(x51/x52)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 20U;
	int16_t x55 = 0;
	volatile int8_t x56 = 3;

	t12 = (x53&(x54|(x55/x56)));

	if (t12 != 20U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MIN;
	static uint64_t x58 = 8859404661992905460LLU;
	static int16_t x59 = INT16_MAX;
	uint8_t x60 = 3U;

	t13 = (x57&(x58|(x59/x60)));

	if (t13 != 8859404661992882176LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	static uint64_t x63 = 424177247244147714LLU;
	uint16_t x64 = 1U;
	uint64_t t14 = 87047217LLU;

	t14 = (x61&(x62|(x63/x64)));

	if (t14 != 23555LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x67 = 0U;
	static volatile int32_t t15 = -483294;

	t15 = (x65&(x66|(x67/x68)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 7;
	uint16_t x70 = UINT16_MAX;
	static volatile uint16_t x71 = 108U;
	int32_t x72 = -1;

	t16 = (x69&(x70|(x71/x72)));

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x75 = INT8_MAX;
	volatile uint32_t x76 = UINT32_MAX;
	uint32_t t17 = 8U;

	t17 = (x73&(x74|(x75/x76)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	uint8_t x78 = 0U;
	int16_t x79 = INT16_MIN;
	static int16_t x80 = INT16_MIN;
	int32_t t18 = 4;

	t18 = (x77&(x78|(x79/x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -5;
	static int16_t x82 = INT16_MAX;
	int16_t x83 = -1;
	static int16_t x84 = INT16_MAX;
	int32_t t19 = -65072748;

	t19 = (x81&(x82|(x83/x84)));

	if (t19 != 32763) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 0;
	uint32_t x87 = 896400U;
	static int64_t x88 = INT64_MIN;
	int64_t t20 = -4171963825LL;

	t20 = (x85&(x86|(x87/x88)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = 21704851;
	uint64_t x94 = 344920876190163LLU;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = 1U;
	uint64_t t21 = 27LLU;

	t21 = (x93&(x94|(x95/x96)));

	if (t21 != 21692563LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x97 = UINT8_MAX;
	volatile int8_t x98 = INT8_MIN;
	volatile uint64_t x99 = 1564677726438356LLU;
	int16_t x100 = -1;
	uint64_t t22 = 51571148788LLU;

	t22 = (x97&(x98|(x99/x100)));

	if (t22 != 128LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = UINT64_MAX;
	static uint32_t x103 = 19830U;
	static uint16_t x104 = UINT16_MAX;

	t23 = (x101&(x102|(x103/x104)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x105 = 8719680085645751LLU;
	int64_t x106 = -1987944918159344LL;
	int32_t x107 = -1;
	int16_t x108 = INT16_MIN;

	t24 = (x105&(x106|(x107/x108)));

	if (t24 != 7013237065338896LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x112 = -27;

	t25 = (x109&(x110|(x111/x112)));

	if (t25 != 59) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x115 = 439649949;
	int16_t x116 = 15608;

	t26 = (x113&(x114|(x115/x116)));

	if (t26 != 28186LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = 52222230813707454LLU;
	volatile int8_t x118 = INT8_MIN;
	uint64_t x119 = 229994927LLU;
	uint8_t x120 = UINT8_MAX;
	uint64_t t27 = 24294428LLU;

	t27 = (x117&(x118|(x119/x120)));

	if (t27 != 52222230813707444LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int32_t x122 = -158;
	static volatile uint8_t x123 = UINT8_MAX;

	t28 = (x121&(x122|(x123/x124)));

	if (t28 != 4294967138U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x126 = INT8_MAX;
	volatile int8_t x127 = INT8_MAX;
	int32_t x128 = 5;
	volatile int64_t t29 = -910062778666LL;

	t29 = (x125&(x126|(x127/x128)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	static uint64_t x130 = UINT64_MAX;
	static int8_t x131 = -1;
	int8_t x132 = 4;
	volatile uint64_t t30 = 897LLU;

	t30 = (x129&(x130|(x131/x132)));

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -4925665928670LL;
	static int64_t t31 = -2868785335530985LL;

	t31 = (x133&(x134|(x135/x136)));

	if (t31 != -4925665928670LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x138 = INT16_MAX;
	int8_t x139 = -1;
	volatile int32_t t32 = -703406191;

	t32 = (x137&(x138|(x139/x140)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 257403306094LLU;
	static uint8_t x142 = UINT8_MAX;
	volatile int8_t x143 = INT8_MIN;
	volatile uint16_t x144 = UINT16_MAX;
	volatile uint64_t t33 = 8915LLU;

	t33 = (x141&(x142|(x143/x144)));

	if (t33 != 110LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x146 = 962421304219LLU;
	uint64_t x147 = UINT64_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile uint64_t t34 = 2LLU;

	t34 = (x145&(x146|(x147/x148)));

	if (t34 != 155LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = -1;
	int16_t x150 = INT16_MIN;
	int8_t x151 = -1;
	int32_t x152 = INT32_MAX;
	static int32_t t35 = -181;

	t35 = (x149&(x150|(x151/x152)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -53;
	uint32_t x154 = 11906U;
	volatile int8_t x156 = -1;
	uint32_t t36 = 55U;

	t36 = (x153&(x154|(x155/x156)));

	if (t36 != 4294967178U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	uint16_t x158 = 3U;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t37 = -1;

	t37 = (x157&(x158|(x159/x160)));

	if (t37 != 259) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x162 = 57589U;
	int32_t x163 = 5711;
	uint8_t x164 = 27U;
	static volatile uint32_t t38 = 2U;

	t38 = (x161&(x162|(x163/x164)));

	if (t38 != 57591U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = 1;
	static volatile uint32_t x166 = 362169U;
	uint8_t x167 = UINT8_MAX;
	int16_t x168 = INT16_MIN;
	static volatile uint32_t t39 = 57U;

	t39 = (x165&(x166|(x167/x168)));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 5;
	int8_t x170 = -2;
	uint32_t x172 = 1860054020U;
	static uint32_t t40 = 62910U;

	t40 = (x169&(x170|(x171/x172)));

	if (t40 != 4U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	volatile int64_t t41 = 504747441216815LL;

	t41 = (x173&(x174|(x175/x176)));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x178 = 0U;
	static uint64_t x179 = 1LLU;
	int16_t x180 = INT16_MIN;
	uint64_t t42 = 1874585664LLU;

	t42 = (x177&(x178|(x179/x180)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x181 = 18459503LLU;
	int32_t x182 = 3964229;
	uint64_t x183 = 7366LLU;
	int16_t x184 = 1492;
	static uint64_t t43 = 639381645LLU;

	t43 = (x181&(x182|(x183/x184)));

	if (t43 != 1583429LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MAX;
	static int32_t x186 = INT32_MIN;
	uint16_t x187 = 6561U;
	uint16_t x188 = 5U;
	int32_t t44 = 0;

	t44 = (x185&(x186|(x187/x188)));

	if (t44 != 32) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x190 = UINT16_MAX;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = UINT8_MAX;
	uint64_t t45 = 11112679597319LLU;

	t45 = (x189&(x190|(x191/x192)));

	if (t45 != 57980LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = INT16_MIN;
	static uint8_t x199 = 0U;
	volatile int64_t t46 = 22132524676LL;

	t46 = (x197&(x198|(x199/x200)));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x201 = INT8_MIN;
	uint32_t x202 = UINT32_MAX;
	int64_t x203 = -2062394674574157259LL;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t47 = 107411179222LL;

	t47 = (x201&(x202|(x203/x204)));

	if (t47 != -8087818555359360LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = INT32_MAX;
	int32_t x207 = INT32_MAX;
	static uint16_t x208 = 1U;
	static volatile int32_t t48 = INT32_MAX;

	t48 = (x205&(x206|(x207/x208)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -1LL;
	volatile int32_t x214 = 60464875;
	int8_t x216 = -1;
	volatile int64_t t49 = 7LL;

	t49 = (x213&(x214|(x215/x216)));

	if (t49 != 60464875LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = UINT64_MAX;
	volatile uint8_t x218 = UINT8_MAX;
	static int8_t x220 = INT8_MIN;
	uint64_t t50 = 3710453813050179LLU;

	t50 = (x217&(x218|(x219/x220)));

	if (t50 != 255LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = 61;
	int64_t x222 = INT64_MIN;
	int16_t x223 = 4715;
	static int8_t x224 = INT8_MIN;
	static int64_t t51 = 203LL;

	t51 = (x221&(x222|(x223/x224)));

	if (t51 != 28LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	static int32_t x228 = 5107538;

	t52 = (x225&(x226|(x227/x228)));

	if (t52 != -1805835173889LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = -1;
	int16_t x231 = INT16_MIN;
	int64_t x232 = 2600794LL;
	int64_t t53 = 180607LL;

	t53 = (x229&(x230|(x231/x232)));

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x235 = INT32_MIN;
	static int8_t x236 = INT8_MIN;

	t54 = (x233&(x234|(x235/x236)));

	if (t54 != 47) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	static uint64_t x238 = 3852163923283LLU;
	int8_t x239 = 0;
	int32_t x240 = -1;
	uint64_t t55 = 5455498607494399995LLU;

	t55 = (x237&(x238|(x239/x240)));

	if (t55 != 3852163907584LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x241 = -1LL;
	int64_t x243 = INT64_MIN;
	static volatile int16_t x244 = INT16_MIN;
	volatile int64_t t56 = 66102464LL;

	t56 = (x241&(x242|(x243/x244)));

	if (t56 != 281479271677951LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x245 = -360310472256429232LL;
	volatile int16_t x246 = 237;
	static int64_t x247 = 12LL;
	static volatile int32_t x248 = 1277823;

	t57 = (x245&(x246|(x247/x248)));

	if (t57 != 64LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = 23U;
	int16_t x250 = -13092;
	volatile int16_t x252 = INT16_MIN;
	static volatile uint32_t t58 = 331U;

	t58 = (x249&(x250|(x251/x252)));

	if (t58 != 20U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x255 = INT64_MIN;
	int64_t x256 = 8431071752537LL;
	int64_t t59 = -240954111019LL;

	t59 = (x253&(x254|(x255/x256)));

	if (t59 != -1081728LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x259 = UINT16_MAX;
	static int32_t x260 = INT32_MIN;
	int32_t t60 = -487355;

	t60 = (x257&(x258|(x259/x260)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x261 = INT8_MIN;
	uint32_t x262 = UINT32_MAX;
	static int32_t x263 = -1;
	int64_t x264 = INT64_MAX;

	t61 = (x261&(x262|(x263/x264)));

	if (t61 != 4294967168LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = UINT64_MAX;
	int16_t x266 = -120;
	int8_t x267 = -3;
	uint16_t x268 = 2U;
	uint64_t t62 = UINT64_MAX;

	t62 = (x265&(x266|(x267/x268)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	uint32_t x270 = 3U;
	static int16_t x272 = INT16_MIN;
	static uint32_t t63 = 129U;

	t63 = (x269&(x270|(x271/x272)));

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	static uint64_t x279 = 2771189LLU;
	static volatile uint64_t t64 = 299LLU;

	t64 = (x277&(x278|(x279/x280)));

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 1388480431449110LLU;
	int32_t x282 = INT32_MAX;
	int8_t x283 = INT8_MAX;
	int8_t x284 = -1;
	volatile uint64_t t65 = 35006LLU;

	t65 = (x281&(x282|(x283/x284)));

	if (t65 != 1388480431449110LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x286 = 1U;
	static int16_t x288 = -1;
	static volatile int64_t t66 = 2830298LL;

	t66 = (x285&(x286|(x287/x288)));

	if (t66 != -122144559382717LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x289 = 187;
	int64_t x290 = INT64_MAX;
	uint8_t x292 = 113U;
	volatile int64_t t67 = 1LL;

	t67 = (x289&(x290|(x291/x292)));

	if (t67 != 187LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x293 = 22U;
	volatile int16_t x294 = 0;
	int64_t x295 = INT64_MAX;
	uint16_t x296 = 12094U;
	volatile int64_t t68 = 21843404909536LL;

	t68 = (x293&(x294|(x295/x296)));

	if (t68 != 16LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MAX;
	int32_t x298 = 339;
	int8_t x299 = -49;
	int32_t x300 = INT32_MAX;
	volatile int64_t t69 = -92LL;

	t69 = (x297&(x298|(x299/x300)));

	if (t69 != 339LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = INT64_MAX;
	volatile int64_t x302 = INT64_MAX;
	int64_t x304 = -1LL;
	int64_t t70 = INT64_MAX;

	t70 = (x301&(x302|(x303/x304)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x305 = INT32_MIN;
	static uint8_t x306 = 1U;
	int16_t x307 = 7;
	volatile int8_t x308 = INT8_MIN;
	int32_t t71 = 227;

	t71 = (x305&(x306|(x307/x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x309 = -1;
	int64_t x310 = -258516553622333982LL;
	uint16_t x311 = 1807U;
	static int32_t x312 = INT32_MIN;
	volatile int64_t t72 = -4513521735471703035LL;

	t72 = (x309&(x310|(x311/x312)));

	if (t72 != -258516553622333982LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = 6;
	int32_t x315 = -250061;
	volatile int8_t x316 = -1;
	int32_t t73 = 100;

	t73 = (x313&(x314|(x315/x316)));

	if (t73 != 249984) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x317 = -1;
	static volatile uint32_t x319 = 9541U;
	int8_t x320 = INT8_MIN;
	uint32_t t74 = 34217U;

	t74 = (x317&(x318|(x319/x320)));

	if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x322 = INT64_MIN;
	int32_t x323 = 49157462;

	t75 = (x321&(x322|(x323/x324)));

	if (t75 != 2147482148LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x326 = 866662284918LLU;
	int16_t x327 = -1;
	int32_t x328 = INT32_MIN;

	t76 = (x325&(x326|(x327/x328)));

	if (t76 != 118LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = INT32_MIN;
	volatile uint8_t x330 = 64U;
	static uint32_t x331 = 60U;
	int16_t x332 = INT16_MIN;
	uint32_t t77 = 333826158U;

	t77 = (x329&(x330|(x331/x332)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = -2;
	volatile int32_t x334 = -1;
	static volatile uint32_t t78 = 0U;

	t78 = (x333&(x334|(x335/x336)));

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = -3133;
	int64_t x338 = INT64_MIN;
	uint64_t x340 = 1995241475508LLU;

	t79 = (x337&(x338|(x339/x340)));

	if (t79 != 9223372036864021121LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -132460942;
	int32_t x342 = -1;
	volatile int16_t x343 = INT16_MAX;
	int32_t t80 = -7;

	t80 = (x341&(x342|(x343/x344)));

	if (t80 != -132460942) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = -1;
	int8_t x346 = INT8_MAX;
	volatile uint32_t x347 = 192349U;
	static int64_t x348 = INT64_MAX;

	t81 = (x345&(x346|(x347/x348)));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x350 = INT8_MIN;
	volatile uint16_t x351 = UINT16_MAX;
	static int8_t x352 = INT8_MAX;
	volatile int32_t t82 = 4193;

	t82 = (x349&(x350|(x351/x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	static int16_t x355 = -59;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t83 = 372659962LLU;

	t83 = (x353&(x354|(x355/x356)));

	if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = 489;
	int64_t x358 = 195449936081460LL;
	int8_t x360 = INT8_MIN;

	t84 = (x357&(x358|(x359/x360)));

	if (t84 != 33LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x361 = INT8_MIN;
	uint64_t x363 = UINT64_MAX;
	static int8_t x364 = 12;

	t85 = (x361&(x362|(x363/x364)));

	if (t85 != 1537228672809129216LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -44;
	int8_t x366 = 2;
	static volatile int32_t x367 = INT32_MIN;
	volatile uint16_t x368 = 6U;
	volatile int32_t t86 = -15991379;

	t86 = (x365&(x366|(x367/x368)));

	if (t86 != -357913984) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x369 = 1U;
	int8_t x370 = 2;
	int32_t x372 = -1;

	t87 = (x369&(x370|(x371/x372)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x373 = -73641;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;

	t88 = (x373&(x374|(x375/x376)));

	if (t88 != 4294893655LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int32_t x380 = -1745;
	volatile int64_t t89 = -133369171419LL;

	t89 = (x377&(x378|(x379/x380)));

	if (t89 != -6012288LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = INT64_MIN;
	static volatile uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MIN;
	uint16_t x384 = 5U;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x381&(x382|(x383/x384)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = UINT64_MAX;
	static int8_t x386 = INT8_MIN;
	int32_t x388 = 1654589;
	uint64_t t91 = 12771712033468357LLU;

	t91 = (x385&(x386|(x387/x388)));

	if (t91 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = 29U;
	uint64_t x391 = 4680313605497LLU;

	t92 = (x389&(x390|(x391/x392)));

	if (t92 != 71401472LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = -1;
	uint32_t x395 = 19554U;
	int32_t x396 = INT32_MIN;
	uint32_t t93 = 970684504U;

	t93 = (x393&(x394|(x395/x396)));

	if (t93 != 4294934528U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = 1440U;

	t94 = (x397&(x398|(x399/x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	volatile uint64_t x402 = 1169LLU;
	static int16_t x404 = INT16_MIN;
	uint64_t t95 = 192370LLU;

	t95 = (x401&(x402|(x403/x404)));

	if (t95 != 18446462598732842129LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = 1U;
	volatile int64_t x406 = INT64_MAX;
	int64_t x407 = INT64_MIN;
	int64_t t96 = -3LL;

	t96 = (x405&(x406|(x407/x408)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;

	t97 = (x409&(x410|(x411/x412)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = 13121;
	int8_t x414 = INT8_MAX;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MIN;

	t98 = (x413&(x414|(x415/x416)));

	if (t98 != 65) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x417 = 130248628;
	uint16_t x419 = 3U;
	static volatile int32_t t99 = 962050;

	t99 = (x417&(x418|(x419/x420)));

	if (t99 != 130248576) { NG(); } else { ; }
	
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

