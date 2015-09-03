#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x10 = -2;
volatile int64_t x23 = 3327LL;
int32_t t10 = 1056685;
static uint32_t x46 = 64796U;
static int32_t x48 = -1;
int32_t t11 = 9;
volatile int32_t t14 = 355;
static int64_t x63 = 1LL;
uint8_t x64 = UINT8_MAX;
uint64_t x65 = UINT64_MAX;
int32_t t17 = -10487954;
int16_t x75 = INT16_MIN;
int64_t x79 = INT64_MAX;
int16_t x81 = 1;
int16_t x86 = INT16_MIN;
int8_t x96 = 8;
static int8_t x97 = INT8_MAX;
volatile int32_t t24 = -30925;
volatile int64_t x107 = -868290218LL;
int16_t x109 = INT16_MIN;
volatile int32_t t27 = -21190796;
volatile int64_t x113 = INT64_MAX;
static int64_t x118 = -3865365LL;
static volatile int32_t t29 = -505;
int64_t x122 = INT64_MIN;
int32_t x140 = -5;
int64_t x142 = INT64_MIN;
int16_t x147 = -1;
int32_t x152 = -1;
int32_t t37 = 8;
volatile uint64_t x153 = 166733038LLU;
int32_t x164 = INT32_MIN;
uint32_t x166 = UINT32_MAX;
int32_t x167 = -58;
uint8_t x171 = UINT8_MAX;
volatile int8_t x173 = INT8_MIN;
int16_t x175 = INT16_MIN;
int32_t x177 = -164;
int32_t x181 = INT32_MIN;
int64_t x182 = INT64_MAX;
uint8_t x186 = 91U;
volatile int8_t x189 = INT8_MAX;
volatile uint16_t x192 = UINT16_MAX;
volatile int32_t x196 = -1;
static int64_t x197 = -1LL;
int32_t x216 = INT32_MIN;
int64_t x218 = -1LL;
volatile int32_t t54 = 167328;
uint64_t x224 = 304775427586LLU;
volatile int32_t x228 = -4;
int32_t x231 = INT32_MIN;
volatile int32_t t59 = 657;
int8_t x242 = INT8_MAX;
volatile int16_t x243 = -1;
volatile int32_t t60 = -302501252;
int8_t x245 = INT8_MIN;
int64_t x248 = 49217LL;
static int8_t x251 = 0;
volatile uint64_t x256 = UINT64_MAX;
volatile int32_t t64 = -65258;
int16_t x262 = INT16_MIN;
int64_t x279 = INT64_MIN;
volatile int32_t t69 = -106;
uint64_t x290 = 9LLU;
uint64_t x294 = UINT64_MAX;
int32_t x304 = INT32_MAX;
volatile int32_t t75 = -1070;
int16_t x309 = INT16_MIN;
int32_t t79 = 1;
static volatile int8_t x327 = INT8_MIN;
int64_t x332 = 68638384154040756LL;
int32_t t84 = -1;
int64_t x342 = 3LL;
volatile int32_t t87 = -7368886;
int32_t x353 = -3009240;
volatile int32_t t88 = -1486350;
static int16_t x362 = 121;
volatile int8_t x370 = INT8_MIN;
int32_t x372 = INT32_MIN;
volatile int8_t x386 = INT8_MIN;
volatile int32_t t96 = 5112;
static uint64_t x392 = 930433979LLU;
int16_t x393 = INT16_MAX;
static int64_t x394 = INT64_MIN;
uint32_t x397 = 957324643U;


