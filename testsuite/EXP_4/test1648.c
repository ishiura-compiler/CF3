#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
uint8_t x11 = 1U;
uint16_t x12 = 24U;
static volatile int32_t t2 = -6545;
volatile uint8_t x29 = 13U;
uint16_t x32 = 325U;
uint8_t x38 = UINT8_MAX;
volatile int32_t t10 = 5;
int8_t x47 = -1;
static volatile int64_t x50 = INT64_MIN;
volatile uint16_t x53 = UINT16_MAX;
volatile int32_t t14 = -16827;
int16_t x63 = 1752;
int8_t x64 = -2;
int32_t x65 = 2034;
uint16_t x69 = 3U;
volatile uint16_t x70 = 145U;
volatile uint64_t x71 = 942LLU;
static volatile int16_t x75 = INT16_MIN;
uint64_t x76 = 48LLU;
static volatile int32_t t18 = 16473002;
uint16_t x84 = 1U;
volatile uint16_t x90 = 1185U;
static volatile int32_t t23 = 172314934;
static uint16_t x97 = 723U;
volatile uint16_t x98 = UINT16_MAX;
volatile int8_t x99 = INT8_MAX;
static uint8_t x107 = 83U;
static int8_t x110 = -1;
uint64_t x113 = 8644478345040LLU;
static int8_t x114 = INT8_MIN;
volatile int16_t x115 = INT16_MIN;
static int32_t x116 = -22;
static int32_t x120 = -1;
uint8_t x121 = 3U;
int32_t t30 = -19130;
int8_t x128 = -1;
int16_t x132 = INT16_MIN;
volatile uint8_t x136 = 116U;
volatile int32_t x145 = INT32_MIN;
static uint64_t x149 = 734657549LLU;
int8_t x154 = INT8_MIN;
int8_t x155 = 0;
static int8_t x158 = -1;
int64_t x161 = -1LL;
int32_t x165 = INT32_MIN;
int8_t x171 = 51;
int8_t x172 = INT8_MIN;
static volatile uint64_t x179 = 775076894LLU;
int32_t x181 = INT32_MAX;
int16_t x183 = 0;
uint8_t x191 = 0U;
volatile int32_t t48 = -280403;
static int16_t x205 = -1;
int64_t x206 = -1LL;
uint16_t x208 = 10377U;
int8_t x212 = INT8_MAX;
int32_t x213 = -1;
static int8_t x217 = 45;
static volatile int32_t t54 = -109;
static int16_t x223 = -1;
int32_t x235 = INT32_MIN;
int16_t x240 = INT16_MIN;
volatile int16_t x250 = INT16_MIN;
volatile int32_t x254 = INT32_MAX;
static volatile int32_t t64 = 1;
int32_t x264 = INT32_MAX;
volatile int32_t t65 = -2;
uint8_t x274 = 7U;
int64_t x276 = -1LL;
int64_t x277 = -1LL;
int8_t x290 = 18;
uint32_t x293 = 411093843U;
volatile uint16_t x294 = 9007U;
uint16_t x298 = UINT16_MAX;
int16_t x301 = -1;
volatile int8_t x306 = INT8_MIN;
int8_t x311 = INT8_MIN;
int64_t x321 = INT64_MAX;
volatile uint64_t x322 = 354284448268619LLU;
static int8_t x328 = INT8_MIN;
static volatile uint8_t x329 = 13U;
int32_t t83 = 386750098;
volatile int32_t t84 = -258137061;
int32_t t85 = -172;
int64_t x346 = INT64_MIN;
int8_t x347 = -12;
static int32_t t87 = -14;
static volatile int64_t x360 = INT64_MIN;
static uint32_t x361 = 63729692U;
uint32_t x363 = UINT32_MAX;
volatile int32_t t90 = -17924;
int8_t x366 = 30;
int32_t x371 = INT32_MIN;
volatile int32_t t92 = 22525496;
int8_t x378 = -1;
int8_t x379 = INT8_MIN;
static uint32_t x382 = UINT32_MAX;
static int32_t x386 = INT32_MIN;
int32_t t96 = -829455602;
static volatile int32_t t97 = 21097848;
static volatile int32_t t98 = -109247013;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint16_t x2 = UINT16_MAX;
	volatile int8_t x3 = 1;
	volatile uint64_t x4 = 3202919467168LLU;
	static volatile int32_t t0 = 6159016;

	t0 = (x1<=(x2<=(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -25;
	int16_t x6 = INT16_MIN;
	uint32_t x8 = 180134478U;
	static volatile int32_t t1 = -130;

	t1 = (x5<=(x6<=(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = 1;
	volatile int16_t x10 = INT16_MAX;

	t2 = (x9<=(x10<=(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 9U;
	static int32_t x14 = 796946;
	volatile uint8_t x15 = 124U;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = -3659;

	t3 = (x13<=(x14<=(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 1293491619979LLU;
	uint64_t x18 = 15055LLU;
	volatile int8_t x19 = -1;
	static uint16_t x20 = 1U;
	volatile int32_t t4 = -5770352;

	t4 = (x17<=(x18<=(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MIN;
	static uint32_t x23 = 250149U;
	int64_t x24 = 253143931LL;
	volatile int32_t t5 = -125;

	t5 = (x21<=(x22<=(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MIN;
	static int8_t x27 = INT8_MIN;
	uint32_t x28 = UINT32_MAX;
	int32_t t6 = 1;

	t6 = (x25<=(x26<=(x27<=x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x30 = INT16_MAX;
	int64_t x31 = INT64_MIN;
	static volatile int32_t t7 = -257;

	t7 = (x29<=(x30<=(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 6239U;
	static int16_t x34 = -1;
	uint16_t x35 = 27169U;
	volatile uint8_t x36 = 19U;
	volatile int32_t t8 = -1757;

	t8 = (x33<=(x34<=(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 468307LL;
	int64_t x39 = -1LL;
	int16_t x40 = 0;
	volatile int32_t t9 = -60411850;

	t9 = (x37<=(x38<=(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	uint16_t x43 = 5119U;
	int64_t x44 = -19119783147613445LL;

	t10 = (x41<=(x42<=(x43<=x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	int16_t x46 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 1;

	t11 = (x45<=(x46<=(x47<=x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	int32_t x51 = 0;
	static int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 153320;

	t12 = (x49<=(x50<=(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x54 = 18330U;
	static uint8_t x55 = 56U;
	static volatile int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -4290008;

	t13 = (x53<=(x54<=(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1044768;
	volatile int32_t x58 = INT32_MAX;
	volatile int32_t x59 = INT32_MIN;
	volatile uint8_t x60 = UINT8_MAX;

	t14 = (x57<=(x58<=(x59<=x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 0U;
	int32_t x62 = 29956193;
	static int32_t t15 = -2517;

	t15 = (x61<=(x62<=(x63<=x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	volatile int64_t x67 = -2LL;
	volatile int8_t x68 = 1;
	static int32_t t16 = -174;

	t16 = (x65<=(x66<=(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x72 = 63U;
	volatile int32_t t17 = -102398;

	t17 = (x69<=(x70<=(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;

	t18 = (x73<=(x74<=(x75<=x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile int16_t x78 = INT16_MIN;
	volatile int64_t x79 = INT64_MIN;
	static int16_t x80 = -1;
	static int32_t t19 = 913734737;

	t19 = (x77<=(x78<=(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 15;
	int16_t x82 = -1;
	volatile uint32_t x83 = UINT32_MAX;
	volatile int32_t t20 = 181;

	t20 = (x81<=(x82<=(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -5676728038347356LL;
	int64_t x86 = INT64_MIN;
	uint32_t x87 = 38U;
	static uint32_t x88 = 57U;
	int32_t t21 = -50571088;

	t21 = (x85<=(x86<=(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	int16_t x91 = 1;
	volatile int16_t x92 = 28;
	volatile int32_t t22 = 20;

	t22 = (x89<=(x90<=(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	int32_t x95 = INT32_MIN;
	int32_t x96 = INT32_MIN;

	t23 = (x93<=(x94<=(x95<=x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x100 = 3U;
	static volatile int32_t t24 = 3127;

	t24 = (x97<=(x98<=(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	static int64_t x102 = 11404397966248430LL;
	uint8_t x103 = 68U;
	volatile int64_t x104 = -90LL;
	volatile int32_t t25 = -274990288;

	t25 = (x101<=(x102<=(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int64_t x106 = -33908813244LL;
	int8_t x108 = -1;
	volatile int32_t t26 = 277076724;

	t26 = (x105<=(x106<=(x107<=x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	static int32_t x111 = INT32_MIN;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -32;

	t27 = (x109<=(x110<=(x111<=x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t t28 = 39;

	t28 = (x113<=(x114<=(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = 110U;
	volatile int32_t t29 = -22953;

	t29 = (x117<=(x118<=(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = -1;
	uint8_t x123 = 24U;
	int32_t x124 = -49015304;

	t30 = (x121<=(x122<=(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	uint8_t x126 = 14U;
	volatile int16_t x127 = INT16_MIN;
	static volatile int32_t t31 = 9;

	t31 = (x125<=(x126<=(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 3LLU;
	uint32_t x130 = 34765U;
	static volatile uint8_t x131 = 84U;
	volatile int32_t t32 = 394603979;

	t32 = (x129<=(x130<=(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 15LLU;
	uint16_t x134 = UINT16_MAX;
	int32_t x135 = INT32_MAX;
	int32_t t33 = -50598062;

	t33 = (x133<=(x134<=(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 445U;
	int8_t x138 = INT8_MIN;
	int8_t x139 = -1;
	int64_t x140 = INT64_MAX;
	int32_t t34 = 362997631;

	t34 = (x137<=(x138<=(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = -1;
	volatile int32_t t35 = -1;

	t35 = (x141<=(x142<=(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x146 = 384265U;
	int16_t x147 = INT16_MIN;
	volatile uint8_t x148 = 57U;
	int32_t t36 = 296990;

	t36 = (x145<=(x146<=(x147<=x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 1U;
	uint64_t x151 = 8537832358LLU;
	int64_t x152 = -94774156627LL;
	int32_t t37 = -176635;

	t37 = (x149<=(x150<=(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static int32_t x156 = 133612;
	volatile int32_t t38 = 0;

	t38 = (x153<=(x154<=(x155<=x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int64_t x159 = 2355LL;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 2943;

	t39 = (x157<=(x158<=(x159<=x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -38848698795LL;
	volatile int32_t x163 = INT32_MIN;
	uint64_t x164 = 1647LLU;
	int32_t t40 = 1;

	t40 = (x161<=(x162<=(x163<=x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x166 = 15U;
	int16_t x167 = 5;
	static int32_t x168 = 4;
	volatile int32_t t41 = 7078647;

	t41 = (x165<=(x166<=(x167<=x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1LL;
	int8_t x170 = -5;
	volatile int32_t t42 = 1;

	t42 = (x169<=(x170<=(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = -8;
	static volatile uint8_t x175 = 22U;
	static volatile int32_t x176 = INT32_MIN;
	int32_t t43 = -14;

	t43 = (x173<=(x174<=(x175<=x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MAX;
	volatile uint64_t x178 = 636LLU;
	static volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 9258;

	t44 = (x177<=(x178<=(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = INT32_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t45 = -1445;

	t45 = (x181<=(x182<=(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -763960995;

	t46 = (x185<=(x186<=(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -216;
	int16_t x190 = INT16_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t47 = -1921;

	t47 = (x189<=(x190<=(x191<=x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	uint16_t x194 = UINT16_MAX;
	int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MIN;

	t48 = (x193<=(x194<=(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 147188U;
	static volatile uint8_t x198 = UINT8_MAX;
	uint16_t x199 = 0U;
	int32_t x200 = INT32_MAX;
	volatile int32_t t49 = 233829178;

	t49 = (x197<=(x198<=(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = 7746;
	volatile int64_t x202 = INT64_MIN;
	static int64_t x203 = 4498816972365937LL;
	uint16_t x204 = 17796U;
	volatile int32_t t50 = -2778357;

	t50 = (x201<=(x202<=(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x207 = UINT32_MAX;
	static int32_t t51 = 0;

	t51 = (x205<=(x206<=(x207<=x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int8_t x211 = 0;
	int32_t t52 = -407778343;

	t52 = (x209<=(x210<=(x211<=x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = -1;
	int32_t x215 = -1;
	int64_t x216 = -1LL;
	volatile int32_t t53 = 0;

	t53 = (x213<=(x214<=(x215<=x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x218 = 13U;
	int64_t x219 = INT64_MIN;
	uint8_t x220 = 114U;

	t54 = (x217<=(x218<=(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 15U;
	static int8_t x222 = -20;
	static int32_t x224 = 250366;
	volatile int32_t t55 = -603131553;

	t55 = (x221<=(x222<=(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	static int8_t x226 = INT8_MIN;
	volatile int32_t x227 = -1;
	uint32_t x228 = 1389035618U;
	int32_t t56 = -6;

	t56 = (x225<=(x226<=(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int32_t x230 = INT32_MAX;
	volatile int16_t x231 = INT16_MIN;
	int32_t x232 = 248031980;
	volatile int32_t t57 = 3;

	t57 = (x229<=(x230<=(x231<=x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 3U;
	volatile int64_t x234 = INT64_MIN;
	int64_t x236 = 14312508543827LL;
	static volatile int32_t t58 = -47551550;

	t58 = (x233<=(x234<=(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	int64_t x238 = -1LL;
	volatile int32_t x239 = INT32_MIN;
	int32_t t59 = -212142359;

	t59 = (x237<=(x238<=(x239<=x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	volatile int64_t x242 = INT64_MIN;
	int64_t x243 = 326970267832LL;
	volatile int8_t x244 = INT8_MIN;
	static int32_t t60 = 13013;

	t60 = (x241<=(x242<=(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x246 = 221110667677594LLU;
	static uint16_t x247 = 0U;
	static int32_t x248 = 48;
	int32_t t61 = 2;

	t61 = (x245<=(x246<=(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -6;
	uint8_t x251 = 3U;
	int64_t x252 = INT64_MAX;
	int32_t t62 = 110143;

	t62 = (x249<=(x250<=(x251<=x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -89;
	volatile int16_t x255 = INT16_MIN;
	volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = 372;

	t63 = (x253<=(x254<=(x255<=x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 1U;
	int16_t x258 = -43;
	int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;

	t64 = (x257<=(x258<=(x259<=x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	static int32_t x263 = INT32_MIN;

	t65 = (x261<=(x262<=(x263<=x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static volatile int32_t x266 = -1;
	int8_t x267 = 1;
	static int64_t x268 = INT64_MAX;
	volatile int32_t t66 = 836563;

	t66 = (x265<=(x266<=(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	volatile uint32_t x270 = 1884607808U;
	uint16_t x271 = 4044U;
	int32_t x272 = -9148496;
	volatile int32_t t67 = -1;

	t67 = (x269<=(x270<=(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int16_t x275 = 0;
	static int32_t t68 = 0;

	t68 = (x273<=(x274<=(x275<=x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = UINT32_MAX;
	uint16_t x279 = UINT16_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 169392507;

	t69 = (x277<=(x278<=(x279<=x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MAX;
	static volatile int16_t x282 = -10998;
	uint8_t x283 = 2U;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t70 = -2983;

	t70 = (x281<=(x282<=(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	static int8_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	volatile uint64_t x288 = UINT64_MAX;
	int32_t t71 = -1;

	t71 = (x285<=(x286<=(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static volatile uint16_t x291 = 11U;
	int8_t x292 = -2;
	volatile int32_t t72 = -26359439;

	t72 = (x289<=(x290<=(x291<=x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x295 = -7;
	static uint8_t x296 = UINT8_MAX;
	int32_t t73 = -10210479;

	t73 = (x293<=(x294<=(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int64_t x299 = -808020LL;
	int8_t x300 = -21;
	static int32_t t74 = 348;

	t74 = (x297<=(x298<=(x299<=x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x302 = UINT16_MAX;
	int8_t x303 = -1;
	static int32_t x304 = INT32_MAX;
	int32_t t75 = -46213726;

	t75 = (x301<=(x302<=(x303<=x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static int64_t x307 = 14758548753229LL;
	int16_t x308 = -6;
	volatile int32_t t76 = 129;

	t76 = (x305<=(x306<=(x307<=x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x309 = INT64_MIN;
	static int64_t x310 = INT64_MIN;
	static volatile int64_t x312 = -2252642824880030017LL;
	volatile int32_t t77 = 1570;

	t77 = (x309<=(x310<=(x311<=x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = 1;
	uint32_t x314 = 4U;
	uint32_t x315 = 63U;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = 12937845;

	t78 = (x313<=(x314<=(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MAX;
	int8_t x318 = INT8_MAX;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MIN;
	static volatile int32_t t79 = 5;

	t79 = (x317<=(x318<=(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = -1;
	uint8_t x324 = UINT8_MAX;
	static int32_t t80 = -1381040;

	t80 = (x321<=(x322<=(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = 817267U;
	uint8_t x326 = 0U;
	int32_t x327 = -1;
	volatile int32_t t81 = 1;

	t81 = (x325<=(x326<=(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = -1;
	volatile uint16_t x331 = UINT16_MAX;
	static int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 0;

	t82 = (x329<=(x330<=(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MIN;
	volatile uint64_t x335 = 1102LLU;
	uint16_t x336 = UINT16_MAX;

	t83 = (x333<=(x334<=(x335<=x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -1;
	static volatile int16_t x338 = -2780;
	volatile int8_t x339 = -1;
	int8_t x340 = -1;

	t84 = (x337<=(x338<=(x339<=x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = 0LLU;
	static uint16_t x343 = 23506U;
	static volatile uint16_t x344 = 18U;

	t85 = (x341<=(x342<=(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	volatile int8_t x348 = -1;
	static volatile int32_t t86 = 0;

	t86 = (x345<=(x346<=(x347<=x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	int32_t x350 = 88835;
	uint16_t x351 = 30U;
	int8_t x352 = INT8_MIN;

	t87 = (x349<=(x350<=(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 814443U;
	int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t88 = -15200;

	t88 = (x353<=(x354<=(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile uint8_t x358 = 11U;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t t89 = 62916;

	t89 = (x357<=(x358<=(x359<=x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = INT32_MIN;
	int32_t x364 = INT32_MIN;

	t90 = (x361<=(x362<=(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int64_t x367 = -1LL;
	static volatile uint32_t x368 = 509U;
	volatile int32_t t91 = -15;

	t91 = (x365<=(x366<=(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = UINT32_MAX;
	int32_t x370 = -1;
	int16_t x372 = INT16_MAX;

	t92 = (x369<=(x370<=(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MAX;
	int64_t x374 = 41217LL;
	int64_t x375 = INT64_MIN;
	uint64_t x376 = 698410593136127LLU;
	int32_t t93 = -91652;

	t93 = (x373<=(x374<=(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int32_t x380 = INT32_MAX;
	volatile int32_t t94 = -111903852;

	t94 = (x377<=(x378<=(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	volatile uint64_t x383 = UINT64_MAX;
	volatile int64_t x384 = -1LL;
	volatile int32_t t95 = -13;

	t95 = (x381<=(x382<=(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static volatile int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;

	t96 = (x385<=(x386<=(x387<=x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	static volatile int16_t x390 = INT16_MIN;
	static uint64_t x391 = 3086LLU;
	int32_t x392 = INT32_MAX;

	t97 = (x389<=(x390<=(x391<=x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 58U;
	static uint32_t x394 = 41967U;
	volatile int8_t x395 = 0;
	static int64_t x396 = INT64_MAX;

	t98 = (x393<=(x394<=(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x397 = -5802126741780153LL;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MIN;
	static int8_t x400 = -8;
	static volatile int32_t t99 = 62;

	t99 = (x397<=(x398<=(x399<=x400)));

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

