#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = -2671174177052495LL;
volatile int16_t x14 = -2;
int8_t x17 = 1;
int16_t x27 = INT16_MIN;
int32_t t6 = -1019;
uint16_t x29 = 4U;
static int64_t x31 = INT64_MIN;
int8_t x32 = -15;
volatile int8_t x39 = INT8_MAX;
int8_t x46 = INT8_MAX;
int8_t x52 = INT8_MAX;
uint32_t x57 = UINT32_MAX;
uint32_t x63 = 6U;
int32_t t15 = -13;
int16_t x89 = INT16_MIN;
volatile int8_t x91 = INT8_MIN;
static int64_t x97 = -35713835LL;
int8_t x99 = INT8_MIN;
int8_t x100 = INT8_MIN;
static int32_t t24 = -162;
int16_t x104 = INT16_MAX;
volatile int32_t t25 = -42;
uint8_t x107 = UINT8_MAX;
volatile int64_t x108 = -3027LL;
uint64_t x121 = 15765848310296645LLU;
volatile int32_t x122 = INT32_MAX;
static volatile uint64_t x131 = 342147044LLU;
int64_t x134 = 320872842631LL;
int64_t x140 = -59358LL;
int16_t x142 = 1316;
uint64_t x143 = 1001783403961131629LLU;
volatile uint8_t x149 = 0U;
int64_t x155 = -1LL;
uint64_t x161 = 2130435323064229LLU;
int8_t x164 = -1;
int32_t t41 = -18820493;
uint64_t x171 = UINT64_MAX;
volatile int32_t t42 = -59;
uint64_t x174 = 50LLU;
int16_t x181 = INT16_MIN;
static volatile uint64_t x192 = 8312539294388233LLU;
int64_t x193 = -3781813881LL;
volatile int32_t t49 = -1;
uint64_t x207 = UINT64_MAX;
int16_t x208 = -1;
int32_t t54 = -21223;
int64_t x221 = INT64_MIN;
uint64_t x228 = 2922776395041LLU;
int32_t t57 = -3620;
int32_t t58 = 2739;
uint16_t x238 = UINT16_MAX;
static int16_t x240 = -1;
uint64_t x244 = 957245827549005983LLU;
int64_t x245 = INT64_MIN;
static volatile int32_t t62 = 49701;
static volatile int16_t x256 = INT16_MIN;
int16_t x261 = INT16_MAX;
int32_t x262 = -1485;
volatile int16_t x268 = INT16_MAX;
uint8_t x282 = 1U;
static int64_t x298 = INT64_MIN;
uint8_t x299 = 3U;
static volatile int32_t t74 = 1333910;
uint16_t x303 = 269U;
int64_t x304 = 52898705758054LL;
int32_t x305 = 51581;
uint16_t x310 = UINT16_MAX;
static int32_t x314 = -1060361697;
static int64_t x320 = -1LL;
static uint64_t x322 = 0LLU;
int32_t x326 = INT32_MIN;
static uint16_t x328 = 1U;
uint64_t x334 = 12509642928642380LLU;
int64_t x335 = INT64_MAX;
uint8_t x336 = 23U;
uint32_t x337 = 0U;
int16_t x340 = INT16_MIN;
uint32_t x360 = 23314732U;
int32_t t89 = -769;
static int16_t x363 = INT16_MIN;
int16_t x369 = INT16_MIN;
volatile int32_t t92 = 0;
int32_t x376 = INT32_MAX;
int64_t x378 = INT64_MIN;
int16_t x394 = INT16_MIN;
uint64_t x398 = 282720301LLU;
static uint16_t x400 = UINT16_MAX;


