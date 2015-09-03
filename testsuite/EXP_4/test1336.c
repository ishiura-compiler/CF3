#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x11 = UINT64_MAX;
int64_t x12 = INT64_MIN;
uint64_t x15 = 5498289807565321013LLU;
int32_t t3 = 0;
volatile int8_t x19 = INT8_MIN;
volatile int8_t x22 = INT8_MIN;
int64_t x24 = -1LL;
int32_t t5 = -40589;
static int32_t x26 = INT32_MAX;
int64_t x31 = INT64_MIN;
int32_t x33 = INT32_MIN;
static uint64_t x34 = 11397LLU;
static int32_t t8 = 1;
uint16_t x38 = UINT16_MAX;
int16_t x57 = INT16_MIN;
int16_t x60 = -6396;
static volatile int32_t t15 = 564895153;
int32_t t16 = 92173879;
volatile uint16_t x69 = UINT16_MAX;
volatile int64_t x74 = -77917890843230LL;
uint16_t x80 = 3U;
int16_t x92 = -1;
volatile int32_t t22 = -354652352;
int32_t t24 = -4;
static uint16_t x102 = 482U;
uint8_t x104 = 78U;
static volatile uint8_t x112 = 1U;
int64_t x119 = INT64_MIN;
int16_t x123 = INT16_MIN;
int16_t x124 = -49;
int64_t x127 = -1LL;
int32_t x129 = 7792;
static uint16_t x132 = 6U;
int16_t x136 = -57;
volatile int32_t t33 = 75293;
int32_t t34 = 1;
int32_t t37 = 421787482;
int32_t t38 = 2149338;
uint16_t x157 = 96U;
volatile uint64_t x160 = 2741002LLU;
int32_t t39 = 150159011;
volatile int64_t x165 = INT64_MIN;
int16_t x174 = INT16_MAX;
uint8_t x176 = UINT8_MAX;
uint8_t x188 = 14U;
volatile int32_t t48 = 5737243;
static uint64_t x199 = UINT64_MAX;
uint8_t x203 = 56U;
uint64_t x207 = 65116427LLU;
int32_t x208 = -7;
int32_t t51 = 201797868;
uint16_t x223 = 42U;
volatile int32_t t57 = -3977906;
volatile uint16_t x233 = 28U;
uint8_t x237 = 0U;
uint16_t x238 = 2U;
int8_t x242 = INT8_MAX;
int32_t t60 = 88146;
volatile int16_t x245 = -1;
static int64_t x247 = -1LL;
uint8_t x248 = UINT8_MAX;
volatile int64_t x251 = INT64_MAX;
int64_t x252 = INT64_MIN;
static uint64_t x260 = UINT64_MAX;
volatile int32_t t65 = 160777;
int32_t x270 = INT32_MAX;
static volatile int64_t x276 = 1676LL;
volatile int32_t t68 = 157323;
volatile uint16_t x286 = UINT16_MAX;
int32_t t71 = 373440857;
static int16_t x290 = INT16_MIN;
int32_t t72 = -670;
int32_t x294 = INT32_MAX;
int32_t t74 = -483718;
int16_t x305 = INT16_MIN;
uint16_t x307 = 4321U;
static uint32_t x312 = 12U;
int32_t x313 = INT32_MIN;
int16_t x314 = 115;
int8_t x324 = 3;
int16_t x325 = -1;
uint32_t x336 = UINT32_MAX;
int16_t x337 = 1;
int8_t x339 = -1;
int16_t x347 = INT16_MIN;
int32_t t86 = -1;
int32_t x349 = -1;
int32_t t88 = 4302;
int32_t t89 = -506;
volatile int16_t x362 = -4656;
int16_t x371 = INT16_MAX;
volatile int64_t x374 = INT64_MIN;
int16_t x390 = INT16_MIN;
int32_t x391 = INT32_MIN;
int64_t x392 = INT64_MIN;
int32_t t97 = 0;
volatile int64_t x397 = -1LL;


