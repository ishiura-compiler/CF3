#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 1U;
static int8_t x9 = 0;
uint32_t x10 = 2U;
int32_t x31 = -1;
static int32_t t6 = -13;
int16_t x38 = 0;
int8_t x43 = 29;
volatile int32_t t11 = -16682943;
int8_t x58 = INT8_MIN;
int32_t x63 = -989567;
int16_t x66 = INT16_MIN;
int64_t x75 = 5587437706923686LL;
int32_t t17 = -511349537;
volatile int32_t t18 = -2029;
volatile int8_t x85 = INT8_MIN;
int64_t x91 = INT64_MIN;
static uint8_t x92 = 15U;
int16_t x93 = -1;
int64_t x108 = INT64_MIN;
volatile int32_t t25 = 0;
int16_t x114 = INT16_MIN;
static volatile int64_t x124 = INT64_MIN;
static uint32_t x128 = 757U;
uint64_t x129 = 231081393LLU;
static volatile int8_t x142 = 1;
volatile int8_t x147 = 44;
volatile int32_t t35 = -17;
int32_t t36 = -47639969;
static uint16_t x154 = 191U;
static int32_t t37 = 1;
volatile uint8_t x164 = UINT8_MAX;
static int16_t x167 = INT16_MAX;
static uint16_t x170 = UINT16_MAX;
static int32_t x175 = -7362109;
volatile int32_t x176 = INT32_MIN;
uint8_t x184 = 13U;
volatile int32_t t44 = -213;
volatile int8_t x189 = INT8_MIN;
uint32_t x191 = 134346U;
static volatile int32_t t46 = 162;
int32_t t47 = -13;
uint8_t x197 = UINT8_MAX;
int16_t x199 = -1;
int32_t t48 = 1;
int8_t x202 = -1;
static int64_t x204 = -1LL;
static int16_t x205 = INT16_MAX;
int8_t x217 = INT8_MIN;
volatile int16_t x219 = INT16_MIN;
uint8_t x225 = UINT8_MAX;
volatile int32_t t55 = 1462989;
int16_t x237 = INT16_MAX;
int32_t x244 = INT32_MAX;
volatile int8_t x248 = -1;
int16_t x251 = -474;
static int32_t t61 = -78;
uint64_t x259 = UINT64_MAX;
volatile int32_t t64 = 349;
int16_t x270 = -1110;
int32_t x282 = -1;
int32_t t68 = -230047277;
volatile int8_t x287 = INT8_MAX;
static volatile int32_t x299 = -6;
int64_t x304 = 233650207275988LL;
static volatile int32_t t72 = -62;
int32_t t76 = -22986507;
int8_t x323 = -2;
volatile int32_t x326 = 698447;
int8_t x327 = -52;
static uint32_t x331 = 29594U;
uint32_t x336 = UINT32_MAX;
uint8_t x337 = UINT8_MAX;
int32_t x339 = INT32_MIN;
int8_t x340 = INT8_MIN;
int32_t x348 = 118120577;
volatile uint16_t x351 = 1981U;
volatile uint32_t x356 = 117744281U;
int32_t t85 = 507;
uint8_t x364 = 43U;
volatile int32_t t87 = 18000147;
uint8_t x370 = 1U;
int64_t x371 = -1LL;
int8_t x376 = 24;
volatile uint8_t x385 = UINT8_MAX;
static int32_t x386 = -1;
uint32_t x393 = 143667U;
int16_t x398 = INT16_MIN;
static int32_t x402 = INT32_MAX;
int32_t x404 = -2905950;
int32_t t98 = -14;