void f0(void) {
	volatile int32_t x1 = -1;
	int32_t x2 = -712754;
	static int32_t x3 = -7;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 12;

	t0 = (x1<(x2|(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = 476LL;
	int64_t x7 = INT64_MIN;
	int16_t x8 = -372;
	volatile int32_t t1 = -174751;

	t1 = (x5<(x6|(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	volatile uint64_t x12 = 66LLU;
	volatile int32_t t2 = 970;

	t2 = (x9<(x10|(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x15 = -1;
	static int32_t x16 = -1;
	volatile int32_t t3 = -713;

	t3 = (x13<(x14|(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 1;
	static volatile int8_t x19 = 0;
	int32_t x20 = -10075;
	int32_t t4 = -139691486;

	t4 = (x17<(x18|(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 15U;
	int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -21294838;

	t5 = (x21<(x22|(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int32_t x26 = -316138913;
	uint8_t x28 = 1U;

	t6 = (x25<(x26|(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x30 = 217479750921LL;
	int32_t t7 = -60932;

	t7 = (x29<(x30|(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 4738U;
	static volatile uint16_t x34 = 2796U;
	uint64_t x35 = 1LLU;
	int64_t x36 = 108387539LL;
	static volatile int32_t t8 = -5476498;

	t8 = (x33<(x34|(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = -1;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = -268;

	t9 = (x37<(x38|(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 7577546U;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = -8962857;

	t10 = (x41<(x42|(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile uint32_t x47 = 1405309U;
	static volatile int8_t x48 = -1;
	volatile int32_t t11 = -1164291;

	t11 = (x45<(x46|(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	static uint32_t x50 = 43139U;
	volatile uint8_t x51 = 9U;
	static int32_t t12 = -250051048;

	t12 = (x49<(x50|(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	volatile uint32_t x54 = 8740U;
	static uint32_t x55 = 793U;
	int32_t x56 = -171437;
	static volatile int32_t t13 = -244;

	t13 = (x53<(x54|(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 4883U;
	static int16_t x59 = INT16_MIN;
	static int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = 6141420;

	t14 = (x57<(x58|(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	int32_t x62 = 1;
	uint32_t x64 = 0U;

	t15 = (x61<(x62|(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	static int64_t x66 = -3067LL;
	static uint32_t x67 = UINT32_MAX;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 27505;

	t16 = (x65<(x66|(x67<x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint8_t x70 = 116U;
	volatile int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 0;

	t17 = (x69<(x70|(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = 233U;
	uint32_t x74 = UINT32_MAX;
	volatile int64_t x75 = -735403LL;
	int64_t x76 = 63615634LL;
	static int32_t t18 = -46859;

	t18 = (x73<(x74|(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	volatile uint64_t x78 = UINT64_MAX;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = 33125;

	t19 = (x77<(x78|(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint16_t x82 = 0U;
	static uint64_t x83 = UINT64_MAX;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = -1;

	t20 = (x81<(x82|(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 63;
	volatile uint16_t x86 = 0U;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = -1LL;
	int32_t t21 = -9428032;

	t21 = (x85<(x86|(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = 6LL;
	int16_t x92 = INT16_MAX;
	int32_t t22 = 27512;

	t22 = (x89<(x90|(x91<x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 8252;
	uint64_t x94 = UINT64_MAX;
	volatile int16_t x95 = INT16_MAX;
	volatile uint8_t x96 = 1U;
	volatile int32_t t23 = -66154612;

	t23 = (x93<(x94|(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x98 = 26U;

	t24 = (x97<(x98|(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 1U;
	int64_t x102 = -518565LL;
	static uint8_t x103 = 55U;

	t25 = (x101<(x102|(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	int8_t x106 = -1;
	int32_t t26 = 170536;

	t26 = (x105<(x106|(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = -1;
	static int8_t x111 = 6;
	static int64_t x112 = INT64_MIN;
	int32_t t27 = 1335;

	t27 = (x109<(x110|(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static int32_t x114 = 245;
	int8_t x115 = INT8_MAX;
	uint32_t x116 = UINT32_MAX;
	int32_t t28 = -1361;

	t28 = (x113<(x114|(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -22;
	uint8_t x118 = UINT8_MAX;
	uint16_t x119 = UINT16_MAX;
	static int64_t x120 = INT64_MIN;
	int32_t t29 = -588;

	t29 = (x117<(x118|(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x123 = UINT8_MAX;
	int8_t x124 = INT8_MAX;
	static int32_t t30 = -456299;

	t30 = (x121<(x122|(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -5095;
	int64_t x126 = INT64_MIN;
	int32_t x127 = 91;
	int16_t x128 = -1;
	int32_t t31 = -1;

	t31 = (x125<(x126|(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MAX;
	static uint32_t x130 = UINT32_MAX;
	volatile int32_t x132 = -32;
	volatile int32_t t32 = 286475163;

	t32 = (x129<(x130|(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int16_t x135 = 6;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -760;

	t33 = (x133<(x134|(x135<x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = INT8_MAX;
	volatile uint8_t x138 = 4U;
	static volatile uint16_t x139 = 155U;
	int32_t t34 = 29442;

	t34 = (x137<(x138|(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 13U;
	static volatile uint32_t x144 = UINT32_MAX;
	static int32_t t35 = -1702224;

	t35 = (x141<(x142|(x143<x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	volatile uint64_t x146 = UINT64_MAX;
	int8_t x147 = -26;
	int8_t x148 = INT8_MAX;
	int32_t t36 = -138790;

	t36 = (x145<(x146|(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MIN;
	int8_t x151 = 1;
	uint64_t x152 = UINT64_MAX;
	int32_t t37 = 1;

	t37 = (x149<(x150|(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	static uint16_t x154 = 12520U;
	static uint64_t x156 = 4735638459935LLU;
	static int32_t t38 = -963;

	t38 = (x153<(x154|(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 78517338466823LLU;
	static int64_t x158 = -1LL;
	int64_t x159 = INT64_MIN;
	static int32_t x160 = INT32_MAX;
	volatile int32_t t39 = 7676226;

	t39 = (x157<(x158|(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 7U;
	int32_t x163 = INT32_MAX;
	static int32_t t40 = -243;

	t40 = (x161<(x162|(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 3;
	int8_t x166 = INT8_MIN;
	static int32_t x167 = 26;
	uint16_t x168 = UINT16_MAX;

	t41 = (x165<(x166|(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = -1;
	volatile int16_t x170 = -1;
	uint64_t x172 = 3LLU;

	t42 = (x169<(x170|(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int8_t x175 = 29;
	volatile int16_t x176 = 13;
	static int32_t t43 = -170895;

	t43 = (x173<(x174|(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = INT16_MIN;
	int32_t x179 = -1;
	int32_t x180 = INT32_MAX;
	static int32_t t44 = 783082;

	t44 = (x177<(x178|(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	static uint16_t x183 = UINT16_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t45 = -18;

	t45 = (x181<(x182|(x183<x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	static volatile int64_t x187 = -1LL;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = -6;

	t46 = (x185<(x186|(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static volatile uint16_t x190 = 271U;
	static uint64_t x191 = UINT64_MAX;
	int32_t t47 = 0;

	t47 = (x189<(x190|(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = 953150311LLU;
	uint8_t x195 = 1U;
	volatile int8_t x196 = INT8_MAX;
	int32_t t48 = 71010;

	t48 = (x193<(x194|(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 58U;
	int64_t x198 = -2022242129067LL;
	int8_t x199 = -1;
	int16_t x200 = 12237;

	t49 = (x197<(x198|(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 103088015LLU;
	int8_t x202 = -1;
	uint32_t x203 = 31U;
	volatile uint64_t x204 = 888204LLU;
	int32_t t50 = 12724;

	t50 = (x201<(x202|(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 495U;
	int16_t x206 = INT16_MIN;
	int32_t t51 = 35029045;

	t51 = (x205<(x206|(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = 53;
	uint64_t x211 = 13997198622LLU;
	int8_t x212 = INT8_MAX;
	int32_t t52 = -110290979;

	t52 = (x209<(x210|(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = -51;
	int16_t x215 = -37;
	int8_t x216 = INT8_MAX;
	int32_t t53 = 298820725;

	t53 = (x213<(x214|(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 0;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = 1720541U;
	int64_t x220 = INT64_MIN;

	t54 = (x217<(x218|(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 2421542102LLU;
	int8_t x223 = INT8_MIN;
	volatile uint16_t x224 = 3303U;
	volatile int32_t t55 = 1;

	t55 = (x221<(x222|(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MIN;
	int32_t t56 = -10333;

	t56 = (x225<(x226|(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MAX;
	uint32_t x230 = 264U;
	uint8_t x231 = 29U;
	static volatile uint64_t x232 = 86LLU;

	t57 = (x229<(x230|(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	static volatile int64_t x234 = 87449660LL;
	int8_t x235 = INT8_MIN;
	static int8_t x236 = INT8_MAX;

	t58 = (x233<(x234|(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	volatile int32_t t59 = -52868404;

	t59 = (x237<(x238|(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	int32_t x242 = 1;
	static uint32_t x243 = 21032936U;
	volatile int32_t t60 = -1;

	t60 = (x241<(x242|(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = -95727LL;
	uint8_t x247 = 41U;
	volatile int32_t x248 = INT32_MAX;
	int32_t t61 = 22578;

	t61 = (x245<(x246|(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -136;
	volatile uint32_t x250 = 67718391U;
	uint64_t x251 = 346081LLU;
	int64_t x252 = INT64_MIN;

	t62 = (x249<(x250|(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	static volatile int16_t x254 = -1422;
	volatile uint8_t x255 = 62U;
	int32_t t63 = -32;

	t63 = (x253<(x254|(x255<x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int16_t x258 = -357;
	uint64_t x259 = 1975063961LLU;
	static int32_t x260 = -1;
	volatile int32_t t64 = -17;

	t64 = (x257<(x258|(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x263 = 19U;
	static uint16_t x264 = UINT16_MAX;
	int32_t t65 = -20;

	t65 = (x261<(x262|(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 5U;
	static int32_t x266 = INT32_MIN;
	static int16_t x267 = -63;
	int32_t t66 = 1;

	t66 = (x265<(x266|(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -251;
	static int8_t x270 = INT8_MIN;
	volatile int32_t x271 = -1;
	int8_t x272 = -1;
	int32_t t67 = 313812;

	t67 = (x269<(x270|(x271<x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MAX;
	int32_t x275 = -1;
	int64_t x276 = 251923279LL;
	int32_t t68 = 347711;

	t68 = (x273<(x274|(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	uint16_t x278 = 1674U;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MIN;
	int32_t t69 = -4;

	t69 = (x277<(x278|(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 4082LLU;
	uint32_t x283 = 151U;
	static uint32_t x284 = UINT32_MAX;
	int32_t t70 = -1356;

	t70 = (x281<(x282|(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 451;
	static uint16_t x286 = 2674U;
	int16_t x287 = -1;
	int16_t x288 = -1;
	static int32_t t71 = -86;

	t71 = (x285<(x286|(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	volatile uint64_t x290 = 521479464122548LLU;
	uint8_t x291 = 0U;
	volatile int16_t x292 = 2;
	volatile int32_t t72 = 3;

	t72 = (x289<(x290|(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -29;
	volatile int64_t x294 = INT64_MIN;
	int32_t x295 = 305557807;
	int32_t x296 = -1642;
	int32_t t73 = 9190104;

	t73 = (x293<(x294|(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -2231689013452778LL;
	int64_t x300 = INT64_MIN;

	t74 = (x297<(x298|(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MAX;
	uint32_t x302 = 12489662U;
	int32_t t75 = 21922;

	t75 = (x301<(x302|(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 21061664;

	t76 = (x305<(x306|(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static volatile uint64_t x311 = UINT64_MAX;
	static int64_t x312 = -2143799134LL;
	int32_t t77 = -1639978;

	t77 = (x309<(x310|(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 7U;
	static uint16_t x315 = 32U;
	uint32_t x316 = 474U;
	volatile int32_t t78 = -75;

	t78 = (x313<(x314|(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	volatile int32_t x318 = INT32_MIN;
	static volatile int8_t x319 = INT8_MIN;
	int32_t t79 = 177850396;

	t79 = (x317<(x318|(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	volatile uint16_t x323 = UINT16_MAX;
	static int16_t x324 = 12;
	volatile int32_t t80 = 138031350;

	t80 = (x321<(x322|(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = -1LL;
	uint8_t x327 = 2U;
	int32_t t81 = -648;

	t81 = (x325<(x326|(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = -155860768;
	uint64_t x331 = 6179313614259782LLU;
	int8_t x332 = -1;
	volatile int32_t t82 = 30695;

	t82 = (x329<(x330|(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -2353;
	int32_t t83 = -7122;

	t83 = (x333<(x334|(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x338 = UINT8_MAX;
	volatile uint64_t x339 = 55626619LLU;
	static int32_t t84 = -6;

	t84 = (x337<(x338|(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	volatile int8_t x342 = INT8_MIN;
	uint64_t x343 = 1945682LLU;
	int64_t x344 = 85566LL;
	volatile int32_t t85 = -7;

	t85 = (x341<(x342|(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	static int8_t x346 = 47;
	static int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 76995479;

	t86 = (x345<(x346|(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MAX;
	static uint32_t x350 = UINT32_MAX;
	uint16_t x351 = 0U;
	volatile int64_t x352 = INT64_MIN;
	int32_t t87 = 1;

	t87 = (x349<(x350|(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = UINT16_MAX;
	uint8_t x354 = 85U;
	int32_t x355 = 77;
	volatile uint64_t x356 = UINT64_MAX;
	int32_t t88 = -698;

	t88 = (x353<(x354|(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	int8_t x358 = 0;
	int8_t x359 = 0;

	t89 = (x357<(x358|(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	uint64_t x362 = 66062028036764LLU;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -6267268;

	t90 = (x361<(x362|(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -16;
	int32_t x366 = INT32_MIN;
	uint64_t x367 = 2888552190031LLU;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 391;

	t91 = (x365<(x366|(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	uint32_t x372 = UINT32_MAX;

	t92 = (x369<(x370|(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	uint8_t x374 = 6U;
	int64_t x375 = 1318005971566406019LL;
	int32_t t93 = 156264872;

	t93 = (x373<(x374|(x375<x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = UINT8_MAX;
	volatile int32_t x379 = 5;
	int16_t x380 = -219;
	static volatile int32_t t94 = 1045488443;

	t94 = (x377<(x378|(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	uint32_t x382 = 104416286U;
	int64_t x383 = INT64_MAX;
	int16_t x384 = -7;
	int32_t t95 = -12648;

	t95 = (x381<(x382|(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = -218606463278730520LL;
	int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MAX;
	volatile int8_t x388 = INT8_MAX;
	int32_t t96 = 6044637;

	t96 = (x385<(x386|(x387<x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = -2;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t97 = 69442304;

	t97 = (x389<(x390|(x391<x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -486328433;
	int16_t x395 = INT16_MAX;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -190462918;

	t98 = (x393<(x394|(x395<x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	static int16_t x399 = INT16_MAX;
	int32_t t99 = -1964;

	t99 = (x397<(x398|(x399<x400)));

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

