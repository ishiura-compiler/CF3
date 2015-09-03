#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -6;
volatile uint32_t t0 = 2399U;
uint16_t x27 = UINT16_MAX;
int8_t x28 = 1;
int16_t x30 = -1;
uint64_t x33 = UINT64_MAX;
int64_t x46 = INT64_MAX;
uint64_t x49 = 340623LLU;
volatile int32_t x54 = INT32_MIN;
int64_t x59 = INT64_MIN;
volatile uint16_t x63 = UINT16_MAX;
int32_t x73 = 6515;
static volatile int64_t x75 = INT64_MAX;
uint16_t x76 = UINT16_MAX;
static uint32_t x90 = UINT32_MAX;
volatile int64_t x93 = -508078360568197715LL;
int64_t x101 = -191378185123LL;
volatile int8_t x103 = INT8_MAX;
uint64_t t20 = 5928428708372886740LLU;
uint64_t x112 = 41634819LLU;
int64_t x118 = 47382089277LL;
int64_t x120 = 7469LL;
int64_t t24 = -952499196LL;
int8_t x122 = INT8_MIN;
volatile uint32_t x124 = 7278305U;
int16_t x129 = -1;
uint32_t x132 = 27989U;
uint64_t x136 = 94LLU;
static volatile uint64_t t27 = 11911LLU;
int64_t x146 = -1LL;
volatile int8_t x149 = INT8_MIN;
volatile int32_t t30 = -103820;
uint8_t x153 = UINT8_MAX;
static volatile uint8_t x154 = 2U;
static int32_t x161 = INT32_MAX;
volatile int64_t t33 = -639788020258299288LL;
int8_t x174 = 51;
uint32_t x175 = 412737261U;
static volatile int32_t x184 = INT32_MIN;
uint32_t x185 = 54U;
uint32_t x187 = UINT32_MAX;
uint64_t x188 = 118783713109361500LLU;
int64_t x194 = -1LL;
int64_t x201 = 3252067316651LL;
volatile int64_t t42 = -10560LL;
int16_t x206 = INT16_MIN;
int64_t x210 = -892645LL;
int32_t x217 = -1;
int8_t x228 = INT8_MIN;
uint32_t x232 = 563U;
int64_t x235 = 124500593LL;
int32_t x236 = 1245679;
volatile uint64_t t49 = 13846LLU;
int8_t x253 = INT8_MIN;
int8_t x256 = -1;
int64_t x260 = INT64_MIN;
int32_t x272 = 8893;
volatile int32_t t56 = -112;
uint32_t x273 = 29U;
int16_t x277 = INT16_MIN;
int16_t x280 = INT16_MIN;
uint32_t t58 = 16U;
volatile int64_t x282 = -387169556LL;
int8_t x289 = -1;
volatile int8_t x290 = -12;
static volatile int32_t t62 = -347991912;
uint8_t x309 = 14U;
int16_t x311 = INT16_MIN;
uint32_t x318 = 72444881U;
volatile int32_t x322 = -137391958;
volatile uint64_t x327 = 312LLU;
uint64_t x329 = 7157821507LLU;
static uint64_t x332 = 26169998370282126LLU;
uint16_t x334 = 73U;
uint64_t x335 = 211137384334081261LLU;
int64_t x351 = 5053500559978LL;
volatile uint64_t t73 = 69337LLU;
uint32_t x362 = 125939398U;
int8_t x369 = INT8_MAX;
volatile int16_t x374 = INT16_MIN;
static uint32_t x375 = 61973U;
static volatile uint32_t t76 = 371062432U;
volatile int8_t x379 = INT8_MIN;
volatile uint64_t t77 = 529819976837404419LLU;
int16_t x382 = 6934;
uint8_t x384 = 76U;
uint32_t t78 = 13189U;
volatile uint8_t x389 = 8U;
int64_t x400 = 0LL;
volatile uint8_t x404 = 0U;
static int64_t x415 = -208LL;
volatile int32_t t83 = 11;
uint16_t x427 = 58U;
volatile int64_t t85 = -1295LL;
volatile uint8_t x430 = UINT8_MAX;
static uint32_t x441 = 21U;
uint16_t x442 = 25U;
volatile int16_t x451 = -426;
static int8_t x459 = -1;
int8_t x461 = INT8_MAX;
uint32_t x465 = 84U;
int64_t x475 = -1LL;
int64_t t96 = -301470001LL;
static volatile int16_t x484 = -1;
int64_t t97 = -532969198LL;
uint16_t x492 = UINT16_MAX;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	volatile uint16_t x3 = 950U;
	int16_t x4 = INT16_MAX;

	t0 = (x1&((x2|x3)*x4));

	if (t0 != 4294934528U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MAX;
	volatile int8_t x6 = INT8_MIN;
	int32_t x7 = -1;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 1468;

	t1 = (x5&((x6|x7)*x8));

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = 3;
	int16_t x11 = INT16_MIN;
	static int16_t x12 = -2;
	volatile int32_t t2 = 1287;

	t2 = (x9&((x10|x11)*x12));

	if (t2 != 65408) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 7644U;
	static volatile uint32_t x18 = 2382U;
	int8_t x19 = -44;
	int8_t x20 = INT8_MAX;
	volatile uint32_t t3 = 159U;

	t3 = (x17&((x18|x19)*x20));

	if (t3 != 3328U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 14LLU;
	uint64_t x26 = 168LLU;
	volatile uint64_t t4 = 75058157698LLU;

	t4 = (x25&((x26|x27)*x28));

	if (t4 != 14LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MAX;
	uint16_t x31 = UINT16_MAX;
	static int8_t x32 = INT8_MIN;
	volatile int32_t t5 = -583600;

	t5 = (x29&((x30|x31)*x32));

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x34 = 169279923U;
	volatile int64_t x35 = 7308LL;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t6 = 1LLU;

	t6 = (x33&((x34|x35)*x36));

	if (t6 != 18083202788199759872LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 13U;
	static int64_t x42 = INT64_MIN;
	int32_t x43 = -1;
	static uint8_t x44 = 113U;
	volatile int64_t t7 = -483440592LL;

	t7 = (x41&((x42|x43)*x44));

	if (t7 != 13LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -1;
	static int8_t x47 = -1;
	int8_t x48 = -1;
	volatile int64_t t8 = -2129837420892388024LL;

	t8 = (x45&((x46|x47)*x48));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x50 = UINT64_MAX;
	volatile int8_t x51 = 6;
	volatile int8_t x52 = INT8_MAX;
	uint64_t t9 = 87874LLU;

	t9 = (x49&((x50|x51)*x52));

	if (t9 != 340609LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = 17;
	static int64_t x55 = -3528LL;
	uint8_t x56 = 5U;
	volatile int64_t t10 = -4831LL;

	t10 = (x53&((x54|x55)*x56));

	if (t10 != 16LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MIN;
	int64_t x58 = INT64_MAX;
	int64_t x60 = INT64_MAX;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x57&((x58|x59)*x60));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	int16_t x62 = -6;
	volatile int16_t x64 = -1;
	static volatile int32_t t12 = 40131588;

	t12 = (x61&((x62|x63)*x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -45206328LL;
	int16_t x66 = 2;
	uint32_t x67 = UINT32_MAX;
	uint32_t x68 = 878872532U;
	volatile int64_t t13 = 864904882LL;

	t13 = (x65&((x66|x67)*x68));

	if (t13 != 3373019144LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x74 = -1;
	volatile int64_t t14 = 1LL;

	t14 = (x73&((x74|x75)*x76));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 2U;
	int16_t x78 = 1185;
	int32_t x79 = 7378;
	static uint64_t x80 = 6546401161LLU;
	uint64_t t15 = 754545726574353085LLU;

	t15 = (x77&((x78|x79)*x80));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int32_t x86 = -1;
	int16_t x87 = -2633;
	volatile int16_t x88 = INT16_MAX;
	volatile uint32_t t16 = 911992U;

	t16 = (x85&((x86|x87)*x88));

	if (t16 != 4294934529U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	static volatile uint64_t x91 = 77637LLU;
	int32_t x92 = INT32_MAX;
	uint64_t t17 = 165410155LLU;

	t17 = (x89&((x90|x91)*x92));

	if (t17 != 9223372030412324864LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x94 = UINT64_MAX;
	uint16_t x95 = 2U;
	int32_t x96 = -6114781;
	static uint64_t t18 = 361216627139749452LLU;

	t18 = (x93&((x94|x95)*x96));

	if (t18 != 4525453LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 6535LLU;
	uint16_t x98 = 11U;
	volatile int16_t x99 = INT16_MIN;
	uint16_t x100 = 205U;
	static volatile uint64_t t19 = 752072191LLU;

	t19 = (x97&((x98|x99)*x100));

	if (t19 != 2183LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x102 = 1LLU;
	uint8_t x104 = 1U;

	t20 = (x101&((x102|x103)*x104));

	if (t20 != 93LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x105 = INT32_MAX;
	static int8_t x106 = 0;
	static int32_t x107 = -8180424;
	uint64_t x108 = 27760510LLU;
	volatile uint64_t t21 = 38262414166LLU;

	t21 = (x105&((x106|x107)*x108));

	if (t21 != 1506036112LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MAX;
	int16_t x110 = -1;
	int16_t x111 = -1;
	volatile uint64_t t22 = 30077LLU;

	t22 = (x109&((x110|x111)*x112));

	if (t22 != 13309LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = UINT8_MAX;
	uint32_t x114 = 1046278925U;
	static volatile int64_t x115 = -1LL;
	uint16_t x116 = UINT16_MAX;
	int64_t t23 = 98325088LL;

	t23 = (x113&((x114|x115)*x116));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MAX;
	int64_t x119 = -1LL;

	t24 = (x117&((x118|x119)*x120));

	if (t24 != 9223372036854768339LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = -1;
	int32_t x123 = 190727;
	static uint32_t t25 = 1847U;

	t25 = (x121&((x122|x123)*x124));

	if (t25 != 3414292391U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x130 = 14551805U;
	static int16_t x131 = INT16_MIN;
	volatile uint32_t t26 = 7U;

	t26 = (x129&((x130|x131)*x132));

	if (t26 != 3456556801U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = 23044387971668045LL;
	int16_t x134 = -1246;
	uint64_t x135 = 1599262LLU;

	t27 = (x133&((x134|x135)*x136));

	if (t27 != 23044387971668036LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int8_t x138 = INT8_MIN;
	int8_t x139 = 1;
	int8_t x140 = -1;
	volatile uint64_t t28 = 4477LLU;

	t28 = (x137&((x138|x139)*x140));

	if (t28 != 127LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MAX;
	volatile int32_t x147 = -59326281;
	uint64_t x148 = 78745987LLU;
	volatile uint64_t t29 = 2683327198LLU;

	t29 = (x145&((x146|x147)*x148));

	if (t29 != 125LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x150 = INT16_MIN;
	volatile int8_t x151 = 3;
	uint8_t x152 = UINT8_MAX;

	t30 = (x149&((x150|x151)*x152));

	if (t30 != -8355200) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x155 = INT8_MIN;
	uint64_t x156 = 55136267495LLU;
	uint64_t t31 = 220251505819533103LLU;

	t31 = (x153&((x154|x155)*x156));

	if (t31 != 78LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MAX;
	volatile int16_t x160 = -1;
	int64_t t32 = 199686829982856LL;

	t32 = (x157&((x158|x159)*x160));

	if (t32 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x162 = UINT32_MAX;
	uint32_t x163 = UINT32_MAX;
	int64_t x164 = -1LL;

	t33 = (x161&((x162|x163)*x164));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x165 = 0U;
	static int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 1613677893U;
	int64_t t34 = 581755480LL;

	t34 = (x165&((x166|x167)*x168));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = -3661;
	uint64_t x176 = UINT64_MAX;
	uint64_t t35 = 0LLU;

	t35 = (x173&((x174|x175)*x176));

	if (t35 != 18446744073296814337LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MIN;
	volatile int16_t x178 = -3442;
	volatile int8_t x179 = INT8_MIN;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t36 = -96;

	t36 = (x177&((x178|x179)*x180));

	if (t36 != 3735552) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x181 = UINT16_MAX;
	static int32_t x182 = -1038919;
	int64_t x183 = -27741LL;
	volatile int64_t t37 = -8881091979867079LL;

	t37 = (x181&((x182|x183)*x184));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x186 = 2194U;
	static volatile uint64_t t38 = 49734918400LLU;

	t38 = (x185&((x186|x187)*x188));

	if (t38 != 36LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MAX;
	int64_t x190 = 1106531718382340LL;
	int16_t x191 = INT16_MAX;
	int32_t x192 = -1;
	int64_t t39 = -3103821202LL;

	t39 = (x189&((x190|x191)*x192));

	if (t39 != 9222265505136377857LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x193 = -4411124328134995452LL;
	int64_t x195 = -1LL;
	volatile uint16_t x196 = 146U;
	int64_t t40 = 538961LL;

	t40 = (x193&((x194|x195)*x196));

	if (t40 != -4411124328134995452LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x197 = INT16_MIN;
	uint16_t x198 = 21U;
	static int8_t x199 = -1;
	static int32_t x200 = INT32_MAX;
	int32_t t41 = INT32_MIN;

	t41 = (x197&((x198|x199)*x200));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x202 = -13;
	uint16_t x203 = 221U;
	static int32_t x204 = -2339;

	t42 = (x201&((x202|x203)*x204));

	if (t42 != 291LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MAX;
	uint64_t x207 = 5LLU;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t43 = 25637LLU;

	t43 = (x205&((x206|x207)*x208));

	if (t43 != 9223372036850614907LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x209 = 976277465734886LL;
	int32_t x211 = -1;
	int32_t x212 = -1;
	int64_t t44 = 5181LL;

	t44 = (x209&((x210|x211)*x212));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x218 = UINT64_MAX;
	uint32_t x219 = 861U;
	int8_t x220 = 0;
	volatile uint64_t t45 = 93504061448LLU;

	t45 = (x217&((x218|x219)*x220));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = -28306949;
	int8_t x226 = -1;
	int64_t x227 = -1LL;
	volatile int64_t t46 = 51LL;

	t46 = (x225&((x226|x227)*x228));

	if (t46 != 128LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = 46U;
	static int32_t x230 = -1;
	uint32_t x231 = 3276U;
	volatile uint32_t t47 = 88343355U;

	t47 = (x229&((x230|x231)*x232));

	if (t47 != 12U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	static volatile int64_t t48 = INT64_MIN;

	t48 = (x233&((x234|x235)*x236));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = 126U;
	int64_t x238 = INT64_MIN;
	static uint64_t x239 = 80006220219117699LLU;
	int64_t x240 = 1558488484LL;

	t49 = (x237&((x238|x239)*x240));

	if (t49 != 108LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = INT64_MIN;
	int64_t x246 = -1LL;
	uint8_t x247 = 10U;
	static int8_t x248 = INT8_MIN;
	volatile int64_t t50 = -3140638795LL;

	t50 = (x245&((x246|x247)*x248));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = 11324679LL;
	uint16_t x250 = 527U;
	uint64_t x251 = 331062980221150640LLU;
	int8_t x252 = INT8_MAX;
	static volatile uint64_t t51 = 22478LLU;

	t51 = (x249&((x250|x251)*x252));

	if (t51 != 2393345LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x254 = INT64_MIN;
	int64_t x255 = 2327866321797161LL;
	volatile int64_t t52 = 1527LL;

	t52 = (x253&((x254|x255)*x256));

	if (t52 != 9221044170532978560LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x257 = 26U;
	uint64_t x258 = 17107088617114LLU;
	volatile uint16_t x259 = 251U;
	static uint64_t t53 = 41655072049LLU;

	t53 = (x257&((x258|x259)*x260));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x261 = 73U;
	uint8_t x262 = UINT8_MAX;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = -75880;
	volatile int32_t t54 = -4;

	t54 = (x261&((x262|x263)*x264));

	if (t54 != 72) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = 353009610LLU;
	volatile int64_t x266 = INT64_MAX;
	volatile int32_t x267 = -15;
	uint32_t x268 = 421U;
	static volatile uint64_t t55 = 300653328169849LLU;

	t55 = (x265&((x266|x267)*x268));

	if (t55 != 353009226LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;

	t56 = (x269&((x270|x271)*x272));

	if (t56 != -1138304) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x274 = UINT8_MAX;
	int32_t x275 = -1;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t57 = 1993U;

	t57 = (x273&((x274|x275)*x276));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x278 = 0;
	static uint32_t x279 = UINT32_MAX;

	t58 = (x277&((x278|x279)*x280));

	if (t58 != 32768U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -3126350;
	static int64_t t59 = 288491059LL;

	t59 = (x281&((x282|x283)*x284));

	if (t59 != 44056LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x291 = 396266977526LLU;
	uint16_t x292 = UINT16_MAX;
	uint64_t t60 = 37LLU;

	t60 = (x289&((x290|x291)*x292));

	if (t60 != 18446744073708896266LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x293 = -108910LL;
	int16_t x294 = INT16_MIN;
	int8_t x295 = 0;
	volatile uint32_t x296 = 422333889U;
	volatile int64_t t61 = 24LL;

	t61 = (x293&((x294|x295)*x296));

	if (t61 != 3642621952LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = 3;
	volatile int32_t x303 = 533;
	int32_t x304 = -1;

	t62 = (x301&((x302|x303)*x304));

	if (t62 != 233) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x305 = INT32_MAX;
	int8_t x306 = -1;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = -1;
	volatile int32_t t63 = -147;

	t63 = (x305&((x306|x307)*x308));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x310 = UINT16_MAX;
	uint64_t x312 = 1809773107145177318LLU;
	static volatile uint64_t t64 = 2670843813LLU;

	t64 = (x309&((x310|x311)*x312));

	if (t64 != 10LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	static uint32_t x315 = UINT32_MAX;
	static volatile uint32_t x316 = UINT32_MAX;
	uint32_t t65 = 923615402U;

	t65 = (x313&((x314|x315)*x316));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = INT64_MIN;
	static uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	int64_t t66 = 561414313858024223LL;

	t66 = (x317&((x318|x319)*x320));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = 37179972;
	int32_t x323 = -826;
	uint32_t x324 = 16068709U;
	static volatile uint32_t t67 = 64833696U;

	t67 = (x321&((x322|x323)*x324));

	if (t67 != 36782148U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x325 = UINT32_MAX;
	uint16_t x326 = UINT16_MAX;
	int32_t x328 = 222742;
	uint64_t t68 = 369500771712185LLU;

	t68 = (x325&((x326|x327)*x328));

	if (t68 != 1712495082LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x330 = 2998099;
	int16_t x331 = INT16_MIN;
	static uint64_t t69 = 202213949198622LLU;

	t69 = (x329&((x330|x331)*x332));

	if (t69 != 2860548098LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x333 = INT8_MAX;
	static int8_t x336 = INT8_MAX;
	volatile uint64_t t70 = 102785012124LLU;

	t70 = (x333&((x334|x335)*x336));

	if (t70 != 19LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = -1;
	uint8_t x343 = 14U;
	static int32_t x344 = 13488;
	static volatile int64_t t71 = INT64_MIN;

	t71 = (x341&((x342|x343)*x344));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x345 = 3297;
	int16_t x346 = 3;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MAX;
	int32_t t72 = 194035869;

	t72 = (x345&((x346|x347)*x348));

	if (t72 != 3201) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x349 = -1;
	volatile uint64_t x350 = 14512570LLU;
	int16_t x352 = -1;

	t73 = (x349&((x350|x351)*x352));

	if (t73 != 18446739020196121606LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x361 = 2;
	int8_t x363 = -3;
	int8_t x364 = INT8_MIN;
	uint32_t t74 = 223U;

	t74 = (x361&((x362|x363)*x364));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x370 = 26419324562LLU;
	volatile int32_t x371 = 914982;
	int32_t x372 = INT32_MIN;
	static volatile uint64_t t75 = 9315077LLU;

	t75 = (x369&((x370|x371)*x372));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x373 = INT8_MIN;
	volatile uint16_t x376 = UINT16_MAX;

	t76 = (x373&((x374|x375)*x376));

	if (t76 != 4061465984U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x377 = 30992376882LLU;
	uint16_t x378 = 1931U;
	static int16_t x380 = INT16_MIN;

	t77 = (x377&((x378|x379)*x380));

	if (t77 != 655360LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x381 = 1030U;
	uint32_t x383 = 64357U;

	t78 = (x381&((x382|x383)*x384));

	if (t78 != 1028U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x390 = -1;
	uint64_t x391 = 33909919631479LLU;
	static int64_t x392 = INT64_MAX;
	uint64_t t79 = 526866689LLU;

	t79 = (x389&((x390|x391)*x392));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x397 = 12U;
	int32_t x398 = INT32_MIN;
	volatile int16_t x399 = -1;
	volatile int64_t t80 = 3958LL;

	t80 = (x397&((x398|x399)*x400));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x401 = 22318496LLU;
	uint64_t x402 = 177866867LLU;
	static int64_t x403 = -33LL;
	uint64_t t81 = 6590620109LLU;

	t81 = (x401&((x402|x403)*x404));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x413 = -169;
	static uint8_t x414 = UINT8_MAX;
	static int8_t x416 = 1;
	volatile int64_t t82 = 182322693558222507LL;

	t82 = (x413&((x414|x415)*x416));

	if (t82 != -169LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x417 = -1;
	int32_t x418 = INT32_MAX;
	volatile uint8_t x419 = 9U;
	int8_t x420 = -1;

	t83 = (x417&((x418|x419)*x420));

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x421 = 13U;
	uint64_t x422 = 931835971921LLU;
	volatile int16_t x423 = -1;
	uint16_t x424 = 1151U;
	volatile uint64_t t84 = 1178445613277LLU;

	t84 = (x421&((x422|x423)*x424));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x425 = INT64_MAX;
	int8_t x426 = INT8_MIN;
	int16_t x428 = INT16_MAX;

	t85 = (x425&((x426|x427)*x428));

	if (t85 != 9223372036852482118LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x429 = 222U;
	volatile int16_t x431 = INT16_MIN;
	uint32_t x432 = 172U;
	uint32_t t86 = 929U;

	t86 = (x429&((x430|x431)*x432));

	if (t86 != 84U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x433 = -1;
	int8_t x434 = INT8_MAX;
	int32_t x435 = INT32_MIN;
	uint64_t x436 = 672482973899112385LLU;
	uint64_t t87 = 136945208LLU;

	t87 = (x433&((x434|x435)*x436));

	if (t87 != 14761698143684698303LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x443 = INT16_MAX;
	volatile uint16_t x444 = UINT16_MAX;
	uint32_t t88 = 7U;

	t88 = (x441&((x442|x443)*x444));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x445 = UINT32_MAX;
	volatile int64_t x446 = 1891706LL;
	volatile uint32_t x447 = UINT32_MAX;
	volatile int8_t x448 = 15;
	static int64_t t89 = 1244776889711LL;

	t89 = (x445&((x446|x447)*x448));

	if (t89 != 4294967281LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x449 = 314795U;
	int32_t x450 = -1;
	uint32_t x452 = 752192U;
	uint32_t t90 = 402465U;

	t90 = (x449&((x450|x451)*x452));

	if (t90 != 296320U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x453 = -1LL;
	int16_t x454 = INT16_MIN;
	uint64_t x455 = 538249071146180267LLU;
	int64_t x456 = -25968201688873974LL;
	uint64_t t91 = 1LLU;

	t91 = (x453&((x454|x455)*x456));

	if (t91 != 1413638901838503598LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x457 = -1;
	int16_t x458 = INT16_MAX;
	volatile int16_t x460 = -12476;
	volatile int32_t t92 = 45823286;

	t92 = (x457&((x458|x459)*x460));

	if (t92 != 12476) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x462 = 99063830U;
	int32_t x463 = INT32_MIN;
	int32_t x464 = 1;
	volatile uint32_t t93 = 4543U;

	t93 = (x461&((x462|x463)*x464));

	if (t93 != 22U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x466 = INT64_MIN;
	static int64_t x467 = -1LL;
	static uint16_t x468 = UINT16_MAX;
	volatile int64_t t94 = 185688063816982610LL;

	t94 = (x465&((x466|x467)*x468));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x469 = -1LL;
	int32_t x470 = 6734005;
	volatile int32_t x471 = -1;
	int8_t x472 = -1;
	int64_t t95 = -7207687952424LL;

	t95 = (x469&((x470|x471)*x472));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x473 = 44754407U;
	int32_t x474 = INT32_MIN;
	int16_t x476 = INT16_MAX;

	t96 = (x473&((x474|x475)*x476));

	if (t96 != 44728321LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x481 = 0;
	int64_t x482 = -685263159726560967LL;
	int8_t x483 = INT8_MAX;

	t97 = (x481&((x482|x483)*x484));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x485 = 1968982741731LLU;
	int8_t x486 = -3;
	volatile uint64_t x487 = 604060681LLU;
	static int32_t x488 = INT32_MIN;
	uint64_t t98 = 2821573567LLU;

	t98 = (x485&((x486|x487)*x488));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x489 = UINT32_MAX;
	static volatile int16_t x490 = -1;
	int32_t x491 = 2758919;
	volatile uint32_t t99 = 5120360U;

	t99 = (x489&((x490|x491)*x492));

	if (t99 != 4294901761U) { NG(); } else { ; }
	
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