void f0(void) {
	uint16_t x1 = 0U;
	int64_t x2 = -206533398197837240LL;
	uint16_t x3 = 2U;
	uint8_t x4 = 31U;
	volatile int32_t t0 = 161533318;

	t0 = (x1<=(x2|(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -44;
	static volatile int32_t x6 = -1;
	static int32_t x7 = -2288163;
	int8_t x8 = INT8_MAX;
	static volatile int32_t t1 = -48571;

	t1 = (x5<=(x6|(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 447200082LL;
	volatile uint32_t x10 = 73600422U;
	volatile int32_t t2 = -187135775;

	t2 = (x9<=(x10|(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static int16_t x14 = INT16_MAX;
	uint32_t x16 = 232U;

	t3 = (x13<=(x14|(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	uint32_t x18 = 1U;
	uint32_t x20 = 241500U;
	volatile int32_t t4 = 0;

	t4 = (x17<=(x18|(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 9U;
	uint16_t x23 = UINT16_MAX;

	t5 = (x21<=(x22|(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 8U;
	int16_t x27 = 0;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -25190514;

	t6 = (x25<=(x26|(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -6;
	static int32_t x30 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	static volatile int32_t t7 = 151;

	t7 = (x29<=(x30|(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x35 = 90U;
	int8_t x36 = -4;

	t8 = (x33<=(x34|(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -11903;
	uint16_t x39 = 23U;
	volatile int8_t x40 = INT8_MIN;
	int32_t t9 = 75172366;

	t9 = (x37<=(x38|(x39==x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int8_t x42 = INT8_MAX;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = -1;
	static int32_t t10 = 28584;

	t10 = (x41<=(x42|(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	int32_t x46 = 125475;
	int64_t x47 = -1342263LL;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = -5458783;

	t11 = (x45<=(x46|(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	volatile uint8_t x50 = 3U;
	int8_t x51 = INT8_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -277777;

	t12 = (x49<=(x50|(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	static uint16_t x54 = 1U;
	int32_t x55 = -998773;
	uint8_t x56 = 79U;
	int32_t t13 = -7;

	t13 = (x53<=(x54|(x55==x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 11U;
	int16_t x59 = 83;
	volatile int32_t t14 = 811667;

	t14 = (x57<=(x58|(x59==x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint8_t x62 = 1U;
	volatile int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;

	t15 = (x61<=(x62|(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static uint32_t x66 = 707399797U;
	static int16_t x67 = -6;
	volatile uint64_t x68 = UINT64_MAX;

	t16 = (x65<=(x66|(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1;
	uint8_t x71 = 0U;
	uint16_t x72 = 125U;
	volatile int32_t t17 = 4189829;

	t17 = (x69<=(x70|(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	static int16_t x75 = -1;
	volatile int8_t x76 = INT8_MAX;
	static int32_t t18 = -170528;

	t18 = (x73<=(x74|(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -1;
	int16_t x79 = INT16_MAX;
	volatile int32_t t19 = -2475;

	t19 = (x77<=(x78|(x79==x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = -1LL;
	static int8_t x84 = 27;
	int32_t t20 = -1;

	t20 = (x81<=(x82|(x83==x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 55U;
	uint8_t x86 = 2U;
	int64_t x87 = 1693337749932432LL;
	volatile uint16_t x88 = 11U;
	int32_t t21 = 16;

	t21 = (x85<=(x86|(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -67790284968090107LL;
	volatile int16_t x90 = -1478;
	volatile int32_t x91 = -1;

	t22 = (x89<=(x90|(x91==x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = INT32_MIN;
	int32_t x95 = 55196;
	int64_t x96 = -1LL;
	int32_t t23 = -218;

	t23 = (x93<=(x94|(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = 49;
	static volatile uint8_t x98 = 96U;
	int8_t x99 = 7;
	static int64_t x100 = -1LL;

	t24 = (x97<=(x98|(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	static int64_t x103 = INT64_MAX;
	static int32_t t25 = 3551730;

	t25 = (x101<=(x102|(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = UINT64_MAX;
	volatile int32_t x106 = -1;
	int8_t x107 = 0;
	int32_t x108 = 1;
	static int32_t t26 = -9692316;

	t26 = (x105<=(x106|(x107==x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 125929312069LLU;
	uint8_t x110 = 1U;
	static uint8_t x111 = 58U;
	int32_t t27 = -3820;

	t27 = (x109<=(x110|(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static int16_t x114 = -138;
	int16_t x115 = 1;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -112155459;

	t28 = (x113<=(x114|(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static int16_t x118 = INT16_MIN;
	int16_t x120 = 63;
	int32_t t29 = 85;

	t29 = (x117<=(x118|(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = -1;
	volatile int32_t t30 = 4;

	t30 = (x121<=(x122|(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 102178690;
	uint64_t x126 = 184562540552LLU;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -1969116;

	t31 = (x125<=(x126|(x127==x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 3954U;
	volatile int64_t x131 = INT64_MAX;
	volatile int32_t t32 = -401;

	t32 = (x129<=(x130|(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 152U;
	volatile int32_t x134 = -26161955;
	volatile int64_t x135 = 472101897127LL;

	t33 = (x133<=(x134|(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	uint16_t x138 = 265U;
	volatile int16_t x139 = 46;
	static int16_t x140 = -1;

	t34 = (x137<=(x138|(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 11556068U;
	uint8_t x142 = UINT8_MAX;
	uint8_t x143 = UINT8_MAX;
	int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -1;

	t35 = (x141<=(x142|(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MIN;
	int64_t x147 = -2193829495LL;
	uint64_t x148 = 410105LLU;
	volatile int32_t t36 = -3727527;

	t36 = (x145<=(x146|(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	int8_t x151 = 6;
	int64_t x152 = -207478521962LL;

	t37 = (x149<=(x150|(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -2;
	volatile uint64_t x154 = UINT64_MAX;
	uint32_t x155 = 36149U;
	static int16_t x156 = INT16_MIN;

	t38 = (x153<=(x154|(x155==x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x158 = 1U;
	int64_t x159 = INT64_MAX;

	t39 = (x157<=(x158|(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x161 = 13399U;
	static uint32_t x162 = UINT32_MAX;
	uint16_t x163 = 122U;
	uint64_t x164 = 3104136651715LLU;
	int32_t t40 = -119436164;

	t40 = (x161<=(x162|(x163==x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -1;

	t41 = (x165<=(x166|(x167==x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	uint16_t x172 = UINT16_MAX;
	int32_t t42 = -7;

	t42 = (x169<=(x170|(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	int32_t t43 = 86;

	t43 = (x173<=(x174|(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int32_t x178 = 13;
	static uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 1572;

	t44 = (x177<=(x178|(x179==x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = INT64_MAX;
	int8_t x183 = -1;
	int32_t x184 = -16626;
	static volatile int32_t t45 = 7859;

	t45 = (x181<=(x182|(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = 1;
	int16_t x187 = INT16_MIN;
	int32_t t46 = -1;

	t46 = (x185<=(x186|(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 2942;
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = UINT16_MAX;
	static volatile int32_t t47 = -69;

	t47 = (x189<=(x190|(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 2U;
	uint32_t x194 = 257U;
	static uint32_t x195 = 27U;
	static int64_t x196 = -1LL;

	t48 = (x193<=(x194|(x195==x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	int32_t x198 = INT32_MIN;
	static volatile uint32_t x200 = 1029438U;
	int32_t t49 = 886308654;

	t49 = (x197<=(x198|(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = INT16_MAX;
	volatile int32_t x204 = INT32_MIN;
	int32_t t50 = 69;

	t50 = (x201<=(x202|(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	static uint64_t x206 = 31702870771LLU;

	t51 = (x205<=(x206|(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint8_t x210 = 0U;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -335;
	static volatile int32_t t52 = 116914662;

	t52 = (x209<=(x210|(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 423U;
	volatile int32_t x214 = 902473200;
	volatile int16_t x215 = INT16_MIN;
	static int32_t x216 = INT32_MIN;
	static int32_t t53 = 12347;

	t53 = (x213<=(x214|(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 13U;
	static volatile int16_t x218 = 37;
	uint32_t x219 = 229855U;
	uint64_t x220 = 79979071256240LLU;
	static int32_t t54 = 29;

	t54 = (x217<=(x218|(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	uint32_t x222 = 7U;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -8118743;

	t55 = (x221<=(x222|(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	uint64_t x226 = 442567695403356LLU;
	static int32_t x227 = -1;
	int8_t x228 = -1;
	volatile int32_t t56 = -8173;

	t56 = (x225<=(x226|(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	int16_t x230 = -419;
	int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;

	t57 = (x229<=(x230|(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 0U;
	volatile int16_t x235 = INT16_MIN;
	volatile int16_t x236 = -1;
	int32_t t58 = 146;

	t58 = (x233<=(x234|(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x239 = INT8_MAX;
	uint64_t x240 = UINT64_MAX;
	int32_t t59 = 1;

	t59 = (x237<=(x238|(x239==x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 261U;
	int16_t x243 = -1;
	int64_t x244 = INT64_MAX;

	t60 = (x241<=(x242|(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x246 = INT16_MAX;
	static int32_t t61 = 550625;

	t61 = (x245<=(x246|(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 11831U;
	uint16_t x250 = 13029U;
	volatile int32_t t62 = -7284051;

	t62 = (x249<=(x250|(x251==x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x253 = 1LLU;
	uint64_t x254 = 28774230LLU;
	int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = -100993;

	t63 = (x253<=(x254|(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 5913;
	int8_t x258 = INT8_MAX;
	int64_t x259 = INT64_MIN;
	int32_t t64 = -209936844;

	t64 = (x257<=(x258|(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int16_t x262 = 3;
	uint16_t x263 = 485U;
	int16_t x264 = INT16_MAX;

	t65 = (x261<=(x262|(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	volatile int32_t x266 = INT32_MIN;
	int64_t x267 = -3872LL;
	uint8_t x268 = 14U;
	int32_t t66 = 1;

	t66 = (x265<=(x266|(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -3430;
	uint16_t x271 = 122U;
	uint8_t x272 = 58U;
	volatile int32_t t67 = -59167069;

	t67 = (x269<=(x270|(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	volatile uint32_t x274 = UINT32_MAX;
	int8_t x275 = -1;

	t68 = (x273<=(x274|(x275==x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x278 = INT64_MAX;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 942417062108LLU;
	int32_t t69 = -89;

	t69 = (x277<=(x278|(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 1678U;
	static uint64_t x282 = 3933LLU;
	static int16_t x283 = -1;
	int64_t x284 = -1LL;
	static volatile int32_t t70 = 42;

	t70 = (x281<=(x282|(x283==x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x287 = -1;
	int64_t x288 = -1223887989791LL;

	t71 = (x285<=(x286|(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = INT8_MAX;
	int64_t x291 = INT64_MAX;
	uint16_t x292 = 14U;

	t72 = (x289<=(x290|(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	uint8_t x295 = 19U;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = 1;

	t73 = (x293<=(x294|(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MAX;
	volatile int32_t x300 = 1094746;

	t74 = (x297<=(x298|(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	static uint32_t x303 = 49640U;
	int16_t x304 = 5;
	int32_t t75 = -26044662;

	t75 = (x301<=(x302|(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 4196564739LLU;
	int8_t x308 = INT8_MIN;
	static int32_t t76 = 239015;

	t76 = (x305<=(x306|(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	int16_t x310 = INT16_MIN;
	uint64_t x311 = 251917364263760LLU;
	int32_t t77 = -223;

	t77 = (x309<=(x310|(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x315 = -67218;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t78 = -149653;

	t78 = (x313<=(x314|(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MAX;
	volatile int8_t x318 = -11;
	uint32_t x319 = UINT32_MAX;
	uint8_t x320 = 0U;
	int32_t t79 = 14709;

	t79 = (x317<=(x318|(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x321 = UINT8_MAX;
	static volatile int8_t x322 = INT8_MIN;
	volatile int16_t x323 = -1;
	volatile int32_t t80 = 18988;

	t80 = (x321<=(x322|(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x326 = UINT64_MAX;
	uint16_t x327 = 6009U;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = 517436;

	t81 = (x325<=(x326|(x327==x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	int32_t x330 = INT32_MAX;
	static int16_t x331 = INT16_MIN;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 1564516;

	t82 = (x329<=(x330|(x331==x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -63;
	uint8_t x334 = UINT8_MAX;
	static volatile uint32_t x335 = 921131126U;
	static int32_t t83 = 1100;

	t83 = (x333<=(x334|(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = INT8_MAX;
	int32_t x340 = -1;
	int32_t t84 = 2;

	t84 = (x337<=(x338|(x339==x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	volatile uint64_t x342 = UINT64_MAX;
	uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 922U;
	volatile int32_t t85 = -1204;

	t85 = (x341<=(x342|(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 9U;
	uint16_t x346 = 5U;
	int16_t x348 = 1;

	t86 = (x345<=(x346|(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	static int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -1041866;

	t87 = (x349<=(x350|(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 1U;
	uint64_t x354 = 92237690547195LLU;
	uint32_t x355 = 990298U;
	int32_t x356 = INT32_MIN;

	t88 = (x353<=(x354|(x355==x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	uint16_t x358 = 730U;
	volatile int32_t x359 = INT32_MAX;
	uint8_t x360 = UINT8_MAX;

	t89 = (x357<=(x358|(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	static int64_t x363 = 69868LL;
	int16_t x364 = INT16_MIN;
	int32_t t90 = -32242275;

	t90 = (x361<=(x362|(x363==x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 2060974966536LL;
	int32_t x366 = INT32_MIN;
	volatile uint32_t x367 = 2U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 8002;

	t91 = (x365<=(x366|(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int64_t x370 = -1LL;
	int16_t x372 = INT16_MAX;
	static int32_t t92 = -78815273;

	t92 = (x369<=(x370|(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 46U;
	static int8_t x375 = 1;
	static volatile int8_t x376 = -1;
	int32_t t93 = 108;

	t93 = (x373<=(x374|(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 200U;
	static uint8_t x378 = UINT8_MAX;
	uint8_t x379 = 1U;
	uint64_t x380 = 13052523700LLU;
	int32_t t94 = 17845;

	t94 = (x377<=(x378|(x379==x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 7;
	volatile int32_t x382 = -1;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 451668;

	t95 = (x381<=(x382|(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 3;
	int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	uint32_t x388 = 413581U;
	int32_t t96 = -1;

	t96 = (x385<=(x386|(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 145951747;

	t97 = (x389<=(x390|(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	uint16_t x394 = 2954U;
	uint64_t x395 = 89813016LLU;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t98 = 7913;

	t98 = (x393<=(x394|(x395==x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = 0;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MIN;
	static int32_t t99 = -5517906;

	t99 = (x397<=(x398|(x399==x400)));

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

