#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MIN;
uint32_t t0 = 22854085U;
int32_t t2 = -147;
volatile uint32_t x14 = UINT32_MAX;
uint8_t x15 = 1U;
int16_t x18 = 135;
uint16_t x22 = 940U;
int16_t x33 = 4;
int32_t t8 = -129;
volatile uint32_t x38 = UINT32_MAX;
int32_t x40 = INT32_MIN;
uint8_t x44 = UINT8_MAX;
static int8_t x54 = 1;
int64_t x56 = -164435876382LL;
int8_t x63 = -1;
uint32_t x65 = 33397251U;
int32_t x80 = INT32_MIN;
static int64_t t18 = -2LL;
volatile int64_t x86 = INT64_MIN;
int16_t x90 = INT16_MIN;
int8_t x91 = -1;
uint64_t x92 = 60162083656290328LLU;
volatile uint64_t t21 = 57LLU;
static uint32_t x106 = 164686536U;
uint64_t x108 = UINT64_MAX;
volatile uint32_t t24 = 7564867U;
int8_t x127 = -59;
int16_t x129 = INT16_MIN;
uint64_t t30 = 796342003769LLU;
int64_t x140 = -1LL;
uint32_t x146 = 16323443U;
static uint8_t x156 = UINT8_MAX;
int64_t x159 = INT64_MAX;
int8_t x162 = INT8_MIN;
int16_t x165 = INT16_MIN;
uint8_t x171 = 40U;
uint64_t x172 = 512LLU;
int8_t x178 = INT8_MIN;
int32_t x183 = -1;
volatile uint32_t t41 = 1870224U;
int64_t t42 = -312406907028478159LL;
int16_t x189 = -1;
volatile uint32_t x194 = 1306191469U;
static uint16_t x195 = UINT16_MAX;
static int16_t x196 = -1;
uint8_t x200 = UINT8_MAX;
static uint32_t x201 = 3U;
static int64_t x203 = INT64_MIN;
static volatile int64_t t46 = -11235687LL;
int32_t x214 = INT32_MIN;
volatile int32_t x215 = INT32_MIN;
static uint64_t x219 = UINT64_MAX;
uint64_t t50 = 90646204341925649LLU;
uint64_t x225 = UINT64_MAX;
volatile int64_t x244 = -94541LL;
int8_t x252 = INT8_MIN;
static uint16_t x257 = UINT16_MAX;
int64_t x264 = INT64_MIN;
int32_t x297 = 2625776;
uint64_t x298 = UINT64_MAX;
static int8_t x307 = -1;
uint64_t x323 = 7774994978413396871LLU;
int16_t x324 = -3;
static uint16_t x325 = 1U;
int8_t x327 = INT8_MIN;
uint8_t x334 = UINT8_MAX;
int16_t x347 = INT16_MAX;
int16_t x349 = -1;
uint16_t x353 = UINT16_MAX;
volatile int32_t x359 = INT32_MIN;
uint32_t x363 = UINT32_MAX;
static uint64_t x370 = 45LLU;
int8_t x378 = 1;
volatile int64_t x379 = INT64_MIN;
int16_t x384 = INT16_MIN;
int64_t x385 = -1LL;
static uint32_t x389 = UINT32_MAX;
static int64_t t82 = -27239225LL;
int64_t x394 = -94LL;
int16_t x395 = INT16_MIN;
int64_t x398 = INT64_MAX;
volatile uint64_t t84 = 53014560LLU;
int16_t x404 = INT16_MAX;
static uint64_t t85 = 11LLU;
int32_t x411 = INT32_MIN;
uint16_t x414 = 1354U;
volatile int32_t x415 = -1;
volatile int64_t x423 = 2738912595774LL;
volatile int64_t t89 = 4731622281655752LL;
static uint8_t x425 = UINT8_MAX;
int16_t x431 = 14;
volatile int64_t t94 = 613709874LL;
volatile int32_t x457 = -430900162;
int8_t x472 = INT8_MIN;
volatile int64_t t99 = 3076385138300LL;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MIN;

	t0 = (((x1-x2)%x3)-x4);

	if (t0 != 2147483649U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 492265;
	uint8_t x6 = 112U;
	volatile uint8_t x7 = UINT8_MAX;
	volatile uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 322LLU;

	t1 = (((x5-x6)%x7)-x8);

	if (t1 != 4LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MAX;
	static int16_t x12 = -1;

	t2 = (((x9-x10)%x11)-x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 6656445LLU;
	int8_t x16 = -1;
	uint64_t t3 = 10LLU;

	t3 = (((x13-x14)%x15)-x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 10U;
	uint64_t x19 = 18198LLU;
	volatile int32_t x20 = -7;
	static uint64_t t4 = 75359096LLU;

	t4 = (((x17-x18)%x19)-x20);

	if (t4 != 2580LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	uint8_t x23 = UINT8_MAX;
	static uint8_t x24 = 0U;
	int32_t t5 = -57613874;

	t5 = (((x21-x22)%x23)-x24);

	if (t5 != -175) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1893624LLU;
	int64_t x26 = 234LL;
	int8_t x27 = INT8_MAX;
	int32_t x28 = INT32_MAX;
	uint64_t t6 = 378977872541294161LLU;

	t6 = (((x25-x26)%x27)-x28);

	if (t6 != 18446744071562068043LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int32_t x30 = -2;
	uint64_t x31 = 61813LLU;
	int32_t x32 = INT32_MIN;
	uint64_t t7 = 2749720866647LLU;

	t7 = (((x29-x30)%x31)-x32);

	if (t7 != 2147483777LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -4;
	static uint8_t x35 = 3U;
	static int32_t x36 = INT32_MAX;

	t8 = (((x33-x34)%x35)-x36);

	if (t8 != -2147483645) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = UINT8_MAX;
	int8_t x39 = INT8_MIN;
	uint32_t t9 = 923112168U;

	t9 = (((x37-x38)%x39)-x40);

	if (t9 != 2147483904U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 2648U;
	int16_t x42 = 1;
	int64_t x43 = INT64_MIN;
	int64_t t10 = 1LL;

	t10 = (((x41-x42)%x43)-x44);

	if (t10 != 2392LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 388;
	int8_t x46 = INT8_MIN;
	static volatile int8_t x47 = INT8_MAX;
	uint16_t x48 = 599U;
	int32_t t11 = -1254;

	t11 = (((x45-x46)%x47)-x48);

	if (t11 != -591) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	uint8_t x51 = 1U;
	static uint32_t x52 = 4858U;
	static volatile uint32_t t12 = 28850U;

	t12 = (((x49-x50)%x51)-x52);

	if (t12 != 4294962438U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	volatile int16_t x55 = INT16_MIN;
	int64_t t13 = -115776LL;

	t13 = (((x53-x54)%x55)-x56);

	if (t13 != 164435876382LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -6;
	uint64_t x58 = 2189122619411733290LLU;
	volatile int8_t x59 = -1;
	uint16_t x60 = 75U;
	uint64_t t14 = 60033453LLU;

	t14 = (((x57-x58)%x59)-x60);

	if (t14 != 16257621454297818245LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int16_t x62 = INT16_MAX;
	int8_t x64 = -6;
	int32_t t15 = 731;

	t15 = (((x61-x62)%x63)-x64);

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = -1;
	static volatile int32_t x67 = INT32_MIN;
	int16_t x68 = 10664;
	volatile uint32_t t16 = 46U;

	t16 = (((x65-x66)%x67)-x68);

	if (t16 != 33386588U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -507908318LL;
	static int32_t x74 = INT32_MIN;
	uint16_t x75 = 70U;
	static volatile int32_t x76 = INT32_MIN;
	volatile int64_t t17 = -28241LL;

	t17 = (((x73-x74)%x75)-x76);

	if (t17 != 2147483698LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = 1U;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;

	t18 = (((x77-x78)%x79)-x80);

	if (t18 != 4294967297LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 18U;
	int16_t x82 = INT16_MIN;
	volatile int64_t x83 = INT64_MIN;
	static int16_t x84 = -1;
	volatile int64_t t19 = 7928775613884900LL;

	t19 = (((x81-x82)%x83)-x84);

	if (t19 != 32787LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	volatile int8_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	volatile int64_t t20 = 6327LL;

	t20 = (((x85-x86)%x87)-x88);

	if (t20 != -65535LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 8844LL;

	t21 = (((x89-x90)%x91)-x92);

	if (t21 != 18386581990053261288LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = -39;
	static volatile uint32_t x94 = 28258U;
	uint8_t x95 = 8U;
	int32_t x96 = INT32_MIN;
	uint32_t t22 = 17U;

	t22 = (((x93-x94)%x95)-x96);

	if (t22 != 2147483655U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = 1426;
	int32_t x107 = 31;
	static volatile uint64_t t23 = 15530732045LLU;

	t23 = (((x105-x106)%x107)-x108);

	if (t23 != 8LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x109 = 2851427U;
	uint16_t x110 = UINT16_MAX;
	volatile int8_t x111 = 8;
	static int16_t x112 = INT16_MAX;

	t24 = (((x109-x110)%x111)-x112);

	if (t24 != 4294934533U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x113 = 59;
	int16_t x114 = -1;
	int64_t x115 = INT64_MIN;
	volatile int32_t x116 = INT32_MIN;
	static volatile int64_t t25 = 30LL;

	t25 = (((x113-x114)%x115)-x116);

	if (t25 != 2147483708LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = -1331;
	static uint8_t x118 = UINT8_MAX;
	uint8_t x119 = UINT8_MAX;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t26 = 201040016U;

	t26 = (((x117-x118)%x119)-x120);

	if (t26 != 4294967241U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 7476U;
	int16_t x122 = INT16_MAX;
	static int8_t x123 = INT8_MAX;
	uint8_t x124 = 1U;
	volatile int32_t t27 = -6;

	t27 = (((x121-x122)%x123)-x124);

	if (t27 != -19) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;
	static uint16_t x126 = UINT16_MAX;
	volatile int32_t x128 = 61;
	volatile uint32_t t28 = 135764U;

	t28 = (((x125-x126)%x127)-x128);

	if (t28 != 4294901699U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = UINT8_MAX;
	volatile int64_t x131 = INT64_MAX;
	uint64_t x132 = 569585437087671136LLU;
	volatile uint64_t t29 = 5723450769LLU;

	t29 = (((x129-x130)%x131)-x132);

	if (t29 != 17877158636621847457LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x133 = 1486892576838476056LLU;
	int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	volatile int8_t x136 = INT8_MIN;

	t30 = (((x133-x134)%x135)-x136);

	if (t30 != 1486892576838476312LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -245223459;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = -1;
	int64_t t31 = -238354139790606LL;

	t31 = (((x137-x138)%x139)-x140);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -1;
	volatile int32_t x142 = INT32_MAX;
	int64_t x143 = -1LL;
	volatile int16_t x144 = INT16_MAX;
	int64_t t32 = -45202435704094LL;

	t32 = (((x141-x142)%x143)-x144);

	if (t32 != -32767LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = 0;
	volatile uint64_t x147 = 2898960484024469795LLU;
	int16_t x148 = INT16_MAX;
	uint64_t t33 = 72885231408261860LLU;

	t33 = (((x145-x146)%x147)-x148);

	if (t33 != 4278611086LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = 1;
	uint8_t x154 = UINT8_MAX;
	volatile int8_t x155 = -1;
	int32_t t34 = -21;

	t34 = (((x153-x154)%x155)-x156);

	if (t34 != -255) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	uint32_t x158 = 3204794U;
	uint8_t x160 = UINT8_MAX;
	int64_t t35 = -12886039990LL;

	t35 = (((x157-x158)%x159)-x160);

	if (t35 != 2144278599LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -1LL;
	static uint16_t x163 = UINT16_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile int64_t t36 = -63447LL;

	t36 = (((x161-x162)%x163)-x164);

	if (t36 != -4294967168LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x166 = 2U;
	static volatile uint32_t x167 = 107U;
	uint32_t x168 = 5U;
	volatile uint32_t t37 = 2435147U;

	t37 = (((x165-x166)%x167)-x168);

	if (t37 != 4294967292U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 1684397674U;
	volatile uint32_t x170 = 1278665U;
	uint64_t t38 = 6LLU;

	t38 = (((x169-x170)%x171)-x172);

	if (t38 != 18446744073709551113LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	volatile int16_t x174 = 40;
	uint32_t x175 = 13U;
	int32_t x176 = -51;
	uint32_t t39 = 149794U;

	t39 = (((x173-x174)%x175)-x176);

	if (t39 != 61U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x177 = 75503U;
	uint16_t x179 = 14U;
	int32_t x180 = INT32_MIN;
	volatile uint32_t t40 = 146560U;

	t40 = (((x177-x178)%x179)-x180);

	if (t40 != 2147483651U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = UINT32_MAX;
	static uint16_t x182 = UINT16_MAX;
	uint16_t x184 = UINT16_MAX;

	t41 = (((x181-x182)%x183)-x184);

	if (t41 != 4294836225U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x185 = -6063618377681LL;
	static int64_t x186 = 1443762678870624862LL;
	int32_t x187 = -196811;
	uint32_t x188 = 395124515U;

	t42 = (((x185-x186)%x187)-x188);

	if (t42 != -395258746LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x190 = 5U;
	static volatile int16_t x191 = INT16_MIN;
	uint8_t x192 = 108U;
	volatile int32_t t43 = -146007;

	t43 = (((x189-x190)%x191)-x192);

	if (t43 != -114) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 5612161LLU;
	volatile uint64_t t44 = 3972LLU;

	t44 = (((x193-x194)%x195)-x196);

	if (t44 != 28304LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x197 = INT32_MIN;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = 1;
	static uint64_t t45 = 3102LLU;

	t45 = (((x197-x198)%x199)-x200);

	if (t45 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x202 = -506;
	volatile int32_t x204 = -1;

	t46 = (((x201-x202)%x203)-x204);

	if (t46 != 510LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x205 = 26927043314709850LLU;
	static volatile uint8_t x206 = UINT8_MAX;
	int16_t x207 = -10;
	int16_t x208 = INT16_MAX;
	static uint64_t t47 = 7487521534LLU;

	t47 = (((x205-x206)%x207)-x208);

	if (t47 != 26927043314676828LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = 254LL;
	int8_t x210 = -1;
	volatile uint8_t x211 = 15U;
	int64_t x212 = -67317454897LL;
	static int64_t t48 = -6189063LL;

	t48 = (((x209-x210)%x211)-x212);

	if (t48 != 67317454897LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x213 = INT32_MIN;
	static uint32_t x216 = 0U;
	uint32_t t49 = 410959154U;

	t49 = (((x213-x214)%x215)-x216);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MAX;
	static int8_t x218 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;

	t50 = (((x217-x218)%x219)-x220);

	if (t50 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x226 = -37;
	volatile int32_t x227 = -428;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t51 = 32737LLU;

	t51 = (((x225-x226)%x227)-x228);

	if (t51 != 9223372036854775844LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = -277LL;
	static uint64_t x231 = 37166031LLU;
	int8_t x232 = INT8_MIN;
	volatile uint64_t t52 = 3785650220213167738LLU;

	t52 = (((x229-x230)%x231)-x232);

	if (t52 != 34521206LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = 78;
	int16_t x234 = 3;
	int16_t x235 = INT16_MAX;
	int16_t x236 = INT16_MIN;
	volatile int32_t t53 = -25088;

	t53 = (((x233-x234)%x235)-x236);

	if (t53 != 32843) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = 3684480847LLU;
	uint64_t t54 = 1522LLU;

	t54 = (((x241-x242)%x243)-x244);

	if (t54 != 127308LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = 10330198828587901LLU;
	int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MAX;
	int32_t x248 = -277;
	uint64_t t55 = 660107257319132LLU;

	t55 = (((x245-x246)%x247)-x248);

	if (t55 != 367LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MIN;
	int8_t x251 = 17;
	static uint64_t t56 = 15LLU;

	t56 = (((x249-x250)%x251)-x252);

	if (t56 != 136LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x258 = 414291678LL;
	int16_t x259 = -63;
	volatile int32_t x260 = -316893;
	volatile int64_t t57 = -120562520LL;

	t57 = (((x257-x258)%x259)-x260);

	if (t57 != 316884LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = -1291;
	int32_t x262 = 676612757;
	int32_t x263 = 1307420;
	volatile int64_t t58 = 3334418697216LL;

	t58 = (((x261-x262)%x263)-x264);

	if (t58 != 9223372036854097900LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x281 = -1;
	static uint32_t x282 = 23U;
	static uint32_t x283 = 243390547U;
	volatile int64_t x284 = 65360346999651LL;
	int64_t t59 = -12066LL;

	t59 = (((x281-x282)%x283)-x284);

	if (t59 != -65360189671678LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = 8568754279LLU;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 4U;
	volatile int32_t x288 = -109;
	static uint64_t t60 = 1491703549958833746LLU;

	t60 = (((x285-x286)%x287)-x288);

	if (t60 != 112LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x289 = 3978U;
	static uint8_t x290 = 1U;
	int64_t x291 = -1LL;
	int8_t x292 = -1;
	static volatile int64_t t61 = 532157LL;

	t61 = (((x289-x290)%x291)-x292);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = 13LL;
	int8_t x295 = INT8_MIN;
	int16_t x296 = 6529;
	int64_t t62 = 75021804525926261LL;

	t62 = (((x293-x294)%x295)-x296);

	if (t62 != -6542LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x299 = 604;
	static int16_t x300 = INT16_MIN;
	volatile uint64_t t63 = 3295134097380LLU;

	t63 = (((x297-x298)%x299)-x300);

	if (t63 != 32957LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x301 = INT16_MAX;
	uint64_t x302 = 5739122781384LLU;
	int64_t x303 = INT64_MAX;
	static uint64_t x304 = 60773294LLU;
	uint64_t t64 = 18LLU;

	t64 = (((x301-x302)%x303)-x304);

	if (t64 != 9223366297671253898LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x305 = 2LLU;
	int16_t x306 = INT16_MIN;
	static volatile uint64_t x308 = 2301362030262490245LLU;
	static volatile uint64_t t65 = 5255LLU;

	t65 = (((x305-x306)%x307)-x308);

	if (t65 != 16145382043447094141LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x317 = INT16_MIN;
	static volatile uint32_t x318 = 7282442U;
	int32_t x319 = 5;
	uint8_t x320 = 92U;
	static volatile uint32_t t66 = 32U;

	t66 = (((x317-x318)%x319)-x320);

	if (t66 != 4294967205U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	uint64_t t67 = 408415725983340749LLU;

	t67 = (((x321-x322)%x323)-x324);

	if (t67 != 2896754116882659574LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x326 = -1;
	int8_t x328 = 0;
	volatile int32_t t68 = 6195;

	t68 = (((x325-x326)%x327)-x328);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x329 = 50U;
	volatile int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MAX;
	static int32_t x332 = 19522;
	volatile int32_t t69 = -3;

	t69 = (((x329-x330)%x331)-x332);

	if (t69 != 13296) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x333 = -58040359139LL;
	uint64_t x335 = 5LLU;
	int8_t x336 = INT8_MIN;
	volatile uint64_t t70 = 961620957164069LLU;

	t70 = (((x333-x334)%x335)-x336);

	if (t70 != 130LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = 4040543535LL;
	int32_t x338 = -1;
	static uint32_t x339 = UINT32_MAX;
	static int64_t x340 = -918894343457436577LL;
	int64_t t71 = -3771030325677651LL;

	t71 = (((x337-x338)%x339)-x340);

	if (t71 != 918894347497980113LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x345 = 3U;
	int32_t x346 = -29021610;
	int64_t x348 = -715402372LL;
	volatile int64_t t72 = 143273975LL;

	t72 = (((x345-x346)%x347)-x348);

	if (t72 != 715425190LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x350 = UINT32_MAX;
	static int8_t x351 = INT8_MAX;
	uint8_t x352 = 15U;
	uint32_t t73 = 561190U;

	t73 = (((x349-x350)%x351)-x352);

	if (t73 != 4294967281U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x354 = -1;
	static uint32_t x355 = 1719834U;
	static uint8_t x356 = UINT8_MAX;
	static uint32_t t74 = 27777U;

	t74 = (((x353-x354)%x355)-x356);

	if (t74 != 65281U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x357 = 5682U;
	int32_t x358 = -1;
	volatile int64_t x360 = -1LL;
	volatile int64_t t75 = 26912070LL;

	t75 = (((x357-x358)%x359)-x360);

	if (t75 != 5684LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x361 = -4;
	int16_t x362 = 6;
	int8_t x364 = INT8_MIN;
	uint32_t t76 = 15986U;

	t76 = (((x361-x362)%x363)-x364);

	if (t76 != 118U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x369 = 861603480LLU;
	int8_t x371 = INT8_MIN;
	static volatile uint32_t x372 = 1388U;
	uint64_t t77 = 6633761740834018LLU;

	t77 = (((x369-x370)%x371)-x372);

	if (t77 != 861602047LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x373 = 5U;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 4U;
	int8_t x376 = -61;
	int32_t t78 = -10;

	t78 = (((x373-x374)%x375)-x376);

	if (t78 != 62) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x377 = -1;
	int16_t x380 = 222;
	volatile int64_t t79 = -717325155667383LL;

	t79 = (((x377-x378)%x379)-x380);

	if (t79 != -224LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x381 = 3U;
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	static volatile int32_t t80 = 7696150;

	t80 = (((x381-x382)%x383)-x384);

	if (t80 != 32771) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x386 = INT64_MIN;
	uint32_t x387 = 5U;
	volatile int16_t x388 = INT16_MIN;
	int64_t t81 = 32533696186LL;

	t81 = (((x385-x386)%x387)-x388);

	if (t81 != 32770LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x390 = -1LL;
	volatile int16_t x391 = -1;
	uint32_t x392 = 127268743U;

	t82 = (((x389-x390)%x391)-x392);

	if (t82 != -127268743LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = INT32_MIN;
	int16_t x396 = 4;
	static volatile int64_t t83 = 10851885LL;

	t83 = (((x393-x394)%x395)-x396);

	if (t83 != -32678LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x397 = 420U;
	static int64_t x399 = 616353383290705LL;
	static uint64_t x400 = 63339315028465257LLU;

	t84 = (((x397-x398)%x399)-x400);

	if (t84 != 18383144749388420592LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x401 = UINT64_MAX;
	uint16_t x402 = UINT16_MAX;
	int16_t x403 = 9;

	t85 = (((x401-x402)%x403)-x404);

	if (t85 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x405 = INT64_MIN;
	volatile int8_t x406 = INT8_MIN;
	volatile int32_t x407 = -1;
	int16_t x408 = 78;
	volatile int64_t t86 = -1LL;

	t86 = (((x405-x406)%x407)-x408);

	if (t86 != -78LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = -2;
	int32_t x410 = INT32_MIN;
	static volatile uint16_t x412 = 12377U;
	static volatile int32_t t87 = 63691;

	t87 = (((x409-x410)%x411)-x412);

	if (t87 != 2147471269) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = 0;
	volatile int64_t x416 = 4184690065047640LL;
	int64_t t88 = 1949LL;

	t88 = (((x413-x414)%x415)-x416);

	if (t88 != -4184690065047640LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x421 = 2U;
	int16_t x422 = -1;
	int8_t x424 = INT8_MIN;

	t89 = (((x421-x422)%x423)-x424);

	if (t89 != 131LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x426 = 5U;
	volatile uint64_t x427 = 7289162211159102146LLU;
	volatile int16_t x428 = -2;
	uint64_t t90 = 128LLU;

	t90 = (((x425-x426)%x427)-x428);

	if (t90 != 252LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x429 = 17;
	static volatile uint16_t x430 = 104U;
	uint16_t x432 = 1680U;
	int32_t t91 = -1;

	t91 = (((x429-x430)%x431)-x432);

	if (t91 != -1683) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = -1;
	volatile int16_t x438 = 0;
	static volatile uint8_t x439 = 1U;
	int32_t x440 = 1838033;
	volatile int32_t t92 = 115;

	t92 = (((x437-x438)%x439)-x440);

	if (t92 != -1838033) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x441 = 2U;
	volatile uint16_t x442 = 994U;
	uint64_t x443 = 2276LLU;
	int8_t x444 = -1;
	uint64_t t93 = 700548027796LLU;

	t93 = (((x441-x442)%x443)-x444);

	if (t93 != 121LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x445 = 2U;
	int64_t x446 = INT64_MAX;
	int64_t x447 = 1509624214LL;
	int32_t x448 = INT32_MAX;

	t94 = (((x445-x446)%x447)-x448);

	if (t94 != -2498005922LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x453 = UINT64_MAX;
	int8_t x454 = INT8_MIN;
	uint32_t x455 = 45214U;
	uint8_t x456 = 0U;
	volatile uint64_t t95 = 1354532660139LLU;

	t95 = (((x453-x454)%x455)-x456);

	if (t95 != 127LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x458 = 846847U;
	uint16_t x459 = 5U;
	uint32_t x460 = 101980921U;
	uint32_t t96 = 218281U;

	t96 = (((x457-x458)%x459)-x460);

	if (t96 != 4192986377U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x461 = 2025U;
	uint32_t x462 = UINT32_MAX;
	volatile int16_t x463 = INT16_MAX;
	int8_t x464 = INT8_MIN;
	volatile uint32_t t97 = 35727U;

	t97 = (((x461-x462)%x463)-x464);

	if (t97 != 2154U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x465 = 2U;
	uint8_t x466 = UINT8_MAX;
	uint8_t x467 = 12U;
	volatile int8_t x468 = INT8_MIN;
	int32_t t98 = -677403;

	t98 = (((x465-x466)%x467)-x468);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MIN;
	static int64_t x471 = 9708515LL;

	t99 = (((x469-x470)%x471)-x472);

	if (t99 != -4589137LL) { NG(); } else { ; }
	
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

