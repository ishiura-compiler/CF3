#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
static uint16_t x6 = 2240U;
volatile uint16_t x8 = 1425U;
volatile int32_t t1 = 824858;
volatile uint8_t x9 = UINT8_MAX;
volatile int64_t x14 = -437233LL;
int32_t x16 = -1;
int64_t x25 = INT64_MAX;
volatile uint64_t x30 = 9123930458656LLU;
static volatile int32_t x36 = INT32_MIN;
int32_t t8 = -189438307;
int32_t x50 = INT32_MIN;
volatile uint64_t x51 = 475797LLU;
volatile int32_t t12 = -187657192;
static volatile int32_t t14 = -14103738;
volatile int32_t t15 = -38138608;
uint32_t x74 = 4184530U;
uint8_t x75 = UINT8_MAX;
int32_t t19 = 204448542;
volatile uint16_t x86 = 1157U;
uint16_t x87 = UINT16_MAX;
int8_t x90 = 1;
volatile int32_t t24 = -4153011;
static uint64_t x108 = 54864LLU;
volatile int16_t x113 = -1201;
int64_t x115 = INT64_MIN;
int32_t t28 = 66902;
static uint8_t x122 = 23U;
uint8_t x124 = UINT8_MAX;
uint64_t x127 = 12687576113441LLU;
static int16_t x128 = -1;
volatile int32_t x133 = -1483962;
int32_t x134 = -1;
int8_t x135 = -1;
int8_t x141 = -1;
static volatile uint8_t x150 = 90U;
static int64_t x152 = INT64_MAX;
static volatile int32_t t38 = -334109;
uint32_t x157 = 732U;
uint32_t x159 = UINT32_MAX;
static volatile int32_t t39 = 1;
static uint64_t x164 = 277879074LLU;
int32_t t40 = 4358;
int32_t x173 = INT32_MIN;
int32_t t43 = 574;
static int32_t t44 = -9121;
volatile int64_t x189 = INT64_MIN;
int8_t x194 = -1;
volatile int32_t t48 = 11434;
int32_t x198 = INT32_MIN;
int16_t x206 = INT16_MIN;
int32_t x207 = 283858;
static int32_t t53 = -1705697;
volatile uint16_t x237 = 4808U;
uint8_t x255 = 3U;
volatile int8_t x256 = -3;
int8_t x260 = -1;
static int64_t x264 = INT64_MIN;
static int32_t t65 = -451548467;
uint32_t x265 = 1041416U;
uint16_t x266 = 9U;
uint8_t x268 = 10U;
int16_t x274 = 2;
int8_t x275 = INT8_MIN;
int64_t x289 = INT64_MAX;
static uint32_t x290 = UINT32_MAX;
static int8_t x300 = -1;
uint8_t x312 = 1U;
int32_t t78 = -45356;
uint32_t x323 = 214596194U;
int32_t t80 = 0;
static int16_t x326 = INT16_MIN;
int64_t x327 = INT64_MIN;
volatile int32_t t81 = -342430671;
volatile int32_t t82 = -12435929;
int64_t x334 = 18204LL;
int8_t x335 = INT8_MAX;
int64_t x337 = INT64_MIN;
volatile uint64_t x340 = UINT64_MAX;
volatile int32_t t84 = -10886532;
static int32_t x346 = -1;
volatile int32_t t87 = 1542;
volatile uint16_t x353 = 31039U;
volatile int64_t x354 = INT64_MAX;
volatile int32_t t88 = 1783;
int32_t t90 = 0;
int32_t x366 = 38885;
int16_t x367 = INT16_MIN;
uint8_t x369 = 48U;
int64_t x388 = -1LL;
volatile int16_t x390 = 8;
int32_t t97 = 33152;
int32_t x393 = -1158;
int32_t t98 = -864124612;
static int32_t x397 = -1;


