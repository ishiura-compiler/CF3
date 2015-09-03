#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -52;
int32_t x5 = INT32_MIN;
int16_t x8 = INT16_MAX;
uint16_t x21 = 1358U;
int8_t x23 = INT8_MIN;
int64_t x24 = 480LL;
int8_t x26 = INT8_MIN;
static uint32_t x28 = UINT32_MAX;
int32_t t7 = 0;
int32_t x35 = INT32_MAX;
volatile int16_t x37 = -3946;
uint16_t x41 = 1337U;
int32_t t11 = 1;
volatile int32_t x54 = 3024230;
int8_t x55 = 16;
volatile int32_t t13 = -61554;
uint16_t x57 = 3U;
static uint32_t x68 = 24785U;
volatile int32_t t17 = 52953;
static volatile int64_t x74 = 42766LL;
static int64_t x76 = -1LL;
int16_t x80 = 1296;
int64_t x83 = -1LL;
int8_t x96 = INT8_MAX;
static int64_t x116 = -17047LL;
uint64_t x117 = UINT64_MAX;
int64_t x119 = -1LL;
int8_t x121 = 1;
volatile int64_t x127 = INT64_MIN;
static int32_t t31 = 2992;
int32_t x129 = -247;
volatile uint8_t x134 = 23U;
volatile int16_t x135 = INT16_MIN;
volatile uint8_t x137 = 6U;
int64_t x139 = 151310098LL;
int16_t x140 = -1;
static uint32_t x146 = 22796751U;
int64_t x151 = -427LL;
uint16_t x154 = 61U;
uint16_t x155 = 796U;
uint8_t x166 = 31U;
int32_t x168 = INT32_MIN;
uint16_t x172 = 2U;
int32_t t43 = 5619;
int16_t x177 = -1;
int8_t x178 = INT8_MIN;
volatile int8_t x179 = INT8_MIN;
int64_t x180 = -1LL;
static int16_t x181 = INT16_MIN;
int64_t x189 = INT64_MIN;
uint16_t x193 = UINT16_MAX;
int32_t x195 = 0;
int16_t x196 = -1;
static int32_t t48 = 4026790;
volatile int16_t x201 = INT16_MAX;
int16_t x204 = -109;
static int8_t x208 = INT8_MIN;
int64_t x209 = 7094928459615LL;
int16_t x211 = 1;
static uint32_t x212 = UINT32_MAX;
int32_t x213 = INT32_MIN;
int32_t x219 = INT32_MIN;
volatile int16_t x225 = INT16_MAX;
int32_t x232 = -1;
volatile int8_t x233 = INT8_MIN;
uint64_t x235 = 3349LLU;
volatile uint16_t x238 = 27635U;
volatile int32_t t59 = 1;
int64_t x243 = 2155422113329LL;
static int32_t t60 = -292022;
static volatile int64_t x250 = 9585520LL;
static int32_t t62 = 146424622;
volatile int16_t x267 = INT16_MAX;
volatile int16_t x272 = INT16_MIN;
int16_t x278 = INT16_MIN;
volatile int16_t x279 = INT16_MIN;
int64_t x283 = 0LL;
int32_t t71 = 250636331;
uint8_t x290 = UINT8_MAX;
uint16_t x305 = 27198U;
uint16_t x313 = 1254U;
uint64_t x315 = UINT64_MAX;
uint64_t x323 = 2522123LLU;
int32_t x326 = INT32_MIN;
int64_t x336 = -1LL;
int32_t x342 = INT32_MIN;
volatile int32_t t88 = 1035929119;
volatile int32_t t90 = -1;
static int64_t x368 = -1LL;
static uint32_t x380 = UINT32_MAX;
volatile int32_t t96 = -44976761;
static int64_t x392 = INT64_MIN;
int32_t x397 = -1;
volatile int32_t t99 = -680781;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	volatile int32_t x2 = INT32_MIN;
	static int16_t x3 = INT16_MAX;
	uint64_t x4 = 8406690521735LLU;

	t0 = (x1<=(x2<=(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = 1;
	static int8_t x7 = 0;
	volatile int32_t t1 = 44;

	t1 = (x5<=(x6<=(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = 1;
	uint16_t x11 = 63U;
	int64_t x12 = 6LL;
	volatile int32_t t2 = -42;

	t2 = (x9<=(x10<=(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 6U;
	static volatile uint16_t x14 = 35U;
	int16_t x15 = INT16_MIN;
	int64_t x16 = -1198039987294LL;
	volatile int32_t t3 = 695294;

	t3 = (x13<=(x14<=(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MAX;
	static volatile int16_t x18 = INT16_MAX;
	volatile uint32_t x19 = 12071923U;
	volatile int8_t x20 = INT8_MAX;
	int32_t t4 = 47894867;

	t4 = (x17<=(x18<=(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = -1LL;
	int32_t t5 = -1645584;

	t5 = (x21<=(x22<=(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int64_t x27 = -1LL;
	static int32_t t6 = -1;

	t6 = (x25<=(x26<=(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MAX;

	t7 = (x29<=(x30<=(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -459583LL;
	volatile int8_t x34 = -1;
	int64_t x36 = INT64_MIN;
	int32_t t8 = -9;

	t8 = (x33<=(x34<=(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 2U;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = -1;
	volatile int32_t t9 = 4457;

	t9 = (x37<=(x38<=(x39&x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	static uint16_t x43 = 839U;
	int16_t x44 = -1;
	int32_t t10 = -696501372;

	t10 = (x41<=(x42<=(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 67504U;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MAX;

	t11 = (x45<=(x46<=(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -963;
	static uint32_t x50 = 1U;
	static int16_t x51 = -1;
	int32_t x52 = -186;
	static int32_t t12 = -9;

	t12 = (x49<=(x50<=(x51&x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	static int8_t x56 = 0;

	t13 = (x53<=(x54<=(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 1760835149940079398LL;
	uint8_t x59 = 1U;
	volatile int32_t x60 = 228;
	int32_t t14 = 142;

	t14 = (x57<=(x58<=(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	volatile int64_t x62 = INT64_MIN;
	static uint64_t x63 = 241LLU;
	int32_t x64 = INT32_MAX;
	int32_t t15 = -926506578;

	t15 = (x61<=(x62<=(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = -1;
	int64_t x67 = -30LL;
	volatile int32_t t16 = 1;

	t16 = (x65<=(x66<=(x67&x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 39859733932891LLU;
	int16_t x70 = INT16_MIN;
	int16_t x71 = -1;
	int16_t x72 = INT16_MAX;

	t17 = (x69<=(x70<=(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = -1;
	uint64_t x75 = 20355LLU;
	int32_t t18 = 156;

	t18 = (x73<=(x74<=(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 1878352LL;
	volatile int8_t x78 = -2;
	int8_t x79 = -1;
	int32_t t19 = 108913;

	t19 = (x77<=(x78<=(x79&x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 16U;
	int32_t x82 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	static int32_t t20 = 516013985;

	t20 = (x81<=(x82<=(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 0U;
	static int8_t x86 = -1;
	uint64_t x87 = 94326692LLU;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 841001428;

	t21 = (x85<=(x86<=(x87&x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 4U;
	uint32_t x90 = 3403809U;
	int16_t x91 = -4;
	volatile int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 433;

	t22 = (x89<=(x90<=(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 2956883041LLU;
	static int32_t x94 = INT32_MIN;
	int16_t x95 = -1;
	volatile int32_t t23 = 12;

	t23 = (x93<=(x94<=(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 337U;
	int32_t x98 = INT32_MAX;
	static int32_t x99 = INT32_MIN;
	static uint64_t x100 = 73763876359683956LLU;
	volatile int32_t t24 = -19;

	t24 = (x97<=(x98<=(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = INT16_MIN;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 111;

	t25 = (x101<=(x102<=(x103&x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 7850331754LLU;
	int16_t x106 = INT16_MIN;
	volatile uint64_t x107 = 38866841812209892LLU;
	uint64_t x108 = 922262425317277LLU;
	int32_t t26 = 33;

	t26 = (x105<=(x106<=(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	int32_t x110 = -34473344;
	int32_t x111 = 32;
	volatile int8_t x112 = -10;
	volatile int32_t t27 = -188848153;

	t27 = (x109<=(x110<=(x111&x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 3;
	int64_t x114 = 3851LL;
	int8_t x115 = 0;
	volatile int32_t t28 = 6818;

	t28 = (x113<=(x114<=(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -1;
	int8_t x120 = -18;
	int32_t t29 = -14;

	t29 = (x117<=(x118<=(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = 542216053843720291LL;
	volatile int16_t x123 = INT16_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -55857;

	t30 = (x121<=(x122<=(x123&x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MAX;
	volatile int16_t x128 = INT16_MIN;

	t31 = (x125<=(x126<=(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 5156U;
	int8_t x131 = 1;
	int32_t x132 = -8;
	volatile int32_t t32 = -2;

	t32 = (x129<=(x130<=(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 86LLU;
	int16_t x136 = 96;
	volatile int32_t t33 = -315346;

	t33 = (x133<=(x134<=(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = INT8_MIN;
	int32_t t34 = 175176;

	t34 = (x137<=(x138<=(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 0;
	volatile int16_t x142 = -1;
	volatile int64_t x143 = INT64_MIN;
	static uint32_t x144 = 10809U;
	int32_t t35 = 1;

	t35 = (x141<=(x142<=(x143&x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 9U;
	static int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;
	int32_t t36 = 42;

	t36 = (x145<=(x146<=(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 1U;
	static volatile int8_t x150 = INT8_MIN;
	uint16_t x152 = 7U;
	volatile int32_t t37 = -120850346;

	t37 = (x149<=(x150<=(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 154408U;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -15;

	t38 = (x153<=(x154<=(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = 1U;
	static int32_t t39 = -40;

	t39 = (x157<=(x158<=(x159&x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 1;
	static volatile int32_t x162 = -114674397;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	static int32_t t40 = 10;

	t40 = (x161<=(x162<=(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x165 = -672354623152635949LL;
	int16_t x167 = -1;
	int32_t t41 = 82717532;

	t41 = (x165<=(x166<=(x167&x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 125827LL;
	int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MIN;
	int32_t t42 = 276;

	t42 = (x169<=(x170<=(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = 856U;
	int64_t x176 = -1LL;

	t43 = (x173<=(x174<=(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t t44 = 12527138;

	t44 = (x177<=(x178<=(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = 271488544976584790LLU;
	uint8_t x183 = 32U;
	uint8_t x184 = 4U;
	volatile int32_t t45 = 52545739;

	t45 = (x181<=(x182<=(x183&x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x185 = INT32_MIN;
	volatile int64_t x186 = INT64_MAX;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MIN;
	static int32_t t46 = -820;

	t46 = (x185<=(x186<=(x187&x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	int16_t x191 = -10;
	static int8_t x192 = 1;
	static int32_t t47 = 102;

	t47 = (x189<=(x190<=(x191&x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = 1;

	t48 = (x193<=(x194<=(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MAX;
	int16_t x198 = INT16_MAX;
	uint32_t x199 = 4384U;
	int64_t x200 = -1LL;
	static volatile int32_t t49 = -9447287;

	t49 = (x197<=(x198<=(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = UINT32_MAX;
	uint64_t x203 = UINT64_MAX;
	volatile int32_t t50 = 1146600;

	t50 = (x201<=(x202<=(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	volatile int32_t t51 = -537395;

	t51 = (x205<=(x206<=(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = 3;
	static int32_t t52 = 871238449;

	t52 = (x209<=(x210<=(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x214 = -1;
	static int32_t x215 = -1;
	volatile uint32_t x216 = 69U;
	volatile int32_t t53 = -238321;

	t53 = (x213<=(x214<=(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint8_t x218 = 70U;
	volatile uint64_t x220 = 5431606263LLU;
	int32_t t54 = 27758;

	t54 = (x217<=(x218<=(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	uint32_t x223 = 94333081U;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = -9;

	t55 = (x221<=(x222<=(x223&x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = INT16_MAX;
	int64_t x227 = -1LL;
	uint8_t x228 = 113U;
	int32_t t56 = -1;

	t56 = (x225<=(x226<=(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -3;
	int16_t x230 = -1;
	uint64_t x231 = 3180412LLU;
	int32_t t57 = -2;

	t57 = (x229<=(x230<=(x231&x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = UINT32_MAX;
	uint64_t x236 = 1382469LLU;
	volatile int32_t t58 = -8186;

	t58 = (x233<=(x234<=(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 2213904298975971950LLU;
	volatile int64_t x239 = -1LL;
	int16_t x240 = -1;

	t59 = (x237<=(x238<=(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	static int8_t x244 = INT8_MIN;

	t60 = (x241<=(x242<=(x243&x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	uint8_t x246 = 0U;
	volatile uint16_t x247 = 17U;
	int64_t x248 = 31023346411LL;
	int32_t t61 = -74751452;

	t61 = (x245<=(x246<=(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -24;

	t62 = (x249<=(x250<=(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -47;
	uint32_t x254 = 205234U;
	static uint8_t x255 = UINT8_MAX;
	static volatile int32_t x256 = -35650;
	volatile int32_t t63 = -198443;

	t63 = (x253<=(x254<=(x255&x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 720666706581LLU;
	int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	volatile uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = 3;

	t64 = (x257<=(x258<=(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 76U;
	static int32_t x262 = 40;
	int32_t x263 = INT32_MIN;
	int8_t x264 = -1;
	int32_t t65 = 63992597;

	t65 = (x261<=(x262<=(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x265 = -1;
	uint8_t x266 = UINT8_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t66 = -455368;

	t66 = (x265<=(x266<=(x267&x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = UINT32_MAX;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = -1;
	int32_t t67 = 80363;

	t67 = (x269<=(x270<=(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = 0;
	int32_t x274 = 210;
	static int16_t x275 = INT16_MIN;
	int16_t x276 = -36;
	volatile int32_t t68 = 557935917;

	t68 = (x273<=(x274<=(x275&x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = UINT64_MAX;
	uint32_t x280 = UINT32_MAX;
	static volatile int32_t t69 = 0;

	t69 = (x277<=(x278<=(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 1006051490;
	static volatile int8_t x282 = INT8_MIN;
	int32_t x284 = 1035976;
	int32_t t70 = -5371;

	t70 = (x281<=(x282<=(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 0U;
	int32_t x286 = INT32_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	static uint32_t x288 = 210780979U;

	t71 = (x285<=(x286<=(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -1;
	int16_t x291 = 7;
	static volatile uint16_t x292 = 1U;
	volatile int32_t t72 = 0;

	t72 = (x289<=(x290<=(x291&x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -19672490500LL;
	int64_t x294 = INT64_MAX;
	static uint16_t x295 = UINT16_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t73 = 421947552;

	t73 = (x293<=(x294<=(x295&x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile uint32_t x298 = 271U;
	int32_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	static int32_t t74 = 3695;

	t74 = (x297<=(x298<=(x299&x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = UINT8_MAX;
	static int32_t x302 = INT32_MAX;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 412676040;

	t75 = (x301<=(x302<=(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MAX;
	int32_t x307 = -1;
	int64_t x308 = -50LL;
	static volatile int32_t t76 = 3166;

	t76 = (x305<=(x306<=(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -4263873241669LL;
	uint64_t x310 = 453619LLU;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = 89911;

	t77 = (x309<=(x310<=(x311&x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = -2LL;
	int64_t x316 = -1LL;
	volatile int32_t t78 = -15077656;

	t78 = (x313<=(x314<=(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = -7;
	volatile int32_t t79 = -9594;

	t79 = (x317<=(x318<=(x319&x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 30U;
	volatile int8_t x322 = 0;
	static uint16_t x324 = 26U;
	volatile int32_t t80 = 58498;

	t80 = (x321<=(x322<=(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = 5;
	static int32_t x327 = -3540;
	static uint32_t x328 = UINT32_MAX;
	int32_t t81 = -6420;

	t81 = (x325<=(x326<=(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = INT16_MAX;
	static uint8_t x330 = 14U;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = UINT8_MAX;
	int32_t t82 = -104030010;

	t82 = (x329<=(x330<=(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	volatile int64_t x334 = INT64_MAX;
	uint8_t x335 = UINT8_MAX;
	static int32_t t83 = -9;

	t83 = (x333<=(x334<=(x335&x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	static int64_t x340 = INT64_MIN;
	int32_t t84 = 370;

	t84 = (x337<=(x338<=(x339&x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	volatile int8_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	static int32_t t85 = -2;

	t85 = (x341<=(x342<=(x343&x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 447694U;
	int64_t x346 = -1LL;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = 11217;

	t86 = (x345<=(x346<=(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -538875674495599851LL;
	static int16_t x350 = INT16_MIN;
	uint64_t x351 = 113937991257LLU;
	uint64_t x352 = 1844072254041797851LLU;
	int32_t t87 = -63988;

	t87 = (x349<=(x350<=(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = -14331143;
	uint8_t x354 = UINT8_MAX;
	uint32_t x355 = UINT32_MAX;
	int32_t x356 = INT32_MIN;

	t88 = (x353<=(x354<=(x355&x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MAX;
	static int16_t x359 = INT16_MIN;
	static uint16_t x360 = UINT16_MAX;
	int32_t t89 = 14650084;

	t89 = (x357<=(x358<=(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 11795683804271LLU;
	int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	int64_t x364 = 3941261LL;

	t90 = (x361<=(x362<=(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -28351;
	int16_t x366 = -1;
	int32_t x367 = -17;
	volatile int32_t t91 = -9;

	t91 = (x365<=(x366<=(x367&x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = INT64_MAX;
	static volatile int8_t x370 = 15;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 494U;
	static volatile int32_t t92 = 2856;

	t92 = (x369<=(x370<=(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	static volatile uint8_t x374 = 61U;
	uint64_t x375 = UINT64_MAX;
	volatile uint8_t x376 = 1U;
	volatile int32_t t93 = 991;

	t93 = (x373<=(x374<=(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = UINT8_MAX;
	static int32_t t94 = 999658;

	t94 = (x377<=(x378<=(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = -1;
	volatile int16_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = -65;

	t95 = (x381<=(x382<=(x383&x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	static int32_t x386 = 14181;
	volatile uint8_t x387 = 54U;
	int16_t x388 = -3;

	t96 = (x385<=(x386<=(x387&x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = 102U;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = 108760U;
	static volatile int32_t t97 = -2565;

	t97 = (x389<=(x390<=(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	static int16_t x395 = -1;
	uint16_t x396 = 32487U;
	volatile int32_t t98 = -12450383;

	t98 = (x393<=(x394<=(x395&x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x398 = INT8_MIN;
	int16_t x399 = -39;
	static uint16_t x400 = 23260U;

	t99 = (x397<=(x398<=(x399&x400)));

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