void f0(void) {
	volatile int32_t x1 = 89626312;
	int64_t x2 = -3870787585489645LL;
	int64_t x4 = -267709291029413137LL;
	int32_t t0 = 0;

	t0 = (x1==(x2|(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 178U;
	uint8_t x6 = UINT8_MAX;
	static int16_t x7 = -863;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 49;

	t1 = (x5==(x6|(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = 90U;
	int8_t x12 = 39;
	static volatile int32_t t2 = 13159;

	t2 = (x9==(x10|(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 31;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -1LL;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -148435812;

	t3 = (x13==(x14|(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 439230821U;
	static int32_t x18 = -1;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = 2U;
	volatile int32_t t4 = -4;

	t4 = (x17==(x18|(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = -1;
	uint16_t x23 = 5U;
	int32_t x24 = INT32_MAX;
	int32_t t5 = 2438;

	t5 = (x21==(x22|(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x29 = -1LL;
	uint16_t x30 = 206U;
	int64_t x32 = -276968025863LL;

	t6 = (x29==(x30|(x31/x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 17716298578080LLU;
	static int16_t x34 = 9020;
	uint16_t x35 = 10653U;
	int8_t x36 = -1;
	int32_t t7 = 305;

	t7 = (x33==(x34|(x35/x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	int32_t x39 = INT32_MAX;
	int8_t x40 = -42;
	volatile int32_t t8 = 115565275;

	t8 = (x37==(x38|(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = INT8_MIN;
	static int32_t x44 = INT32_MAX;
	int32_t t9 = 476;

	t9 = (x41==(x42|(x43/x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MAX;
	uint8_t x46 = 3U;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MAX;
	volatile int32_t t10 = -1398;

	t10 = (x45==(x46|(x47/x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	static uint8_t x50 = 71U;
	static int64_t x51 = 15004155466769080LL;
	uint32_t x52 = 1742181886U;

	t11 = (x49==(x50|(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	volatile int32_t x54 = -10125085;
	uint32_t x55 = 627909610U;
	int32_t x56 = -1;
	volatile int32_t t12 = -3976;

	t12 = (x53==(x54|(x55/x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MIN;
	int64_t x59 = -16576LL;
	int64_t x60 = INT64_MIN;
	int32_t t13 = 14312;

	t13 = (x57==(x58|(x59/x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x62 = 58974095U;
	int64_t x64 = 230295436533705523LL;
	int32_t t14 = 2;

	t14 = (x61==(x62|(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int64_t x67 = 202642306906LL;
	int8_t x68 = INT8_MAX;
	volatile int32_t t15 = -229799913;

	t15 = (x65==(x66|(x67/x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	uint32_t x71 = UINT32_MAX;
	uint64_t x72 = 6113924533023968880LLU;
	int32_t t16 = 1627095;

	t16 = (x69==(x70|(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	volatile int8_t x74 = -1;
	uint8_t x76 = UINT8_MAX;

	t17 = (x73==(x74|(x75/x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = INT64_MAX;
	volatile int16_t x78 = -1;
	volatile uint32_t x79 = UINT32_MAX;
	int64_t x80 = -91LL;

	t18 = (x77==(x78|(x79/x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	static int32_t x82 = INT32_MAX;
	static volatile int32_t x83 = -47761010;
	static int16_t x84 = -1;
	int32_t t19 = -9;

	t19 = (x81==(x82|(x83/x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x86 = 11U;
	uint32_t x87 = 788568U;
	int8_t x88 = -1;
	volatile int32_t t20 = 481743;

	t20 = (x85==(x86|(x87/x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MAX;
	int16_t x90 = INT16_MAX;
	int32_t t21 = -142731;

	t21 = (x89==(x90|(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x94 = UINT8_MAX;
	static int32_t x95 = 148308880;
	static uint8_t x96 = 1U;
	static volatile int32_t t22 = -35045;

	t22 = (x93==(x94|(x95/x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	volatile int32_t x98 = 0;
	volatile uint32_t x99 = 33812U;
	int32_t x100 = 14;
	volatile int32_t t23 = -1;

	t23 = (x97==(x98|(x99/x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 2011189U;
	volatile uint64_t x102 = 51231LLU;
	uint16_t x103 = 0U;
	volatile int32_t x104 = INT32_MAX;
	static int32_t t24 = -38434;

	t24 = (x101==(x102|(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	uint8_t x106 = 12U;
	volatile int8_t x107 = INT8_MIN;

	t25 = (x105==(x106|(x107/x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MAX;
	int8_t x110 = -1;
	static int32_t x111 = INT32_MIN;
	int8_t x112 = 20;
	int32_t t26 = 33461689;

	t26 = (x109==(x110|(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = INT8_MAX;
	int32_t x115 = -1767;
	int8_t x116 = INT8_MIN;
	int32_t t27 = 6135;

	t27 = (x113==(x114|(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = INT32_MAX;
	static int16_t x118 = INT16_MIN;
	uint16_t x119 = 14U;
	static int8_t x120 = 8;
	static volatile int32_t t28 = -3;

	t28 = (x117==(x118|(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = INT64_MIN;
	static int64_t x122 = 56646718366279LL;
	int32_t x123 = INT32_MAX;
	int32_t t29 = 6;

	t29 = (x121==(x122|(x123/x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	static volatile int32_t x126 = INT32_MAX;
	int64_t x127 = -1LL;
	int32_t t30 = -1472;

	t30 = (x125==(x126|(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = 1;
	volatile int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	volatile int32_t t31 = -42;

	t31 = (x129==(x130|(x131/x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 1U;
	uint32_t x134 = UINT32_MAX;
	uint64_t x135 = UINT64_MAX;
	static int8_t x136 = -35;
	static volatile int32_t t32 = -8543;

	t32 = (x133==(x134|(x135/x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = INT16_MAX;
	int8_t x138 = INT8_MIN;
	int8_t x139 = -1;
	uint16_t x140 = UINT16_MAX;
	int32_t t33 = 2;

	t33 = (x137==(x138|(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = INT32_MIN;
	static int64_t x143 = INT64_MIN;
	int32_t x144 = -158461;
	int32_t t34 = 983487;

	t34 = (x141==(x142|(x143/x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MAX;
	volatile int16_t x148 = INT16_MIN;

	t35 = (x145==(x146|(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = INT32_MIN;
	int32_t x150 = -1;
	static volatile int16_t x151 = INT16_MIN;
	int8_t x152 = -9;

	t36 = (x149==(x150|(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MIN;
	int64_t x155 = -65399LL;
	int16_t x156 = -769;

	t37 = (x153==(x154|(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x157 = UINT8_MAX;
	static volatile uint32_t x158 = 20211U;
	uint16_t x159 = UINT16_MAX;
	volatile int64_t x160 = 1696LL;
	int32_t t38 = -16572;

	t38 = (x157==(x158|(x159/x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MAX;
	int8_t x163 = 3;
	volatile int32_t t39 = -421957;

	t39 = (x161==(x162|(x163/x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 308U;
	static volatile int16_t x166 = -1;
	int64_t x168 = INT64_MIN;
	int32_t t40 = 1;

	t40 = (x165==(x166|(x167/x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MAX;
	int16_t x171 = -7;
	uint16_t x172 = UINT16_MAX;
	int32_t t41 = -10;

	t41 = (x169==(x170|(x171/x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = UINT8_MAX;
	int8_t x174 = -1;
	static volatile int32_t t42 = -3395349;

	t42 = (x173==(x174|(x175/x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = -1;
	int64_t x178 = INT64_MAX;
	static int32_t x179 = -1;
	volatile int8_t x180 = INT8_MIN;
	int32_t t43 = -91596810;

	t43 = (x177==(x178|(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 3036U;
	static int8_t x182 = 0;
	static volatile int8_t x183 = 0;

	t44 = (x181==(x182|(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 729144891;
	int16_t x186 = 105;
	static int16_t x187 = -6954;
	static uint16_t x188 = 3U;
	static int32_t t45 = 58;

	t45 = (x185==(x186|(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x190 = 24U;
	int8_t x192 = INT8_MAX;

	t46 = (x189==(x190|(x191/x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 0;
	int64_t x194 = -27LL;
	uint16_t x195 = UINT16_MAX;
	static volatile int64_t x196 = INT64_MIN;

	t47 = (x193==(x194|(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x198 = 4123057444702703LL;
	int32_t x200 = 54938;

	t48 = (x197==(x198|(x199/x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	static int8_t x203 = -1;
	volatile int32_t t49 = 1;

	t49 = (x201==(x202|(x203/x204)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = INT32_MAX;
	volatile int64_t x207 = -81010706600944669LL;
	int8_t x208 = INT8_MIN;
	int32_t t50 = -1;

	t50 = (x205==(x206|(x207/x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -1LL;
	static uint32_t x214 = 776U;
	int16_t x215 = -145;
	int32_t x216 = INT32_MAX;
	volatile int32_t t51 = -3817;

	t51 = (x213==(x214|(x215/x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x218 = -1LL;
	uint32_t x220 = 383U;
	static volatile int32_t t52 = 7216;

	t52 = (x217==(x218|(x219/x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = UINT16_MAX;
	uint64_t x222 = 7372353033079969LLU;
	int64_t x223 = -1LL;
	int16_t x224 = INT16_MAX;
	int32_t t53 = -3382;

	t53 = (x221==(x222|(x223/x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x226 = 0LL;
	uint16_t x227 = 5U;
	int8_t x228 = 1;
	volatile int32_t t54 = 12;

	t54 = (x225==(x226|(x227/x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = INT16_MIN;
	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 539U;
	static int32_t x232 = INT32_MIN;

	t55 = (x229==(x230|(x231/x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x233 = UINT32_MAX;
	uint8_t x234 = UINT8_MAX;
	int8_t x235 = 10;
	int32_t x236 = INT32_MIN;
	int32_t t56 = 7;

	t56 = (x233==(x234|(x235/x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x238 = UINT32_MAX;
	int64_t x239 = INT64_MIN;
	static uint16_t x240 = 925U;
	volatile int32_t t57 = -374648;

	t57 = (x237==(x238|(x239/x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MAX;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = 38;
	int32_t t58 = 2105495;

	t58 = (x241==(x242|(x243/x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MIN;
	static uint16_t x247 = 6U;
	int32_t t59 = 17847414;

	t59 = (x245==(x246|(x247/x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 11782631311746LLU;
	int16_t x252 = INT16_MAX;
	volatile int32_t t60 = 452877;

	t60 = (x249==(x250|(x251/x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 100261U;
	int8_t x254 = 7;
	static int64_t x255 = -1LL;
	int64_t x256 = -1LL;

	t61 = (x253==(x254|(x255/x256)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	static uint16_t x258 = UINT16_MAX;
	static uint16_t x260 = 641U;
	volatile int32_t t62 = -9038;

	t62 = (x257==(x258|(x259/x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = 27716U;
	int8_t x262 = 13;
	static int16_t x263 = 1;
	static int16_t x264 = 60;
	volatile int32_t t63 = 102055493;

	t63 = (x261==(x262|(x263/x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x265 = INT16_MIN;
	uint64_t x266 = 188086LLU;
	int16_t x267 = -308;
	int16_t x268 = -5;

	t64 = (x265==(x266|(x267/x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	volatile int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t65 = 1299251;

	t65 = (x269==(x270|(x271/x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x273 = 25U;
	static int8_t x274 = INT8_MAX;
	static uint8_t x275 = 0U;
	int64_t x276 = -1LL;
	int32_t t66 = 1;

	t66 = (x273==(x274|(x275/x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = 1;
	static uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 6362194502061040LLU;
	int16_t x280 = INT16_MIN;
	static int32_t t67 = -36;

	t67 = (x277==(x278|(x279/x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int32_t x283 = -19;
	int64_t x284 = -21595812062LL;

	t68 = (x281==(x282|(x283/x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -30;
	int64_t x286 = -1LL;
	int16_t x288 = -101;
	int32_t t69 = 1;

	t69 = (x285==(x286|(x287/x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x293 = 5LL;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MAX;
	int32_t t70 = -75;

	t70 = (x293==(x294|(x295/x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t71 = -487265;

	t71 = (x297==(x298|(x299/x300)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 27U;
	uint32_t x303 = 4U;

	t72 = (x301==(x302|(x303/x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = -1;
	int16_t x306 = -1;
	volatile uint16_t x307 = 403U;
	int16_t x308 = 7;
	int32_t t73 = 60894980;

	t73 = (x305==(x306|(x307/x308)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MIN;
	volatile int8_t x310 = 47;
	int16_t x311 = INT16_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t74 = -1;

	t74 = (x309==(x310|(x311/x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x313 = INT16_MIN;
	volatile uint16_t x314 = 2539U;
	uint8_t x315 = UINT8_MAX;
	int64_t x316 = INT64_MIN;
	int32_t t75 = -444;

	t75 = (x313==(x314|(x315/x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	int8_t x319 = 51;
	static volatile int64_t x320 = 913982518LL;

	t76 = (x317==(x318|(x319/x320)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = -1;
	volatile int64_t x322 = 101041801LL;
	static uint8_t x324 = UINT8_MAX;
	int32_t t77 = -540;

	t77 = (x321==(x322|(x323/x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = 1;
	volatile uint64_t x328 = 3600834LLU;
	volatile int32_t t78 = 264356;

	t78 = (x325==(x326|(x327/x328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -3LL;
	static int64_t x330 = -2994717703803LL;
	int16_t x332 = INT16_MIN;
	static int32_t t79 = -108541856;

	t79 = (x329==(x330|(x331/x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 28U;
	static uint16_t x335 = UINT16_MAX;
	volatile int32_t t80 = 61902;

	t80 = (x333==(x334|(x335/x336)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x338 = 4052098U;
	volatile int32_t t81 = 0;

	t81 = (x337==(x338|(x339/x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = 1;
	static int32_t x343 = -1;
	uint16_t x344 = 18U;
	volatile int32_t t82 = 1592;

	t82 = (x341==(x342|(x343/x344)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MIN;
	static int64_t x346 = -1LL;
	static uint8_t x347 = UINT8_MAX;
	int32_t t83 = 14897;

	t83 = (x345==(x346|(x347/x348)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x350 = 56U;
	volatile int32_t x352 = INT32_MIN;
	int32_t t84 = 533241203;

	t84 = (x349==(x350|(x351/x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x353 = UINT16_MAX;
	int64_t x354 = 2313819244LL;
	uint8_t x355 = UINT8_MAX;

	t85 = (x353==(x354|(x355/x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x361 = 1;
	uint8_t x362 = 98U;
	volatile int64_t x363 = INT64_MAX;
	static volatile int32_t t86 = -5;

	t86 = (x361==(x362|(x363/x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -1;
	int32_t x366 = 1;
	volatile int8_t x367 = INT8_MIN;
	static int16_t x368 = 566;

	t87 = (x365==(x366|(x367/x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	static int16_t x372 = INT16_MAX;
	int32_t t88 = 0;

	t88 = (x369==(x370|(x371/x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x373 = UINT32_MAX;
	int16_t x374 = INT16_MAX;
	static uint32_t x375 = 15017017U;
	int32_t t89 = 203;

	t89 = (x373==(x374|(x375/x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	volatile int8_t x378 = -1;
	static int64_t x379 = INT64_MAX;
	uint16_t x380 = 11U;
	int32_t t90 = 176078035;

	t90 = (x377==(x378|(x379/x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x381 = -20292975;
	int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MAX;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t91 = -207716;

	t91 = (x381==(x382|(x383/x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x387 = INT32_MAX;
	uint32_t x388 = UINT32_MAX;
	static volatile int32_t t92 = -42467344;

	t92 = (x385==(x386|(x387/x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x389 = 217U;
	uint8_t x390 = UINT8_MAX;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 99U;
	volatile int32_t t93 = 2;

	t93 = (x389==(x390|(x391/x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x394 = -1;
	static int8_t x395 = -1;
	int32_t x396 = -4604;
	volatile int32_t t94 = 113236;

	t94 = (x393==(x394|(x395/x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x397 = 2LL;
	volatile uint16_t x399 = 1U;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t95 = -581;

	t95 = (x397==(x398|(x399/x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	int64_t x403 = INT64_MIN;
	int32_t t96 = 251;

	t96 = (x401==(x402|(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = INT32_MIN;
	uint16_t x410 = UINT16_MAX;
	volatile uint32_t x411 = 644U;
	uint16_t x412 = 78U;
	static int32_t t97 = 5093290;

	t97 = (x409==(x410|(x411/x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -8;
	int8_t x414 = INT8_MIN;
	int8_t x415 = -1;
	int32_t x416 = -1;

	t98 = (x413==(x414|(x415/x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	volatile uint32_t x418 = UINT32_MAX;
	volatile int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MIN;
	volatile int32_t t99 = 16527309;

	t99 = (x417==(x418|(x419/x420)));

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