void f0(void) {
	int8_t x1 = 1;
	uint8_t x2 = 1U;
	static uint64_t x4 = 266LLU;
	int32_t t0 = -126049;

	t0 = (x1<=(x2|(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 12642U;
	static int32_t x7 = INT32_MAX;

	t1 = (x5<=(x6|(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 892;
	volatile uint16_t x11 = UINT16_MAX;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -411;

	t2 = (x9<=(x10|(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 81472278U;
	static int32_t x15 = 1861;
	volatile int32_t t3 = 1;

	t3 = (x13<=(x14|(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x18 = INT8_MIN;
	static volatile int64_t x19 = INT64_MIN;
	uint8_t x20 = 0U;
	int32_t t4 = -176173;

	t4 = (x17<=(x18|(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = 6;
	static uint64_t x23 = 2796560LLU;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -5;

	t5 = (x21<=(x22|(x23<x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	static volatile uint32_t x27 = 58651U;
	static int8_t x28 = -1;
	static int32_t t6 = -2739670;

	t6 = (x25<=(x26|(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 10;
	volatile uint64_t x31 = 0LLU;
	uint64_t x32 = 6739LLU;
	volatile int32_t t7 = 4;

	t7 = (x29<=(x30|(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1324U;
	uint32_t x34 = UINT32_MAX;
	volatile int32_t x35 = -1;

	t8 = (x33<=(x34|(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	uint32_t x38 = 73U;
	int32_t x39 = -1771512;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -97;

	t9 = (x37<=(x38|(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 26U;
	static volatile uint8_t x42 = 8U;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 5;

	t10 = (x41<=(x42|(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	int8_t x47 = 0;
	uint64_t x48 = 4656172015815LLU;
	int32_t t11 = 1576;

	t11 = (x45<=(x46|(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 3815533U;
	static int32_t x52 = INT32_MAX;

	t12 = (x49<=(x50|(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = -1LL;
	int64_t x55 = -1LL;
	volatile int8_t x56 = INT8_MAX;
	int32_t t13 = 99491644;

	t13 = (x53<=(x54|(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = 14U;
	int32_t x59 = -1;
	int32_t x60 = INT32_MIN;

	t14 = (x57<=(x58|(x59<x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	static int8_t x62 = 3;
	int64_t x63 = 1172594574725LL;
	uint8_t x64 = 1U;

	t15 = (x61<=(x62|(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1490U;
	uint64_t x66 = 410106434869LLU;
	int32_t x67 = -437;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 3876593;

	t16 = (x65<=(x66|(x67<x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 0;
	int8_t x70 = -5;
	int32_t x71 = 23;
	int8_t x72 = -1;
	int32_t t17 = -164215;

	t17 = (x69<=(x70|(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	int8_t x76 = 1;
	volatile int32_t t18 = 11073;

	t18 = (x73<=(x74|(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 75757759943970LLU;
	volatile int16_t x78 = 1471;
	uint64_t x79 = UINT64_MAX;
	static uint8_t x80 = 7U;

	t19 = (x77<=(x78|(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = -6;
	volatile int32_t x84 = INT32_MIN;
	int32_t t20 = -24082;

	t20 = (x81<=(x82|(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x88 = -1;
	int32_t t21 = -198940;

	t21 = (x85<=(x86|(x87<x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = UINT64_MAX;
	volatile uint64_t x91 = 5289482302433581955LLU;
	static int32_t x92 = 236446;
	int32_t t22 = 1;

	t22 = (x89<=(x90|(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -169;
	volatile int16_t x94 = INT16_MIN;
	volatile int32_t x95 = -1;
	int8_t x96 = 0;
	int32_t t23 = 10;

	t23 = (x93<=(x94|(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 1;
	volatile uint64_t x98 = 5812068602423958101LLU;
	int64_t x99 = -1LL;
	uint64_t x100 = UINT64_MAX;

	t24 = (x97<=(x98|(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 18U;
	static int8_t x102 = 6;
	uint32_t x103 = UINT32_MAX;
	static volatile int8_t x104 = -1;
	int32_t t25 = -14977213;

	t25 = (x101<=(x102|(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 1129693U;
	int32_t x107 = INT32_MIN;
	static int32_t t26 = -15;

	t26 = (x105<=(x106|(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	static volatile int8_t x110 = INT8_MIN;
	volatile uint8_t x111 = UINT8_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -565245998;

	t27 = (x109<=(x110|(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x114 = -1;
	int32_t x116 = INT32_MIN;

	t28 = (x113<=(x114|(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 3491318LL;
	uint32_t x118 = UINT32_MAX;
	volatile int32_t x119 = -1;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = 6654;

	t29 = (x117<=(x118|(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	uint8_t x123 = 0U;
	static int32_t t30 = -1947;

	t30 = (x121<=(x122|(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 17521U;
	int16_t x126 = INT16_MIN;
	static int32_t t31 = 4455;

	t31 = (x125<=(x126|(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 66U;
	int16_t x131 = -1;
	uint64_t x132 = 17LLU;
	int32_t t32 = 1;

	t32 = (x129<=(x130|(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 161339735;

	t33 = (x133<=(x134|(x135<x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	static int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 0;

	t34 = (x137<=(x138|(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = -2;
	volatile int32_t t35 = -31169;

	t35 = (x141<=(x142|(x143<x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -464185049LL;
	int8_t x146 = 0;
	uint8_t x147 = UINT8_MAX;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 3;

	t36 = (x145<=(x146|(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int8_t x151 = -25;
	volatile int32_t t37 = 4122486;

	t37 = (x149<=(x150|(x151<x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = 7632811719348LLU;
	uint32_t x156 = UINT32_MAX;

	t38 = (x153<=(x154|(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 24U;
	static int32_t x160 = INT32_MIN;

	t39 = (x157<=(x158|(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -5718447221820LL;
	uint16_t x162 = UINT16_MAX;
	volatile int8_t x163 = 2;

	t40 = (x161<=(x162|(x163<x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MIN;
	int16_t x167 = -8;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = 6;

	t41 = (x165<=(x166|(x167<x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = -1;
	volatile int32_t x170 = 28851811;
	int64_t x171 = INT64_MAX;
	int16_t x172 = 6;
	volatile int32_t t42 = 0;

	t42 = (x169<=(x170|(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x174 = UINT16_MAX;
	static volatile int8_t x175 = INT8_MAX;
	volatile int64_t x176 = 1114591243092LL;

	t43 = (x173<=(x174|(x175<x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	volatile int32_t x178 = -1;
	int8_t x179 = -1;
	int32_t x180 = -1;

	t44 = (x177<=(x178|(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = -1;
	int8_t x184 = INT8_MAX;
	int32_t t45 = 21;

	t45 = (x181<=(x182|(x183<x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	volatile int16_t x186 = -1;
	int64_t x187 = INT64_MIN;
	static volatile int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -3188;

	t46 = (x185<=(x186|(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MAX;
	uint32_t x191 = 40833382U;
	volatile uint32_t x192 = UINT32_MAX;
	static int32_t t47 = -90297412;

	t47 = (x189<=(x190|(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static volatile int32_t x195 = -1;
	int32_t x196 = INT32_MAX;

	t48 = (x193<=(x194|(x195<x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static volatile uint64_t x199 = 102330199521015337LLU;
	int64_t x200 = INT64_MIN;
	static volatile int32_t t49 = -8058;

	t49 = (x197<=(x198|(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 6U;
	uint32_t x202 = UINT32_MAX;
	static uint8_t x203 = 29U;
	static int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = -645333353;

	t50 = (x201<=(x202|(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -21296342;

	t51 = (x205<=(x206|(x207<x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = UINT64_MAX;
	volatile uint8_t x210 = UINT8_MAX;
	volatile uint64_t x211 = UINT64_MAX;
	int8_t x212 = 2;
	volatile int32_t t52 = 0;

	t52 = (x209<=(x210|(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = 0U;
	int32_t x216 = INT32_MIN;

	t53 = (x213<=(x214|(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile int32_t x218 = -37;
	int32_t x219 = -51584104;
	int8_t x220 = -1;
	static int32_t t54 = -96;

	t54 = (x217<=(x218|(x219<x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 4;
	uint32_t x222 = UINT32_MAX;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 39U;
	int32_t t55 = -476705;

	t55 = (x221<=(x222|(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x225 = 295U;
	static volatile uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t56 = 5;

	t56 = (x225<=(x226|(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 12U;
	int32_t x230 = INT32_MIN;
	uint16_t x231 = 4960U;
	int32_t x232 = 765529835;
	int32_t t57 = -14847;

	t57 = (x229<=(x230|(x231<x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -224728LL;
	uint64_t x234 = 4177034LLU;
	volatile uint16_t x235 = UINT16_MAX;
	uint16_t x236 = 0U;
	volatile int32_t t58 = -10;

	t58 = (x233<=(x234|(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = 4;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 14;

	t59 = (x237<=(x238|(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	volatile int64_t x243 = INT64_MAX;
	volatile uint64_t x244 = 595590LLU;
	int32_t t60 = 24496162;

	t60 = (x241<=(x242|(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = 3777U;
	static volatile int8_t x248 = INT8_MAX;
	static volatile int32_t t61 = 180;

	t61 = (x245<=(x246|(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -7;
	int32_t x250 = INT32_MIN;
	static int32_t x251 = 851;
	int16_t x252 = -5;
	int32_t t62 = 613164104;

	t62 = (x249<=(x250|(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x253 = INT32_MAX;
	int16_t x254 = -1;
	volatile int32_t t63 = -2976643;

	t63 = (x253<=(x254|(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MAX;
	volatile int16_t x258 = INT16_MAX;
	int8_t x259 = -1;
	int32_t t64 = 1186;

	t64 = (x257<=(x258|(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int32_t x262 = 17;
	volatile int64_t x263 = INT64_MAX;

	t65 = (x261<=(x262|(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x267 = -1;
	volatile int32_t t66 = -228060780;

	t66 = (x265<=(x266|(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x269 = -1;
	static int8_t x270 = INT8_MIN;
	static int32_t x271 = INT32_MIN;
	volatile int16_t x272 = INT16_MAX;
	static int32_t t67 = -3464;

	t67 = (x269<=(x270|(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 39;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = -11;

	t68 = (x273<=(x274|(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 12U;
	static volatile uint8_t x278 = 75U;
	int64_t x279 = -61207LL;
	int64_t x280 = INT64_MIN;
	static int32_t t69 = -4;

	t69 = (x277<=(x278|(x279<x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	int8_t x282 = INT8_MIN;
	static int16_t x283 = -1;
	int64_t x284 = -1LL;
	volatile int32_t t70 = -639018971;

	t70 = (x281<=(x282|(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MIN;
	volatile int32_t x287 = INT32_MIN;
	uint8_t x288 = 18U;
	volatile int32_t t71 = -1;

	t71 = (x285<=(x286|(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x291 = 3U;
	static int8_t x292 = INT8_MAX;
	int32_t t72 = 242;

	t72 = (x289<=(x290|(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 22U;
	int8_t x294 = INT8_MIN;
	int32_t x295 = -1;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = 143483;

	t73 = (x293<=(x294|(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x297 = INT8_MIN;
	int64_t x298 = 1037768LL;
	int32_t x299 = -1;
	static volatile int32_t t74 = -247966801;

	t74 = (x297<=(x298|(x299<x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	volatile int64_t x302 = INT64_MIN;
	static volatile int8_t x303 = INT8_MIN;
	int8_t x304 = 32;
	volatile int32_t t75 = 4853004;

	t75 = (x301<=(x302|(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 56U;
	uint32_t x306 = 98U;
	int8_t x307 = -1;
	static volatile uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = -102619;

	t76 = (x305<=(x306|(x307<x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 1U;
	int64_t x310 = INT64_MIN;
	static volatile int8_t x311 = INT8_MIN;
	volatile int32_t t77 = -2459;

	t77 = (x309<=(x310|(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MIN;
	int8_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	static int16_t x316 = INT16_MAX;

	t78 = (x313<=(x314|(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static int64_t x318 = -4580LL;
	static uint16_t x319 = 218U;
	volatile int16_t x320 = 742;
	volatile int32_t t79 = -9880849;

	t79 = (x317<=(x318|(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 33U;
	volatile uint64_t x322 = 56144406828LLU;
	uint16_t x324 = UINT16_MAX;

	t80 = (x321<=(x322|(x323<x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 14;
	int32_t x328 = -1;

	t81 = (x325<=(x326|(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 6U;
	uint16_t x330 = 1193U;
	static volatile int16_t x331 = -1;
	volatile int32_t x332 = INT32_MAX;

	t82 = (x329<=(x330|(x331<x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	int64_t x336 = -1503440219LL;
	int32_t t83 = -2264867;

	t83 = (x333<=(x334|(x335<x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MAX;

	t84 = (x337<=(x338|(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -1;
	int32_t x342 = -208;
	uint16_t x343 = UINT16_MAX;
	volatile uint32_t x344 = 2973736U;
	static volatile int32_t t85 = -94164;

	t85 = (x341<=(x342|(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -5841596808311788LL;
	uint8_t x347 = 1U;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 579;

	t86 = (x345<=(x346|(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -108822;
	volatile int32_t x350 = -1;
	uint64_t x351 = 20LLU;
	volatile int64_t x352 = -1LL;

	t87 = (x349<=(x350|(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x355 = -110;
	volatile int8_t x356 = -59;

	t88 = (x353<=(x354|(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int64_t x358 = -1062693957LL;
	int64_t x359 = -285775168994156289LL;
	uint64_t x360 = UINT64_MAX;
	static volatile int32_t t89 = 29781115;

	t89 = (x357<=(x358|(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = 36U;
	static uint16_t x362 = 26357U;
	int16_t x363 = -2;
	int32_t x364 = INT32_MIN;

	t90 = (x361<=(x362|(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -879521LL;
	int64_t x368 = 64782320950891786LL;
	volatile int32_t t91 = -20332;

	t91 = (x365<=(x366|(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = 12;
	int32_t x371 = -1;
	static uint32_t x372 = 849628U;
	int32_t t92 = -1;

	t92 = (x369<=(x370|(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MAX;
	volatile int8_t x374 = INT8_MIN;
	uint16_t x375 = 2U;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t93 = -2348;

	t93 = (x373<=(x374|(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static volatile int64_t x378 = -1LL;
	uint16_t x379 = 1U;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = 334692;

	t94 = (x377<=(x378|(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 1173U;
	int16_t x382 = INT16_MIN;
	static int64_t x383 = INT64_MIN;
	uint16_t x384 = 0U;
	volatile int32_t t95 = -6;

	t95 = (x381<=(x382|(x383<x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 0;
	int8_t x386 = INT8_MIN;
	int32_t x387 = -1;
	volatile int32_t t96 = 0;

	t96 = (x385<=(x386|(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 3;
	int8_t x391 = -1;
	volatile uint64_t x392 = 29765LLU;

	t97 = (x389<=(x390|(x391<x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x394 = INT32_MAX;
	int64_t x395 = -116LL;
	int8_t x396 = INT8_MAX;

	t98 = (x393<=(x394|(x395<x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = -1LL;
	int64_t x399 = INT64_MAX;
	uint64_t x400 = 188LLU;
	int32_t t99 = 2755;

	t99 = (x397<=(x398|(x399<x400)));

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

