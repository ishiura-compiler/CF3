#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x9 = -1;
uint32_t x10 = UINT32_MAX;
int16_t x12 = -380;
int8_t x17 = INT8_MAX;
volatile int32_t t4 = -2;
static volatile int32_t t7 = 30740162;
uint8_t x36 = UINT8_MAX;
volatile int32_t t8 = 27122;
uint64_t x41 = 29586408032691914LLU;
int16_t x47 = -20;
static uint64_t x48 = 28592108304LLU;
volatile uint8_t x49 = 86U;
static uint32_t x54 = 190004U;
int64_t x55 = -6536368887500026LL;
int64_t x67 = INT64_MIN;
static uint32_t x68 = 1U;
uint16_t x71 = 7U;
static int16_t x72 = INT16_MIN;
volatile uint8_t x75 = 3U;
int8_t x76 = INT8_MIN;
volatile uint32_t x82 = UINT32_MAX;
uint16_t x87 = UINT16_MAX;
volatile uint8_t x95 = UINT8_MAX;
int32_t t23 = -775391;
int16_t x97 = -1;
volatile int8_t x99 = -1;
static int16_t x106 = -1;
uint64_t x114 = 88533914766LLU;
volatile int16_t x121 = -1;
uint32_t x133 = UINT32_MAX;
static int32_t x135 = INT32_MAX;
volatile int64_t x140 = INT64_MIN;
uint32_t x146 = 2567U;
int16_t x147 = -1;
int8_t x154 = INT8_MIN;
int64_t x158 = -1LL;
volatile int32_t x160 = -1;
volatile int32_t t39 = 311168564;
int32_t t41 = 7517;
int8_t x172 = INT8_MAX;
volatile int8_t x187 = 29;
int8_t x194 = INT8_MAX;
uint32_t x195 = 64515U;
volatile int32_t t48 = -8344087;
uint16_t x200 = 31U;
int8_t x201 = -4;
int32_t t50 = 16510284;
int32_t t51 = 22260;
static int16_t x209 = 221;
static volatile int32_t t56 = 5;
static int64_t x229 = INT64_MIN;
static volatile uint8_t x234 = 65U;
int16_t x239 = INT16_MIN;
volatile int32_t t59 = 178;
static uint32_t x247 = 650940U;
int64_t x258 = INT64_MAX;
static volatile int32_t t65 = -775685357;
static uint64_t x269 = 5424LLU;
volatile uint8_t x276 = 0U;
int8_t x284 = INT8_MIN;
uint32_t x285 = 12U;
volatile uint32_t x287 = UINT32_MAX;
int32_t x291 = INT32_MIN;
static volatile int16_t x294 = -1;
static int64_t x308 = INT64_MIN;
int16_t x318 = 106;
volatile int32_t t79 = -47;
static volatile int64_t x321 = 13799237607042245LL;
static int32_t t80 = 28684;
int64_t x326 = 40293849531LL;
int16_t x332 = 7185;
int32_t x345 = INT32_MIN;
int16_t x347 = -13;
uint32_t x350 = 319U;
static int16_t x352 = INT16_MIN;
uint32_t x358 = 11243045U;
int8_t x362 = INT8_MAX;
static int32_t t90 = 184305904;
int8_t x365 = -1;
uint8_t x366 = UINT8_MAX;
volatile uint64_t x372 = 16098LLU;
volatile int32_t t92 = 0;
volatile uint16_t x376 = 1894U;
int64_t x378 = -1LL;
volatile int32_t x387 = -228311676;
int64_t x391 = -31767LL;
static int64_t x394 = -1LL;
static int32_t x399 = -1;
static int16_t x400 = 348;
int32_t t99 = 173;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int64_t x2 = 187LL;
	static int8_t x3 = 51;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -7685767;

	t0 = (x1<((x2|x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	int16_t x6 = INT16_MIN;
	int16_t x7 = 486;
	static int32_t x8 = -19782099;
	volatile int32_t t1 = -81832;

	t1 = (x5<((x6|x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = 0;
	int32_t t2 = 1217;

	t2 = (x9<((x10|x11)<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = 50;

	t3 = (x13<((x14|x15)<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 3U;
	static volatile int64_t x20 = INT64_MIN;

	t4 = (x17<((x18|x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -5331;
	int32_t x22 = 521;
	int16_t x23 = -1;
	uint64_t x24 = 0LLU;
	volatile int32_t t5 = -1;

	t5 = (x21<((x22|x23)<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -12228305087LL;
	volatile int32_t x26 = INT32_MIN;
	static uint32_t x27 = UINT32_MAX;
	int16_t x28 = -60;
	int32_t t6 = -6708;

	t6 = (x25<((x26|x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static int16_t x30 = 987;
	int64_t x31 = 61LL;
	static int32_t x32 = INT32_MIN;

	t7 = (x29<((x30|x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MAX;
	uint32_t x34 = 897487808U;
	int32_t x35 = INT32_MAX;

	t8 = (x33<((x34|x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MAX;
	static volatile int8_t x39 = 0;
	uint16_t x40 = 860U;
	int32_t t9 = 29504391;

	t9 = (x37<((x38|x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	int16_t x44 = 15576;
	int32_t t10 = -17;

	t10 = (x41<((x42|x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -9;
	static int32_t x46 = -391;
	volatile int32_t t11 = 89516;

	t11 = (x45<((x46|x47)<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -133;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -55331818;

	t12 = (x49<((x50|x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = 7617;

	t13 = (x53<((x54|x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int32_t x58 = INT32_MAX;
	volatile uint32_t x59 = 118U;
	int32_t x60 = 13693313;
	volatile int32_t t14 = -34862099;

	t14 = (x57<((x58|x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x62 = UINT8_MAX;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = 7;
	volatile int32_t t15 = 8142416;

	t15 = (x61<((x62|x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	static volatile int32_t t16 = 31583;

	t16 = (x65<((x66|x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = -58;
	static volatile int32_t t17 = -932315;

	t17 = (x69<((x70|x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	int64_t x74 = INT64_MAX;
	volatile int32_t t18 = 10964244;

	t18 = (x73<((x74|x75)<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = 1U;
	int64_t x80 = -1LL;
	static volatile int32_t t19 = 494;

	t19 = (x77<((x78|x79)<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 6;
	volatile int32_t x83 = 17;
	static volatile uint64_t x84 = UINT64_MAX;
	static volatile int32_t t20 = 2799;

	t20 = (x81<((x82|x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int16_t x86 = -1328;
	volatile uint8_t x88 = 29U;
	int32_t t21 = -508732;

	t21 = (x85<((x86|x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 1;

	t22 = (x89<((x90|x91)<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	static int32_t x94 = 8369505;
	int64_t x96 = INT64_MAX;

	t23 = (x93<((x94|x95)<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -6;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 1;

	t24 = (x97<((x98|x99)<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 908411286U;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 51LLU;
	int32_t t25 = -26601011;

	t25 = (x101<((x102|x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 26;
	int64_t x107 = -32598069045218LL;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -299123930;

	t26 = (x105<((x106|x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	uint8_t x110 = 0U;
	static volatile uint8_t x111 = UINT8_MAX;
	static uint16_t x112 = 11274U;
	int32_t t27 = -12;

	t27 = (x109<((x110|x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	static uint16_t x115 = 22U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 204;

	t28 = (x113<((x114|x115)<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	uint64_t x118 = 24LLU;
	int8_t x119 = INT8_MAX;
	uint32_t x120 = 1010606519U;
	volatile int32_t t29 = -3;

	t29 = (x117<((x118|x119)<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	static int8_t x123 = -2;
	volatile int64_t x124 = INT64_MAX;
	static volatile int32_t t30 = -42901;

	t30 = (x121<((x122|x123)<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = 5269U;
	int16_t x127 = INT16_MIN;
	static uint32_t x128 = UINT32_MAX;
	int32_t t31 = -22551;

	t31 = (x125<((x126|x127)<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MAX;
	static int8_t x132 = -1;
	int32_t t32 = 24184;

	t32 = (x129<((x130|x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 3;
	int64_t x136 = -19LL;
	int32_t t33 = 44465470;

	t33 = (x133<((x134|x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MAX;
	uint32_t x138 = 127598005U;
	int16_t x139 = 0;
	static volatile int32_t t34 = 141;

	t34 = (x137<((x138|x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -1;
	uint16_t x142 = 330U;
	static volatile int32_t x143 = -1;
	int16_t x144 = INT16_MAX;
	int32_t t35 = -50;

	t35 = (x141<((x142|x143)<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 7178U;
	int64_t x148 = -1LL;
	int32_t t36 = 5;

	t36 = (x145<((x146|x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = 2;
	static int32_t x150 = -28;
	int64_t x151 = -34466LL;
	static int16_t x152 = INT16_MAX;
	int32_t t37 = 1;

	t37 = (x149<((x150|x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 62LLU;
	static int8_t x155 = 0;
	static uint16_t x156 = UINT16_MAX;
	static int32_t t38 = -157;

	t38 = (x153<((x154|x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 3U;
	uint32_t x159 = 1U;

	t39 = (x157<((x158|x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 650158775584747LL;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = -1;
	volatile int16_t x164 = -1;
	static int32_t t40 = 703939032;

	t40 = (x161<((x162|x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 4225181340662LLU;
	static int8_t x166 = INT8_MAX;
	volatile int32_t x167 = INT32_MAX;
	volatile int8_t x168 = -1;

	t41 = (x165<((x166|x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 0;
	int8_t x170 = 50;
	static int64_t x171 = INT64_MIN;
	volatile int32_t t42 = -8;

	t42 = (x169<((x170|x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = -1;
	volatile int8_t x175 = 0;
	static uint64_t x176 = 387062007314LLU;
	int32_t t43 = -52155;

	t43 = (x173<((x174|x175)<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 1637U;
	int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 63382U;
	int32_t t44 = 1;

	t44 = (x177<((x178|x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	static int32_t x182 = -1;
	int16_t x183 = 87;
	volatile int64_t x184 = -1LL;
	static int32_t t45 = -1;

	t45 = (x181<((x182|x183)<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -10024;
	uint64_t x186 = 79407106LLU;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 7;

	t46 = (x185<((x186|x187)<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -12530;
	int16_t x190 = -313;
	uint8_t x191 = 2U;
	volatile int32_t x192 = INT32_MAX;
	static int32_t t47 = 0;

	t47 = (x189<((x190|x191)<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 2U;
	int32_t x196 = INT32_MIN;

	t48 = (x193<((x194|x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -4304;
	static volatile uint16_t x198 = 7703U;
	uint64_t x199 = 274LLU;
	int32_t t49 = 7854;

	t49 = (x197<((x198|x199)<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -1LL;
	int32_t x203 = 513917542;
	static volatile int8_t x204 = -1;

	t50 = (x201<((x202|x203)<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	int64_t x206 = INT64_MAX;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = -1LL;

	t51 = (x205<((x206|x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x210 = 1U;
	int64_t x211 = INT64_MIN;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 15933;

	t52 = (x209<((x210|x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 30;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -1;
	volatile int32_t x216 = -36961018;
	static volatile int32_t t53 = 13693;

	t53 = (x213<((x214|x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MAX;
	static int64_t x218 = -1LL;
	int64_t x219 = -1LL;
	int64_t x220 = INT64_MAX;
	volatile int32_t t54 = -3;

	t54 = (x217<((x218|x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 110637537U;
	volatile int64_t x222 = INT64_MAX;
	volatile int8_t x223 = 2;
	volatile uint64_t x224 = 46445LLU;
	static volatile int32_t t55 = -795563008;

	t55 = (x221<((x222|x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 0;
	int16_t x226 = -1;
	int64_t x227 = 181715LL;
	volatile uint8_t x228 = 1U;

	t56 = (x225<((x226|x227)<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	volatile int64_t x231 = 12160481935605026LL;
	int8_t x232 = INT8_MAX;
	int32_t t57 = 2669030;

	t57 = (x229<((x230|x231)<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -32368987;
	volatile uint8_t x235 = 6U;
	uint64_t x236 = 309977089310732214LLU;
	volatile int32_t t58 = -1363;

	t58 = (x233<((x234|x235)<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 3765U;
	uint16_t x238 = 7791U;
	int64_t x240 = -1361636LL;

	t59 = (x237<((x238|x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int8_t x242 = 44;
	volatile uint8_t x243 = UINT8_MAX;
	uint32_t x244 = 33246537U;
	volatile int32_t t60 = -511864324;

	t60 = (x241<((x242|x243)<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	static uint64_t x246 = 14194943176585LLU;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = -174;

	t61 = (x245<((x246|x247)<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x250 = UINT32_MAX;
	uint16_t x251 = 816U;
	static uint16_t x252 = UINT16_MAX;
	int32_t t62 = 1;

	t62 = (x249<((x250|x251)<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	uint8_t x254 = 1U;
	volatile int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = 12172188910LL;
	volatile int32_t t63 = 6811;

	t63 = (x253<((x254|x255)<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MAX;
	volatile int32_t x259 = INT32_MIN;
	static int16_t x260 = 6903;
	volatile int32_t t64 = 526727076;

	t64 = (x257<((x258|x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	int8_t x262 = 11;
	volatile int32_t x263 = 1270;
	volatile uint32_t x264 = 1981648574U;

	t65 = (x261<((x262|x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 1U;
	static int8_t x266 = 58;
	int16_t x267 = -1;
	static volatile int8_t x268 = -1;
	static int32_t t66 = -42930;

	t66 = (x265<((x266|x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = -66;

	t67 = (x269<((x270|x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	int32_t t68 = -2685452;

	t68 = (x273<((x274|x275)<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	static volatile int16_t x278 = -11;
	int16_t x279 = -136;
	static int64_t x280 = 94099LL;
	int32_t t69 = -58212;

	t69 = (x277<((x278|x279)<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	int8_t x282 = -17;
	int8_t x283 = -1;
	static int32_t t70 = 1;

	t70 = (x281<((x282|x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	uint32_t x288 = 44652640U;
	int32_t t71 = -377801;

	t71 = (x285<((x286|x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	static int8_t x290 = INT8_MIN;
	int8_t x292 = 11;
	volatile int32_t t72 = -4764;

	t72 = (x289<((x290|x291)<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x295 = 379720660LL;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = -1;

	t73 = (x293<((x294|x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x297 = 22;
	uint16_t x298 = 1896U;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MAX;
	volatile int32_t t74 = 184363749;

	t74 = (x297<((x298|x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 49;
	uint64_t x302 = 13920936247LLU;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -17536520;

	t75 = (x301<((x302|x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -1;
	int8_t x306 = INT8_MAX;
	uint16_t x307 = 5049U;
	int32_t t76 = 196751682;

	t76 = (x305<((x306|x307)<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 16496U;
	int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MIN;
	static uint8_t x312 = 23U;
	int32_t t77 = 13405;

	t77 = (x309<((x310|x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MAX;
	volatile uint64_t x315 = 36337638012061812LLU;
	static int8_t x316 = -1;
	volatile int32_t t78 = -1;

	t78 = (x313<((x314|x315)<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 1U;
	volatile int64_t x319 = INT64_MIN;
	int32_t x320 = -1;

	t79 = (x317<((x318|x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x322 = UINT32_MAX;
	int64_t x323 = -1020LL;
	volatile uint32_t x324 = 0U;

	t80 = (x321<((x322|x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	volatile uint8_t x327 = 2U;
	int64_t x328 = -1LL;
	volatile int32_t t81 = 365030;

	t81 = (x325<((x326|x327)<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x329 = 14886U;
	volatile uint64_t x330 = UINT64_MAX;
	uint16_t x331 = UINT16_MAX;
	int32_t t82 = -4247;

	t82 = (x329<((x330|x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 0U;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MAX;
	static volatile int32_t x336 = -1;
	int32_t t83 = -198627;

	t83 = (x333<((x334|x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int32_t x338 = -1;
	volatile uint8_t x339 = 4U;
	static int8_t x340 = INT8_MAX;
	int32_t t84 = 374285421;

	t84 = (x337<((x338|x339)<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x342 = -1;
	volatile int8_t x343 = -1;
	int32_t x344 = -1;
	volatile int32_t t85 = 0;

	t85 = (x341<((x342|x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 1U;
	uint32_t x348 = 16U;
	static volatile int32_t t86 = 0;

	t86 = (x345<((x346|x347)<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 2552U;
	int8_t x351 = INT8_MIN;
	volatile int32_t t87 = -29;

	t87 = (x349<((x350|x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MAX;
	volatile int16_t x354 = INT16_MIN;
	static int64_t x355 = INT64_MIN;
	int32_t x356 = 0;
	volatile int32_t t88 = -76466;

	t88 = (x353<((x354|x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	static int8_t x360 = 0;
	int32_t t89 = -2652;

	t89 = (x357<((x358|x359)<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	static volatile int32_t x363 = INT32_MIN;
	int64_t x364 = -1LL;

	t90 = (x361<((x362|x363)<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x367 = 107U;
	int64_t x368 = INT64_MAX;
	static int32_t t91 = 23;

	t91 = (x365<((x366|x367)<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 255U;
	uint32_t x370 = 33936U;
	static int16_t x371 = 317;

	t92 = (x369<((x370|x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 23U;
	uint64_t x374 = 6890LLU;
	static int16_t x375 = -1;
	volatile int32_t t93 = 232;

	t93 = (x373<((x374|x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int64_t x379 = INT64_MAX;
	int16_t x380 = 15706;
	static int32_t t94 = -5;

	t94 = (x377<((x378|x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 0U;
	static volatile uint32_t x382 = 2253U;
	int32_t x383 = -4376339;
	int16_t x384 = 27;
	int32_t t95 = -3288393;

	t95 = (x381<((x382|x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 1U;
	volatile int64_t x386 = INT64_MIN;
	uint32_t x388 = 3711U;
	volatile int32_t t96 = 81699595;

	t96 = (x385<((x386|x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x389 = -11;
	uint32_t x390 = UINT32_MAX;
	int64_t x392 = INT64_MIN;
	int32_t t97 = -1;

	t97 = (x389<((x390|x391)<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	volatile int8_t x395 = INT8_MIN;
	static int8_t x396 = INT8_MAX;
	static volatile int32_t t98 = 3471427;

	t98 = (x393<((x394|x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	static uint8_t x398 = UINT8_MAX;

	t99 = (x397<((x398|x399)<x400));

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

