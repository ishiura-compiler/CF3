#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 244119LLU;
uint32_t x6 = 1U;
int8_t x7 = -1;
uint64_t x16 = 645450LLU;
volatile uint64_t t3 = 150078803366LLU;
int16_t x18 = INT16_MIN;
int8_t x28 = -9;
static volatile int32_t t7 = -1809;
int64_t x35 = INT64_MIN;
int64_t x37 = INT64_MAX;
volatile uint16_t x39 = 9292U;
volatile int64_t t9 = INT64_MAX;
volatile uint32_t x43 = 3934U;
int16_t x48 = -1;
int16_t x52 = INT16_MIN;
volatile int8_t x54 = INT8_MIN;
static uint8_t x56 = 67U;
int64_t t13 = INT64_MAX;
static uint64_t x71 = UINT64_MAX;
static volatile uint64_t t17 = 593269LLU;
int64_t x87 = 40LL;
volatile uint8_t x91 = 64U;
int64_t x93 = -1LL;
int32_t x96 = INT32_MIN;
int64_t x106 = 127585022920856LL;
volatile int32_t x107 = INT32_MAX;
volatile uint16_t x108 = 1U;
volatile int32_t x110 = 0;
volatile int8_t x119 = 2;
volatile uint32_t t29 = 1819654U;
volatile int32_t t30 = -7708445;
int32_t x125 = INT32_MIN;
volatile int32_t t31 = 48960512;
volatile int16_t x129 = INT16_MIN;
static int8_t x131 = INT8_MAX;
int64_t x133 = INT64_MAX;
uint8_t x138 = UINT8_MAX;
uint64_t x144 = 846589542LLU;
volatile int32_t t36 = 0;
int64_t x158 = INT64_MAX;
volatile int8_t x165 = INT8_MIN;
int32_t x168 = INT32_MIN;
uint8_t x172 = 0U;
uint64_t x177 = 3499LLU;
int32_t x179 = -1;
int8_t x182 = INT8_MIN;
static int64_t x191 = INT64_MIN;
int32_t t48 = -11;
volatile uint64_t t49 = 116743LLU;
uint8_t x202 = 12U;
static int8_t x204 = INT8_MIN;
volatile int32_t t50 = -3360;
int64_t t51 = -1249026894493598234LL;
static int16_t x212 = INT16_MIN;
volatile int64_t x215 = -114608288LL;
int8_t x217 = 0;
uint32_t x219 = UINT32_MAX;
int32_t x221 = INT32_MIN;
volatile int32_t x222 = 10129;
int32_t x228 = INT32_MIN;
volatile int64_t x232 = -1LL;
static int16_t x235 = INT16_MAX;
int16_t x239 = INT16_MIN;
uint8_t x242 = UINT8_MAX;
volatile int64_t x245 = -1LL;
int32_t t62 = 526845550;
static uint16_t x253 = 0U;
int64_t x256 = INT64_MAX;
uint64_t x259 = UINT64_MAX;
int64_t x263 = INT64_MIN;
static volatile uint64_t x264 = UINT64_MAX;
uint32_t x272 = UINT32_MAX;
static volatile int16_t x274 = -17;
uint8_t x275 = 5U;
static uint8_t x286 = UINT8_MAX;
int32_t t71 = -2460;
uint64_t x298 = UINT64_MAX;
volatile uint32_t t74 = 20891U;
int16_t x303 = -1;
static int32_t x318 = 0;
uint16_t x321 = 61U;
uint64_t t81 = UINT64_MAX;
int64_t x329 = INT64_MIN;
static int32_t x338 = -1;
int64_t x343 = -122LL;
int64_t x346 = 133233513LL;
static volatile int64_t x357 = INT64_MIN;
volatile int32_t t90 = -27;
static int8_t x366 = INT8_MAX;
uint16_t x369 = 1930U;
int64_t x371 = -1LL;
volatile int32_t t92 = -48143501;
static int64_t x376 = -1LL;
uint8_t x379 = 10U;
uint32_t x382 = 3518889U;
int32_t x384 = 30515;
volatile uint32_t t96 = UINT32_MAX;
uint16_t x389 = 4U;
static int64_t x390 = -1LL;
volatile uint8_t x391 = UINT8_MAX;
int32_t x393 = INT32_MIN;
int16_t x394 = INT16_MIN;
uint16_t x395 = 600U;
static int8_t x397 = INT8_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = -1LL;
	static volatile int32_t x3 = INT32_MIN;
	int32_t t0 = INT32_MIN;

	t0 = (x1*(x2<(x3==x4)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 1870907;

	t1 = (x5*(x6<(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int16_t x10 = -727;
	int32_t x11 = INT32_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -4;

	t2 = (x9*(x10<(x11==x12)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int32_t x14 = 78;
	static volatile int64_t x15 = INT64_MAX;

	t3 = (x13*(x14<(x15==x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	volatile int32_t x19 = INT32_MAX;
	volatile int64_t x20 = 122172381787442LL;
	static volatile int32_t t4 = -2;

	t4 = (x17*(x18<(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = -1LL;
	uint8_t x23 = 107U;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -266115049;

	t5 = (x21*(x22<(x23==x24)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = 0;
	volatile int64_t t6 = -1LL;

	t6 = (x25*(x26<(x27==x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x29 = INT32_MIN;
	volatile uint32_t x30 = 2961U;
	int16_t x31 = 180;
	static int32_t x32 = -1;

	t7 = (x29*(x30<(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 66U;
	volatile int64_t x34 = INT64_MIN;
	int64_t x36 = 31910842203LL;
	volatile int32_t t8 = 1;

	t8 = (x33*(x34<(x35==x36)));

	if (t8 != 66) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MIN;
	static uint64_t x40 = 63787LLU;

	t9 = (x37*(x38<(x39==x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -2;
	int8_t x42 = INT8_MAX;
	int64_t x44 = INT64_MIN;
	int32_t t10 = -4175453;

	t10 = (x41*(x42<(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile int8_t x46 = -1;
	uint64_t x47 = 39885567705775102LLU;
	static int64_t t11 = INT64_MIN;

	t11 = (x45*(x46<(x47==x48)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MIN;
	static volatile int32_t x51 = INT32_MIN;
	volatile int32_t t12 = 2586;

	t12 = (x49*(x50<(x51==x52)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	static int64_t x55 = 222140728809LL;

	t13 = (x53*(x54<(x55==x56)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 8U;
	volatile uint32_t x60 = 5778U;
	static volatile uint32_t t14 = UINT32_MAX;

	t14 = (x57*(x58<(x59==x60)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = 83777470U;
	volatile uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = -3337;

	t15 = (x61*(x62<(x63==x64)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int8_t x66 = 12;
	int8_t x67 = 32;
	int16_t x68 = INT16_MAX;
	volatile int64_t t16 = 98222530305LL;

	t16 = (x65*(x66<(x67==x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 156707924884906LLU;
	static volatile int8_t x70 = INT8_MIN;
	static int16_t x72 = -1;

	t17 = (x69*(x70<(x71==x72)));

	if (t17 != 156707924884906LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 3982U;
	int64_t x74 = INT64_MAX;
	uint64_t x75 = UINT64_MAX;
	uint64_t x76 = 57712256955969LLU;
	static volatile int32_t t18 = -7173;

	t18 = (x73*(x74<(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = 237U;
	int32_t x79 = INT32_MAX;
	uint64_t x80 = 66088324816LLU;
	int64_t t19 = 30368784LL;

	t19 = (x77*(x78<(x79==x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 12;
	static int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	static volatile int32_t x84 = -4;
	volatile int32_t t20 = 254698600;

	t20 = (x81*(x82<(x83==x84)));

	if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -16235602LL;
	volatile int8_t x86 = 1;
	int32_t x88 = INT32_MIN;
	int64_t t21 = 770240527LL;

	t21 = (x85*(x86<(x87==x88)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -148;
	int16_t x90 = INT16_MAX;
	uint8_t x92 = 1U;
	static volatile int32_t t22 = -869581;

	t22 = (x89*(x90<(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 20U;
	static uint32_t x95 = UINT32_MAX;
	static int64_t t23 = -29235872063814LL;

	t23 = (x93*(x94<(x95==x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 151213;
	uint8_t x98 = UINT8_MAX;
	volatile uint32_t x99 = 694U;
	uint32_t x100 = 7U;
	volatile int32_t t24 = 1443311;

	t24 = (x97*(x98<(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	uint8_t x102 = 31U;
	int32_t x103 = 12336748;
	uint32_t x104 = 26937803U;
	int32_t t25 = -1777;

	t25 = (x101*(x102<(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int32_t t26 = 27225859;

	t26 = (x105*(x106<(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	static volatile int64_t x112 = INT64_MIN;
	int32_t t27 = INT32_MIN;

	t27 = (x109*(x110<(x111==x112)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -18;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = 212566LLU;
	static uint8_t x116 = 1U;
	static int32_t t28 = -280903;

	t28 = (x113*(x114<(x115==x116)));

	if (t28 != -18) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 62824870U;
	uint8_t x118 = 34U;
	volatile int32_t x120 = INT32_MIN;

	t29 = (x117*(x118<(x119==x120)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 16115;
	uint32_t x122 = 15U;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MIN;

	t30 = (x121*(x122<(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 99429LLU;
	int32_t x127 = INT32_MIN;
	int8_t x128 = 0;

	t31 = (x125*(x126<(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x130 = 7U;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = -932201744;

	t32 = (x129*(x130<(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x134 = -1;
	volatile uint32_t x135 = 1U;
	volatile uint64_t x136 = UINT64_MAX;
	static volatile int64_t t33 = INT64_MAX;

	t33 = (x133*(x134<(x135==x136)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	static int32_t x139 = -1;
	static int64_t x140 = -1LL;
	int64_t t34 = 3331846LL;

	t34 = (x137*(x138<(x139==x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x141 = UINT64_MAX;
	int8_t x142 = 38;
	int64_t x143 = -7361150989LL;
	volatile uint64_t t35 = 2257LLU;

	t35 = (x141*(x142<(x143==x144)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	static uint32_t x146 = UINT32_MAX;
	static volatile int32_t x147 = INT32_MAX;
	int8_t x148 = -1;

	t36 = (x145*(x146<(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 58;
	int8_t x150 = INT8_MIN;
	static volatile int16_t x151 = -1;
	int16_t x152 = INT16_MAX;
	static int32_t t37 = 4386447;

	t37 = (x149*(x150<(x151==x152)));

	if (t37 != 58) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	static uint64_t x154 = 3842LLU;
	uint8_t x155 = 9U;
	volatile int32_t x156 = -1;
	int32_t t38 = 385825;

	t38 = (x153*(x154<(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = 3826LL;
	static uint16_t x159 = UINT16_MAX;
	int32_t x160 = INT32_MAX;
	volatile int64_t t39 = 572741878LL;

	t39 = (x157*(x158<(x159==x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = INT64_MIN;
	static int64_t x162 = INT64_MAX;
	volatile int8_t x163 = 0;
	int32_t x164 = INT32_MAX;
	volatile int64_t t40 = -506816370172123LL;

	t40 = (x161*(x162<(x163==x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	volatile int8_t x167 = -1;
	int32_t t41 = -4095;

	t41 = (x165*(x166<(x167==x168)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	volatile uint64_t x170 = 21889115644527LLU;
	int16_t x171 = 338;
	static int32_t t42 = 2721041;

	t42 = (x169*(x170<(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 0U;
	int16_t x174 = 10996;
	int32_t x175 = -469292;
	static uint64_t x176 = UINT64_MAX;
	volatile int32_t t43 = 0;

	t43 = (x173*(x174<(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -4289;
	int16_t x180 = -1;
	static uint64_t t44 = 4477146420986988LLU;

	t44 = (x177*(x178<(x179==x180)));

	if (t44 != 3499LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = 3987;
	int32_t t45 = -44;

	t45 = (x181*(x182<(x183==x184)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int16_t x186 = -3;
	static uint16_t x187 = UINT16_MAX;
	static int8_t x188 = 12;
	volatile int32_t t46 = -227437100;

	t46 = (x185*(x186<(x187==x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 4275591220LL;
	uint8_t x190 = 59U;
	int16_t x192 = -1;
	int64_t t47 = 19738LL;

	t47 = (x189*(x190<(x191==x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	volatile int32_t x194 = -1;
	int32_t x195 = -970;
	static int64_t x196 = INT64_MIN;

	t48 = (x193*(x194<(x195==x196)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 11796375500LLU;
	static uint16_t x198 = 1442U;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;

	t49 = (x197*(x198<(x199==x200)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -87;
	uint32_t x203 = 81147U;

	t50 = (x201*(x202<(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	volatile uint64_t x206 = 204784353LLU;
	uint64_t x207 = 601LLU;
	int8_t x208 = -57;

	t51 = (x205*(x206<(x207==x208)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -16525468709141LL;
	volatile int32_t t52 = -1060;

	t52 = (x209*(x210<(x211==x212)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = 34764;
	uint64_t x214 = 1820210716084426397LLU;
	int16_t x216 = -1;
	volatile int32_t t53 = 29843;

	t53 = (x213*(x214<(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = -1233;
	uint8_t x220 = 1U;
	int32_t t54 = 777237984;

	t54 = (x217*(x218<(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x223 = -1;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = 24;

	t55 = (x221*(x222<(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 0;
	static uint16_t x226 = 11U;
	static int32_t x227 = -1;
	static volatile int32_t t56 = -45;

	t56 = (x225*(x226<(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 4;
	static int16_t x230 = -1;
	static int32_t x231 = INT32_MIN;
	volatile int32_t t57 = 3556113;

	t57 = (x229*(x230<(x231==x232)));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	static int16_t x234 = 1;
	static int64_t x236 = -2LL;
	volatile int32_t t58 = 11267040;

	t58 = (x233*(x234<(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	static uint8_t x238 = UINT8_MAX;
	int32_t x240 = INT32_MAX;
	volatile int32_t t59 = 24;

	t59 = (x237*(x238<(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MAX;
	volatile uint64_t t60 = 1LLU;

	t60 = (x241*(x242<(x243==x244)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = INT8_MIN;
	int16_t x247 = -6196;
	static uint64_t x248 = 10518124160695483LLU;
	volatile int64_t t61 = 3723534929189216LL;

	t61 = (x245*(x246<(x247==x248)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static volatile int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MAX;
	uint64_t x252 = UINT64_MAX;

	t62 = (x249*(x250<(x251==x252)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 2U;
	int64_t x255 = INT64_MIN;
	int32_t t63 = -37444323;

	t63 = (x253*(x254<(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 5;
	int16_t x258 = INT16_MIN;
	int16_t x260 = -427;
	int32_t t64 = 0;

	t64 = (x257*(x258<(x259==x260)));

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MAX;
	uint64_t t65 = 4LLU;

	t65 = (x261*(x262<(x263==x264)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile int64_t x266 = INT64_MIN;
	volatile int8_t x267 = -1;
	static volatile int8_t x268 = -1;
	int32_t t66 = 13;

	t66 = (x265*(x266<(x267==x268)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 43;
	volatile uint8_t x270 = 16U;
	uint8_t x271 = 40U;
	int32_t t67 = -1907;

	t67 = (x269*(x270<(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int8_t x276 = INT8_MIN;
	int64_t t68 = INT64_MIN;

	t68 = (x273*(x274<(x275==x276)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int8_t x278 = 36;
	int64_t x279 = -1LL;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -1;

	t69 = (x277*(x278<(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 5662263798872147LLU;
	static uint64_t x282 = 15845405464419639LLU;
	int16_t x283 = -10;
	uint64_t x284 = 1554727LLU;
	uint64_t t70 = 942569LLU;

	t70 = (x281*(x282<(x283==x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x287 = -1;
	uint64_t x288 = 1LLU;

	t71 = (x285*(x286<(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int64_t x290 = -4600779151435802LL;
	volatile int64_t x291 = INT64_MIN;
	int32_t x292 = -7922198;
	uint32_t t72 = UINT32_MAX;

	t72 = (x289*(x290<(x291==x292)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -2224;
	int16_t x294 = INT16_MIN;
	int32_t x295 = INT32_MAX;
	int64_t x296 = -1LL;
	int32_t t73 = -476685569;

	t73 = (x293*(x294<(x295==x296)));

	if (t73 != -2224) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = UINT32_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	static int8_t x300 = INT8_MIN;

	t74 = (x297*(x298<(x299==x300)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = UINT64_MAX;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 246;

	t75 = (x301*(x302<(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 429U;
	int16_t x306 = 322;
	volatile int64_t x307 = INT64_MIN;
	uint32_t x308 = UINT32_MAX;
	static volatile uint32_t t76 = 51U;

	t76 = (x305*(x306<(x307==x308)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = -8525;
	int8_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 294509696;

	t77 = (x309*(x310<(x311==x312)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -369LL;
	volatile int64_t x314 = INT64_MIN;
	uint8_t x315 = 0U;
	static volatile int8_t x316 = INT8_MIN;
	volatile int64_t t78 = 29544809149LL;

	t78 = (x313*(x314<(x315==x316)));

	if (t78 != -369LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int32_t x319 = INT32_MAX;
	int8_t x320 = -2;
	static int64_t t79 = -1410077914327935970LL;

	t79 = (x317*(x318<(x319==x320)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MIN;
	static uint32_t x323 = UINT32_MAX;
	static volatile int32_t x324 = -99;
	int32_t t80 = -201;

	t80 = (x321*(x322<(x323==x324)));

	if (t80 != 61) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MIN;
	volatile uint32_t x327 = 113739962U;
	int8_t x328 = INT8_MAX;

	t81 = (x325*(x326<(x327==x328)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	int64_t x332 = 88368952001113204LL;
	int64_t t82 = INT64_MIN;

	t82 = (x329*(x330<(x331==x332)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MAX;
	uint64_t x334 = 27540LLU;
	int64_t x335 = -3958152600235LL;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = 1285;

	t83 = (x333*(x334<(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	static volatile int8_t x339 = 1;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -102748017;

	t84 = (x337*(x338<(x339==x340)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 3U;
	static int32_t x342 = INT32_MIN;
	static int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = 415060848;

	t85 = (x341*(x342<(x343==x344)));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 3U;
	volatile uint64_t x347 = 499906259LLU;
	volatile uint32_t x348 = 479903U;
	uint32_t t86 = 4U;

	t86 = (x345*(x346<(x347==x348)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = UINT8_MAX;
	static uint8_t x350 = 100U;
	volatile uint8_t x351 = UINT8_MAX;
	int8_t x352 = -1;
	volatile int32_t t87 = 288683487;

	t87 = (x349*(x350<(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = -1;
	int32_t x355 = 1;
	int64_t x356 = -5131065041055LL;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x353*(x354<(x355==x356)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = 67178822488912936LLU;
	int32_t x359 = INT32_MAX;
	uint8_t x360 = UINT8_MAX;
	static int64_t t89 = -68956274117667LL;

	t89 = (x357*(x358<(x359==x360)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 9;
	int8_t x362 = 14;
	uint32_t x363 = UINT32_MAX;
	static uint8_t x364 = 60U;

	t90 = (x361*(x362<(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -6;
	uint32_t x367 = 60804568U;
	volatile int32_t x368 = INT32_MIN;
	int32_t t91 = 40;

	t91 = (x365*(x366<(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -1LL;
	int32_t x372 = -4;

	t92 = (x369*(x370<(x371==x372)));

	if (t92 != 1930) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int32_t x374 = -1;
	static int16_t x375 = -1;
	static volatile int32_t t93 = -1376973;

	t93 = (x373*(x374<(x375==x376)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -1;
	int16_t x378 = -1;
	uint8_t x380 = 1U;
	volatile int32_t t94 = -5;

	t94 = (x377*(x378<(x379==x380)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = -1LL;
	int32_t x383 = INT32_MIN;
	static int64_t t95 = 595712536LL;

	t95 = (x381*(x382<(x383==x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = 3;

	t96 = (x385*(x386<(x387==x388)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x392 = INT32_MIN;
	int32_t t97 = 103803337;

	t97 = (x389*(x390<(x391==x392)));

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x396 = 0U;
	volatile int32_t t98 = INT32_MIN;

	t98 = (x393*(x394<(x395==x396)));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = -8;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 221608451U;
	int32_t t99 = -1266;

	t99 = (x397*(x398<(x399==x400)));

	if (t99 != -128) { NG(); } else { ; }
	
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