void f0(void) {
	uint64_t x1 = 1293239532LLU;
	int32_t x2 = INT32_MIN;
	static uint16_t x3 = 60U;
	int32_t x4 = 509270061;
	volatile int32_t t0 = -256667;

	t0 = (x1<=(x2&(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 15U;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = 41U;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 57155;

	t1 = (x5<=(x6&(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -948241;
	static uint16_t x11 = 2U;
	volatile int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = -629900248;

	t2 = (x9<=(x10&(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = -359638439;
	int64_t x15 = -1LL;
	volatile uint8_t x16 = 0U;
	int32_t t3 = 8267;

	t3 = (x13<=(x14&(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	int32_t x18 = 9;
	static int16_t x19 = INT16_MIN;
	int8_t x20 = -1;
	volatile int32_t t4 = -631121;

	t4 = (x17<=(x18&(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = 9;
	volatile uint64_t x22 = 277697206494741LLU;
	static uint64_t x24 = 457736343LLU;
	volatile int32_t t5 = -19345;

	t5 = (x21<=(x22&(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 18U;
	uint64_t x26 = 22490134LLU;
	int16_t x27 = INT16_MAX;
	uint32_t x28 = 113U;
	volatile int32_t t6 = -11813;

	t6 = (x25<=(x26&(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint16_t x30 = 0U;
	volatile int32_t x31 = INT32_MIN;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 4021165;

	t7 = (x29<=(x30&(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -7418;
	volatile int64_t x34 = -4602476223LL;
	int16_t x35 = 0;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = -8698;

	t8 = (x33<=(x34&(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 81;
	int32_t x38 = INT32_MAX;
	static uint64_t x39 = 1566524243327651LLU;
	static uint8_t x40 = 2U;
	int32_t t9 = 1;

	t9 = (x37<=(x38&(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int64_t x42 = INT64_MAX;
	volatile int8_t x43 = -2;
	uint64_t x44 = 10368662515LLU;

	t10 = (x41<=(x42&(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 42U;
	int32_t x47 = INT32_MIN;

	t11 = (x45<=(x46&(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 4069981LL;
	int8_t x52 = -1;
	int32_t t12 = -1241;

	t12 = (x49<=(x50&(x51&x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = INT32_MIN;
	static uint64_t x54 = UINT64_MAX;
	int8_t x55 = -5;
	static int32_t x56 = -88015016;
	int32_t t13 = 264768;

	t13 = (x53<=(x54&(x55&x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = INT32_MIN;
	uint32_t x58 = 411U;
	static int32_t x59 = -347;
	uint8_t x60 = 0U;

	t14 = (x57<=(x58&(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MAX;
	static volatile int32_t t15 = 87;

	t15 = (x61<=(x62&(x63&x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = INT32_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	int8_t x68 = INT8_MIN;
	static int32_t t16 = -496983;

	t16 = (x65<=(x66&(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = UINT64_MAX;
	uint8_t x70 = 73U;
	int16_t x71 = -1;
	volatile int16_t x72 = INT16_MIN;

	t17 = (x69<=(x70&(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint16_t x74 = 31476U;
	volatile int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 1302;

	t18 = (x73<=(x74&(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 0U;
	uint64_t x78 = UINT64_MAX;
	int16_t x80 = INT16_MAX;
	volatile int32_t t19 = 2;

	t19 = (x77<=(x78&(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 12753U;
	uint64_t x83 = 536764497958532LLU;
	static volatile int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = -150928483;

	t20 = (x81<=(x82&(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	uint16_t x87 = 788U;
	int16_t x88 = 2;
	volatile int32_t t21 = 279;

	t21 = (x85<=(x86&(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	int32_t x90 = -1;
	int8_t x91 = 25;
	volatile int8_t x92 = -1;
	static volatile int32_t t22 = 288;

	t22 = (x89<=(x90&(x91&x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int64_t x94 = 1015341984536215132LL;
	static int16_t x95 = INT16_MIN;
	int32_t t23 = -1185;

	t23 = (x93<=(x94&(x95&x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;

	t24 = (x97<=(x98&(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -34789650504105LL;
	int64_t x102 = INT64_MAX;
	uint8_t x103 = 4U;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 879;

	t25 = (x101<=(x102&(x103&x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 1;
	int8_t x106 = 0;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = 19;

	t26 = (x105<=(x106&(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MAX;
	int32_t x111 = 45;
	int16_t x112 = INT16_MIN;

	t27 = (x109<=(x110&(x111&x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -1;
	int64_t x115 = 2390999335367LL;
	volatile int8_t x116 = -2;
	int32_t t28 = 592;

	t28 = (x113<=(x114&(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -3874929663LL;
	static int8_t x119 = -3;
	uint16_t x120 = UINT16_MAX;

	t29 = (x117<=(x118&(x119&x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	volatile int32_t x123 = INT32_MIN;
	static int16_t x124 = 1;
	static int32_t t30 = 61;

	t30 = (x121<=(x122&(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = 1516;
	int16_t x126 = -1;
	volatile int64_t x127 = -1LL;
	uint32_t x128 = 969147U;
	int32_t t31 = -1;

	t31 = (x125<=(x126&(x127&x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	static int64_t x130 = INT64_MIN;
	static int16_t x131 = 1;
	uint16_t x132 = 29946U;
	volatile int32_t t32 = 6;

	t32 = (x129<=(x130&(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MAX;
	int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 1;

	t33 = (x133<=(x134&(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = INT32_MIN;
	static int32_t t34 = -166629991;

	t34 = (x137<=(x138&(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 1112LLU;
	int32_t x143 = INT32_MIN;
	static int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = -4349775;

	t35 = (x141<=(x142&(x143&x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 50508754362LL;
	uint64_t x146 = 273672LLU;
	int8_t x148 = -1;
	volatile int32_t t36 = 0;

	t36 = (x145<=(x146&(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 3665206202359387281LL;
	volatile int8_t x150 = 3;
	int8_t x151 = -1;

	t37 = (x149<=(x150&(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = -1;
	static volatile int32_t x155 = INT32_MIN;
	static uint32_t x156 = 14554262U;
	int32_t t38 = -7615;

	t38 = (x153<=(x154&(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MAX;
	volatile int16_t x159 = -1;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 7652;

	t39 = (x157<=(x158&(x159&x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1U;
	uint32_t x162 = 558110326U;
	int8_t x163 = INT8_MAX;
	static int32_t t40 = -6526761;

	t40 = (x161<=(x162&(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	volatile int64_t x168 = INT64_MIN;
	int32_t t41 = 141;

	t41 = (x165<=(x166&(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 1661;
	int64_t x170 = INT64_MIN;
	int64_t x172 = INT64_MAX;
	int32_t t42 = 4065637;

	t42 = (x169<=(x170&(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = 6;
	int8_t x176 = INT8_MAX;
	static int32_t t43 = -242206;

	t43 = (x173<=(x174&(x175&x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	static int32_t x179 = INT32_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 3458;

	t44 = (x177<=(x178&(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x183 = UINT8_MAX;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 93401891;

	t45 = (x181<=(x182&(x183&x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile uint32_t x187 = 209369U;
	static uint16_t x188 = UINT16_MAX;
	int32_t t46 = 97237;

	t46 = (x185<=(x186&(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MAX;
	int64_t x191 = 84753307526LL;
	static volatile int32_t t47 = 140012;

	t47 = (x189<=(x190&(x191&x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	static int32_t x194 = INT32_MIN;
	static uint64_t x195 = UINT64_MAX;
	static int32_t t48 = 2055303;

	t48 = (x193<=(x194&(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = -1;
	static volatile int16_t x200 = INT16_MIN;
	int32_t t49 = -2;

	t49 = (x197<=(x198&(x199&x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -89748;
	int64_t x202 = INT64_MIN;
	volatile int64_t x203 = INT64_MIN;
	static uint32_t x204 = 33U;
	static volatile int32_t t50 = 3;

	t50 = (x201<=(x202&(x203&x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 977528LLU;
	int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 1806;

	t51 = (x205<=(x206&(x207&x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MAX;
	int8_t x211 = 1;
	static int8_t x212 = INT8_MAX;
	int32_t t52 = 17726;

	t52 = (x209<=(x210&(x211&x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MAX;
	int32_t x214 = -6170187;
	uint32_t x215 = UINT32_MAX;
	volatile int32_t t53 = -24838962;

	t53 = (x213<=(x214&(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;

	t54 = (x217<=(x218&(x219&x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static int16_t x222 = -1;
	volatile int8_t x223 = INT8_MIN;
	static volatile int32_t t55 = 255;

	t55 = (x221<=(x222&(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = INT32_MIN;
	int32_t t56 = -15602;

	t56 = (x225<=(x226&(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = 1210979651486LLU;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = -960;

	t57 = (x229<=(x230&(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile int64_t x234 = -1LL;
	int32_t x235 = -1;
	uint64_t x236 = UINT64_MAX;
	int32_t t58 = 1;

	t58 = (x233<=(x234&(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MAX;
	int16_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MIN;

	t59 = (x237<=(x238&(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 15466;
	volatile uint64_t x244 = UINT64_MAX;

	t60 = (x241<=(x242&(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -15;
	int64_t x247 = 35584172LL;
	volatile int32_t t61 = -2;

	t61 = (x245<=(x246&(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	uint64_t x250 = 7469LLU;
	volatile int32_t x252 = -62;
	int32_t t62 = -307127;

	t62 = (x249<=(x250&(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = -1;
	int32_t t63 = -13169904;

	t63 = (x253<=(x254&(x255&x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -6682;
	volatile uint16_t x258 = 168U;
	int8_t x259 = 28;
	static int8_t x260 = -1;

	t64 = (x257<=(x258&(x259&x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 15U;
	int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MAX;
	volatile int32_t t65 = 17066;

	t65 = (x261<=(x262&(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int8_t x266 = -1;
	static uint8_t x267 = UINT8_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -248;

	t66 = (x265<=(x266&(x267&x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 13627LLU;
	int32_t x270 = INT32_MAX;
	volatile uint64_t x271 = 771072366079LLU;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t67 = -746309195;

	t67 = (x269<=(x270&(x271&x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = -1LL;
	int64_t x275 = -1LL;
	volatile uint32_t x276 = 4306U;
	volatile int32_t t68 = 359389;

	t68 = (x273<=(x274&(x275&x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	volatile uint16_t x278 = 16U;
	volatile uint32_t x280 = UINT32_MAX;

	t69 = (x277<=(x278&(x279&x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	static int32_t t70 = -1663;

	t70 = (x281<=(x282&(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	uint8_t x286 = 38U;
	int64_t x287 = -1LL;
	uint8_t x288 = 20U;
	int32_t t71 = -674;

	t71 = (x285<=(x286&(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MAX;
	volatile int64_t x291 = -14109452548LL;
	int16_t x292 = 2;
	volatile int32_t t72 = 12;

	t72 = (x289<=(x290&(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	static int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 1251758;

	t73 = (x293<=(x294&(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = UINT8_MAX;
	static volatile int64_t x298 = 109LL;
	int16_t x299 = -1;
	int32_t x300 = INT32_MIN;
	static int32_t t74 = -19982;

	t74 = (x297<=(x298&(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 2045U;
	volatile int16_t x302 = -2;
	int16_t x303 = INT16_MIN;

	t75 = (x301<=(x302&(x303&x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 56LLU;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = INT32_MIN;
	int32_t t76 = 565;

	t76 = (x305<=(x306&(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x310 = 57U;
	int32_t x311 = INT32_MIN;
	volatile uint64_t x312 = 281128075LLU;
	volatile int32_t t77 = 2025;

	t77 = (x309<=(x310&(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 331370783647LLU;
	static volatile int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = INT8_MIN;
	static volatile int32_t t78 = 74964823;

	t78 = (x313<=(x314&(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 20;
	int8_t x318 = 0;
	int8_t x319 = -33;
	volatile int32_t x320 = -1;

	t79 = (x317<=(x318&(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 74552U;
	int8_t x323 = INT8_MIN;
	int8_t x324 = 11;
	int32_t t80 = 0;

	t80 = (x321<=(x322&(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -1;
	static int32_t x326 = INT32_MAX;
	int32_t x328 = INT32_MAX;
	int32_t t81 = -460;

	t81 = (x325<=(x326&(x327&x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = 544360673252LLU;
	volatile int32_t t82 = 109977;

	t82 = (x329<=(x330&(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = 2;
	int8_t x335 = -1;
	static int32_t x336 = INT32_MAX;
	volatile int32_t t83 = 107512131;

	t83 = (x333<=(x334&(x335&x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 108U;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = UINT32_MAX;
	uint16_t x340 = 647U;

	t84 = (x337<=(x338&(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = 876;
	static volatile int32_t t85 = -1379;

	t85 = (x341<=(x342&(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	static uint64_t x347 = 19988LLU;
	volatile int16_t x348 = 0;
	static volatile int32_t t86 = 7;

	t86 = (x345<=(x346&(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	volatile uint8_t x350 = 24U;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;

	t87 = (x349<=(x350&(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x354 = INT16_MIN;
	static int64_t x355 = -5389613425727405LL;
	int32_t x356 = INT32_MIN;

	t88 = (x353<=(x354&(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	static int8_t x358 = 29;
	volatile uint32_t x359 = 581662457U;
	int16_t x360 = -1;
	static volatile int32_t t89 = 8806771;

	t89 = (x357<=(x358&(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	static uint16_t x363 = 38U;
	uint16_t x364 = 20182U;
	volatile int32_t t90 = 399;

	t90 = (x361<=(x362&(x363&x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MAX;
	uint16_t x367 = 1926U;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = -178493448;

	t91 = (x365<=(x366&(x367&x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	volatile int8_t x371 = 1;
	int32_t t92 = -638547452;

	t92 = (x369<=(x370&(x371&x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int8_t x374 = -1;
	uint64_t x375 = 25724971528259LLU;
	volatile int8_t x376 = 22;
	volatile int32_t t93 = -459;

	t93 = (x373<=(x374&(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	static int32_t x378 = -13;
	volatile uint8_t x379 = 67U;
	int16_t x380 = -19;
	volatile int32_t t94 = 33495691;

	t94 = (x377<=(x378&(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	volatile int8_t x382 = INT8_MAX;
	int64_t x383 = 1966479193546527477LL;
	static int64_t x384 = -1LL;
	volatile int32_t t95 = -3322;

	t95 = (x381<=(x382&(x383&x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1926944LL;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MAX;

	t96 = (x385<=(x386&(x387&x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 112229LLU;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	int32_t t97 = 52068406;

	t97 = (x389<=(x390&(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x395 = INT8_MAX;
	int16_t x396 = INT16_MAX;
	int32_t t98 = 516428;

	t98 = (x393<=(x394&(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	volatile int16_t x399 = INT16_MAX;
	static int64_t x400 = INT64_MIN;
	static int32_t t99 = -24;

	t99 = (x397<=(x398&(x399&x400)));

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

