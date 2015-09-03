#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = 12882;
int32_t x17 = -1;
int8_t x20 = -1;
int32_t x21 = 24978;
volatile int16_t x24 = INT16_MIN;
uint32_t x28 = 3603361U;
uint8_t x40 = UINT8_MAX;
static int16_t x43 = INT16_MIN;
volatile int64_t t8 = 154384384189039205LL;
uint64_t x50 = 412525234573LLU;
int32_t x52 = -92318;
uint64_t x66 = 87174094859424LLU;
static uint64_t t12 = 5424155459315LLU;
uint16_t x69 = 27949U;
volatile int32_t t13 = -658;
int8_t x79 = INT8_MAX;
volatile uint64_t t16 = 51784221LLU;
int64_t t19 = 3452LL;
int8_t x112 = INT8_MIN;
int16_t x116 = INT16_MIN;
uint64_t x121 = 555045290410737LLU;
int32_t x122 = INT32_MAX;
uint16_t x124 = 15189U;
volatile int64_t x125 = -1LL;
static int16_t x128 = -5;
int64_t x132 = INT64_MAX;
int64_t x144 = INT64_MAX;
int64_t t26 = -406918LL;
volatile int64_t x146 = INT64_MAX;
uint32_t x147 = 945788977U;
uint16_t x167 = UINT16_MAX;
static volatile int32_t x168 = 3493;
uint16_t x169 = 453U;
uint8_t x174 = 22U;
int64_t t33 = -154629928LL;
int8_t x182 = INT8_MAX;
static uint16_t x184 = 2892U;
int32_t x185 = INT32_MIN;
int16_t x189 = -1;
uint32_t t38 = 12075U;
static volatile uint64_t x204 = UINT64_MAX;
uint16_t x213 = UINT16_MAX;
int64_t t42 = 315857456672338751LL;
static int16_t x230 = -2;
int32_t t45 = -11768068;
static volatile int32_t x243 = -1;
volatile int32_t x245 = 661131;
static int64_t x246 = -14LL;
static int16_t x248 = -1;
int64_t x249 = INT64_MAX;
volatile int32_t x251 = -238716;
static volatile uint64_t t49 = 32641LLU;
uint8_t x259 = 49U;
int32_t x261 = 4095;
static uint16_t x262 = 21237U;
int64_t t53 = -35LL;
volatile uint64_t t54 = 1449314LLU;
int8_t x277 = INT8_MAX;
int32_t x285 = -22;
int32_t x288 = INT32_MIN;
volatile uint64_t t58 = 371427982LLU;
uint64_t x294 = UINT64_MAX;
static int32_t x301 = INT32_MIN;
static int32_t x302 = INT32_MIN;
static uint16_t x305 = 71U;
int8_t x306 = 5;
int16_t x308 = INT16_MAX;
uint64_t x309 = 1LLU;
uint64_t x310 = UINT64_MAX;
int8_t x317 = 1;
uint64_t x320 = UINT64_MAX;
uint64_t t64 = 27837197424LLU;
uint64_t x329 = 54539701969LLU;
volatile int16_t x330 = INT16_MIN;
uint64_t x333 = 1611769255340LLU;
int8_t x335 = -44;
uint32_t x337 = 90915U;
volatile uint64_t t68 = 168633597201LLU;
int32_t x341 = INT32_MIN;
int32_t x359 = INT32_MIN;
static int8_t x360 = -1;
int32_t t72 = -71;
int64_t x364 = INT64_MIN;
uint16_t x366 = UINT16_MAX;
volatile int16_t x383 = 43;
int8_t x387 = -17;
int64_t x390 = INT64_MAX;
uint16_t x391 = 28739U;
volatile int16_t x393 = -2;
volatile int8_t x396 = INT8_MAX;
static volatile uint32_t t81 = 73274U;
volatile int32_t x401 = -1;
volatile int64_t x402 = -5083LL;
int64_t x410 = INT64_MIN;
static volatile int64_t t84 = 85324857134167LL;
int32_t x419 = INT32_MIN;
int32_t x422 = INT32_MAX;
uint32_t x423 = UINT32_MAX;
volatile int64_t x424 = INT64_MIN;
static uint64_t t86 = 184460100085LLU;
static volatile int64_t t87 = -431740382LL;
uint32_t x432 = 60765114U;
int16_t x434 = -41;
int8_t x437 = INT8_MIN;
int16_t x438 = INT16_MIN;
volatile int8_t x455 = INT8_MIN;
volatile int64_t t93 = -63912297298021587LL;
uint64_t x460 = 25430LLU;
int16_t x462 = INT16_MAX;
int8_t x464 = INT8_MIN;
int32_t t95 = -18;
volatile uint64_t x465 = 343416047327202072LLU;
uint64_t t96 = 270333100165460916LLU;
int16_t x472 = INT16_MIN;
volatile int64_t t97 = -40146LL;
uint16_t x478 = 40U;


void f0(void) {
	static volatile uint16_t x1 = 4U;
	uint32_t x2 = 25076121U;
	uint16_t x3 = UINT16_MAX;
	static int64_t x4 = INT64_MIN;
	int64_t t0 = 13742133445293LL;

	t0 = (((x1-x2)%x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -520775799;
	volatile int64_t x7 = -1LL;
	volatile int16_t x8 = INT16_MIN;
	volatile int64_t t1 = -64618773LL;

	t1 = (((x5-x6)%x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -35240291367LL;
	uint16_t x10 = UINT16_MAX;
	static volatile int32_t x11 = 58644;
	int16_t x12 = INT16_MIN;
	volatile int64_t t2 = -9298LL;

	t2 = (((x9-x10)%x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x18 = INT32_MIN;
	int16_t x19 = 346;
	static volatile int32_t t3 = 10;

	t3 = (((x17-x18)%x19)/x20);

	if (t3 != -47) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -20435190688017LL;
	int16_t x23 = INT16_MIN;
	volatile int64_t t4 = -1501310LL;

	t4 = (((x21-x22)%x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static int64_t x27 = INT64_MAX;
	static int64_t t5 = 183768608988694LL;

	t5 = (((x25-x26)%x27)/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t6 = 6U;

	t6 = (((x29-x30)%x31)/x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x37 = INT64_MIN;
	volatile int32_t x38 = -1;
	static int16_t x39 = INT16_MAX;
	volatile int64_t t7 = -7LL;

	t7 = (((x37-x38)%x39)/x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = INT64_MIN;
	int32_t x42 = -1;
	uint8_t x44 = 2U;

	t8 = (((x41-x42)%x43)/x44);

	if (t8 != -16383LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	uint64_t t9 = 2556134374930874LLU;

	t9 = (((x49-x50)%x51)/x52);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MAX;
	uint16_t x54 = 3U;
	uint32_t x55 = UINT32_MAX;
	int32_t x56 = 153;
	volatile uint32_t t10 = 152795U;

	t10 = (((x53-x54)%x55)/x56);

	if (t10 != 14035840U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = 1;
	uint8_t x62 = 3U;
	int8_t x63 = INT8_MIN;
	static int8_t x64 = 7;
	volatile int32_t t11 = 0;

	t11 = (((x61-x62)%x63)/x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 3084U;
	int8_t x67 = -1;
	int8_t x68 = INT8_MIN;

	t12 = (((x65-x66)%x67)/x68);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x70 = -251;
	int16_t x71 = 7397;
	int16_t x72 = -1;

	t13 = (((x69-x70)%x71)/x72);

	if (t13 != -6009) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x77 = -1;
	static int8_t x78 = INT8_MIN;
	volatile int8_t x80 = INT8_MIN;
	static int32_t t14 = -45409;

	t14 = (((x77-x78)%x79)/x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -600;
	volatile uint64_t x82 = 49LLU;
	uint64_t x83 = UINT64_MAX;
	volatile uint32_t x84 = 1494145353U;
	uint64_t t15 = 149LLU;

	t15 = (((x81-x82)%x83)/x84);

	if (t15 != 12346017097LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x85 = 0U;
	volatile int32_t x86 = 1;
	static uint32_t x87 = 699U;
	uint64_t x88 = 72683139079LLU;

	t16 = (((x85-x86)%x87)/x88);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x93 = 49077297U;
	uint32_t x94 = 7583206U;
	int64_t x95 = INT64_MAX;
	uint64_t x96 = 29129289963462035LLU;
	static uint64_t t17 = 93937LLU;

	t17 = (((x93-x94)%x95)/x96);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x97 = 3U;
	volatile int16_t x98 = -1;
	uint32_t x99 = 15626U;
	static int8_t x100 = INT8_MAX;
	volatile uint32_t t18 = 13070127U;

	t18 = (((x97-x98)%x99)/x100);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = -1;
	uint16_t x102 = 7U;
	int64_t x103 = INT64_MAX;
	static int16_t x104 = INT16_MAX;

	t19 = (((x101-x102)%x103)/x104);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x109 = INT8_MIN;
	uint16_t x110 = UINT16_MAX;
	static uint16_t x111 = 9U;
	static int32_t t20 = 44106;

	t20 = (((x109-x110)%x111)/x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x113 = -1;
	uint16_t x114 = 0U;
	uint8_t x115 = 47U;
	static int32_t t21 = 2;

	t21 = (((x113-x114)%x115)/x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x123 = 10727386837717LL;
	volatile uint64_t t22 = 541603360778LLU;

	t22 = (((x121-x122)%x123)/x124);

	if (t22 != 523169017LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x126 = -27472;
	static uint64_t x127 = 433434LLU;
	uint64_t t23 = 5LLU;

	t23 = (((x125-x126)%x127)/x128);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = 23U;
	static int32_t x131 = INT32_MAX;
	volatile int64_t t24 = -13043604477LL;

	t24 = (((x129-x130)%x131)/x132);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = INT16_MIN;
	volatile int16_t x134 = 1424;
	int64_t x135 = 62972LL;
	volatile int64_t x136 = INT64_MIN;
	static int64_t t25 = -430LL;

	t25 = (((x133-x134)%x135)/x136);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x141 = UINT8_MAX;
	static volatile int64_t x142 = 42943608195LL;
	int8_t x143 = INT8_MAX;

	t26 = (((x141-x142)%x143)/x144);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = INT32_MAX;
	int32_t x148 = -1;
	volatile int64_t t27 = 8444472829786925LL;

	t27 = (((x145-x146)%x147)/x148);

	if (t27 != 136369575LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = INT32_MIN;
	static uint64_t x150 = 844LLU;
	uint32_t x151 = 147U;
	int64_t x152 = -1LL;
	volatile uint64_t t28 = 1LLU;

	t28 = (((x149-x150)%x151)/x152);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x153 = -57;
	int8_t x154 = 0;
	uint32_t x155 = 1U;
	uint16_t x156 = UINT16_MAX;
	uint32_t t29 = 2U;

	t29 = (((x153-x154)%x155)/x156);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MIN;
	int64_t t30 = -352LL;

	t30 = (((x157-x158)%x159)/x160);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = UINT8_MAX;
	static int32_t x166 = 60150609;
	volatile int32_t t31 = 0;

	t31 = (((x165-x166)%x167)/x168);

	if (t31 != -15) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	volatile uint32_t t32 = 28U;

	t32 = (((x169-x170)%x171)/x172);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x173 = 3U;
	int64_t x175 = -312884978798017LL;
	int16_t x176 = -1;

	t33 = (((x173-x174)%x175)/x176);

	if (t33 != 19LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = UINT16_MAX;
	static uint16_t x178 = UINT16_MAX;
	int64_t x179 = 29LL;
	uint16_t x180 = UINT16_MAX;
	int64_t t34 = 87LL;

	t34 = (((x177-x178)%x179)/x180);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = -1;
	static uint32_t x183 = UINT32_MAX;
	static uint32_t t35 = 1U;

	t35 = (((x181-x182)%x183)/x184);

	if (t35 != 1485120U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MAX;
	int64_t t36 = -479393LL;

	t36 = (((x185-x186)%x187)/x188);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x190 = 2410U;
	volatile int8_t x191 = -10;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t37 = 1410U;

	t37 = (((x189-x190)%x191)/x192);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x197 = INT16_MAX;
	uint32_t x198 = 22328563U;
	uint16_t x199 = 1U;
	int16_t x200 = INT16_MIN;

	t38 = (((x197-x198)%x199)/x200);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x201 = -1;
	static uint64_t x202 = 13138702LLU;
	volatile int8_t x203 = INT8_MIN;
	uint64_t t39 = 531926995939126LLU;

	t39 = (((x201-x202)%x203)/x204);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x205 = -1;
	volatile uint8_t x206 = 96U;
	volatile uint64_t x207 = 35LLU;
	int32_t x208 = INT32_MIN;
	static uint64_t t40 = 45026LLU;

	t40 = (((x205-x206)%x207)/x208);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x209 = UINT64_MAX;
	uint64_t x210 = 6LLU;
	int16_t x211 = -2;
	uint32_t x212 = 60057742U;
	volatile uint64_t t41 = 230127LLU;

	t41 = (((x209-x210)%x211)/x212);

	if (t41 != 307150143502LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x214 = -1;
	static int8_t x215 = -1;
	int64_t x216 = -220234LL;

	t42 = (((x213-x214)%x215)/x216);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x217 = -64;
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	static int8_t x220 = -1;
	static int32_t t43 = 14923;

	t43 = (((x217-x218)%x219)/x220);

	if (t43 != -32704) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	int64_t x223 = 1270026506377113LL;
	int8_t x224 = -2;
	volatile int64_t t44 = 5412LL;

	t44 = (((x221-x222)%x223)/x224);

	if (t44 != 16383LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MAX;
	uint16_t x231 = 8311U;
	int32_t x232 = INT32_MAX;

	t45 = (((x229-x230)%x231)/x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x237 = INT32_MAX;
	uint8_t x238 = 32U;
	int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t46 = -14598;

	t46 = (((x237-x238)%x239)/x240);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = -23163751;
	uint8_t x242 = 6U;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t47 = 322846;

	t47 = (((x241-x242)%x243)/x244);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x247 = INT8_MIN;
	int64_t t48 = 93671994721487301LL;

	t48 = (((x245-x246)%x247)/x248);

	if (t48 != -25LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x250 = 133386LLU;
	volatile uint64_t x252 = UINT64_MAX;

	t49 = (((x249-x250)%x251)/x252);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x253 = -7440121028715LL;
	int16_t x254 = INT16_MAX;
	uint16_t x255 = 15070U;
	uint64_t x256 = 613828LLU;
	static volatile uint64_t t50 = 29843542650LLU;

	t50 = (((x253-x254)%x255)/x256);

	if (t50 != 30051975592038LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x257 = 3U;
	uint32_t x258 = 12432507U;
	volatile uint16_t x260 = 3U;
	volatile uint32_t t51 = 1863737U;

	t51 = (((x257-x258)%x259)/x260);

	if (t51 != 3U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x263 = INT32_MAX;
	int32_t x264 = INT32_MIN;
	static volatile int32_t t52 = 376220691;

	t52 = (((x261-x262)%x263)/x264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x265 = -7729;
	uint16_t x266 = UINT16_MAX;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;

	t53 = (((x265-x266)%x267)/x268);

	if (t53 != 572LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x269 = -1LL;
	int64_t x270 = -1LL;
	int16_t x271 = -1;
	uint64_t x272 = UINT64_MAX;

	t54 = (((x269-x270)%x271)/x272);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = INT16_MAX;
	int32_t x276 = -27888;
	int64_t t55 = 2137810576LL;

	t55 = (((x273-x274)%x275)/x276);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x278 = 0;
	int8_t x279 = -1;
	uint32_t x280 = 243U;
	static uint32_t t56 = 210524790U;

	t56 = (((x277-x278)%x279)/x280);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x286 = 379;
	volatile uint64_t x287 = 31829381047128583LLU;
	uint64_t t57 = 1835730828124LLU;

	t57 = (((x285-x286)%x287)/x288);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x289 = 72LLU;
	static uint16_t x290 = 20380U;
	int32_t x291 = -418462;
	uint64_t x292 = 3826581371LLU;

	t58 = (((x289-x290)%x291)/x292);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x293 = 470103039LL;
	static uint8_t x295 = UINT8_MAX;
	int32_t x296 = -42;
	volatile uint64_t t59 = 119505084LLU;

	t59 = (((x293-x294)%x295)/x296);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MAX;
	volatile int32_t t60 = -1;

	t60 = (((x301-x302)%x303)/x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x307 = UINT16_MAX;
	volatile int32_t t61 = 20;

	t61 = (((x305-x306)%x307)/x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x311 = INT8_MAX;
	int32_t x312 = INT32_MIN;
	uint64_t t62 = 20LLU;

	t62 = (((x309-x310)%x311)/x312);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x313 = 35712552404809LLU;
	static volatile int8_t x314 = -1;
	int64_t x315 = INT64_MIN;
	static uint8_t x316 = 4U;
	volatile uint64_t t63 = 18001LLU;

	t63 = (((x313-x314)%x315)/x316);

	if (t63 != 8928138101202LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x318 = INT16_MIN;
	int16_t x319 = -618;

	t64 = (((x317-x318)%x319)/x320);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x321 = UINT64_MAX;
	static uint8_t x322 = 2U;
	uint64_t x323 = 22673LLU;
	volatile uint8_t x324 = 6U;
	volatile uint64_t t65 = 810379734549639LLU;

	t65 = (((x321-x322)%x323)/x324);

	if (t65 != 2680LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x331 = -122729751LL;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t66 = 8738061582799LLU;

	t66 = (((x329-x330)%x331)/x332);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x334 = 0;
	static int32_t x336 = -1;
	static uint64_t t67 = 85576577LLU;

	t67 = (((x333-x334)%x335)/x336);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x338 = 1484LLU;
	volatile uint8_t x339 = 76U;
	uint64_t x340 = UINT64_MAX;

	t68 = (((x337-x338)%x339)/x340);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x342 = -11;
	static int64_t x343 = -1391883673311LL;
	static int16_t x344 = INT16_MIN;
	int64_t t69 = 35435384218480503LL;

	t69 = (((x341-x342)%x343)/x344);

	if (t69 != 65535LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x345 = 16U;
	volatile uint32_t x346 = UINT32_MAX;
	uint32_t x347 = 276726U;
	uint16_t x348 = 21U;
	static uint32_t t70 = 4U;

	t70 = (((x345-x346)%x347)/x348);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x353 = 314U;
	int64_t x354 = -154443715873512LL;
	int32_t x355 = -1;
	int32_t x356 = INT32_MIN;
	int64_t t71 = 196063488683LL;

	t71 = (((x353-x354)%x355)/x356);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x357 = 13462U;
	uint16_t x358 = 5U;

	t72 = (((x357-x358)%x359)/x360);

	if (t72 != -13457) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = INT64_MIN;
	volatile int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	volatile int64_t t73 = 112LL;

	t73 = (((x361-x362)%x363)/x364);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x365 = 98U;
	int64_t x367 = INT64_MAX;
	static uint8_t x368 = 32U;
	volatile int64_t t74 = 1242357284644092111LL;

	t74 = (((x365-x366)%x367)/x368);

	if (t74 != -2044LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x369 = 1;
	int8_t x370 = INT8_MIN;
	static volatile uint64_t x371 = 38LLU;
	int64_t x372 = 484181617333116912LL;
	static uint64_t t75 = 1LLU;

	t75 = (((x369-x370)%x371)/x372);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x373 = INT8_MAX;
	uint16_t x374 = 3U;
	int8_t x375 = INT8_MIN;
	static uint16_t x376 = UINT16_MAX;
	int32_t t76 = 3;

	t76 = (((x373-x374)%x375)/x376);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x377 = -1;
	static int16_t x378 = INT16_MAX;
	static uint64_t x379 = 243865460LLU;
	uint16_t x380 = 1U;
	uint64_t t77 = 8LLU;

	t77 = (((x377-x378)%x379)/x380);

	if (t77 != 22490168LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x381 = 126U;
	int8_t x382 = -2;
	uint64_t x384 = 1LLU;
	static volatile uint64_t t78 = 65LLU;

	t78 = (((x381-x382)%x383)/x384);

	if (t78 != 42LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = -19;
	int16_t x386 = INT16_MAX;
	static int64_t x388 = INT64_MIN;
	int64_t t79 = 170069LL;

	t79 = (((x385-x386)%x387)/x388);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x389 = UINT64_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	volatile uint64_t t80 = 65LLU;

	t80 = (((x389-x390)%x391)/x392);

	if (t80 != 50LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x394 = 959U;
	static volatile uint32_t x395 = 2605231U;

	t81 = (((x393-x394)%x395)/x396);

	if (t81 != 12170U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x397 = 280487314738027187LL;
	int64_t x398 = INT64_MAX;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = 63125;
	static volatile int64_t t82 = 74LL;

	t82 = (((x397-x398)%x399)/x400);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x403 = 7459758LLU;
	volatile uint32_t x404 = 3801U;
	uint64_t t83 = 4497777LLU;

	t83 = (((x401-x402)%x403)/x404);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x409 = INT32_MIN;
	volatile int64_t x411 = -872826726479101LL;
	static int8_t x412 = -2;

	t84 = (((x409-x410)%x411)/x412);

	if (t84 != -106008001315946LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = -88968;
	uint32_t x418 = UINT32_MAX;
	int32_t x420 = INT32_MIN;
	uint32_t t85 = 6042U;

	t85 = (((x417-x418)%x419)/x420);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x421 = 73433173LLU;

	t86 = (((x421-x422)%x423)/x424);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x425 = -1;
	static int64_t x426 = INT64_MAX;
	int16_t x427 = -1;
	int32_t x428 = -1719;

	t87 = (((x425-x426)%x427)/x428);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x429 = 0LL;
	int8_t x430 = 16;
	static int16_t x431 = -192;
	volatile int64_t t88 = 56884LL;

	t88 = (((x429-x430)%x431)/x432);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x433 = INT8_MIN;
	static int8_t x435 = INT8_MAX;
	uint8_t x436 = 63U;
	volatile int32_t t89 = -1;

	t89 = (((x433-x434)%x435)/x436);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x439 = UINT32_MAX;
	uint8_t x440 = 2U;
	volatile uint32_t t90 = 19527U;

	t90 = (((x437-x438)%x439)/x440);

	if (t90 != 16320U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x441 = 27;
	volatile int64_t x442 = -1LL;
	volatile int64_t x443 = INT64_MIN;
	int16_t x444 = -1;
	volatile int64_t t91 = -15LL;

	t91 = (((x441-x442)%x443)/x444);

	if (t91 != -28LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x449 = -1LL;
	int64_t x450 = INT64_MAX;
	static uint8_t x451 = 72U;
	static int8_t x452 = -1;
	int64_t t92 = 482885759003359LL;

	t92 = (((x449-x450)%x451)/x452);

	if (t92 != 8LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x453 = -1;
	static int8_t x454 = 1;
	int64_t x456 = INT64_MIN;

	t93 = (((x453-x454)%x455)/x456);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x457 = 23U;
	int32_t x458 = -1;
	uint32_t x459 = 9097223U;
	volatile uint64_t t94 = 3640171LLU;

	t94 = (((x457-x458)%x459)/x460);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -1;
	static uint8_t x463 = 1U;

	t95 = (((x461-x462)%x463)/x464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x466 = 908U;
	static uint64_t x467 = 6703838774LLU;
	volatile int64_t x468 = 13821973503146645LL;

	t96 = (((x465-x466)%x467)/x468);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = 14653587992LL;
	int8_t x470 = -1;
	static int16_t x471 = -1;

	t97 = (((x469-x470)%x471)/x472);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x473 = INT32_MIN;
	int8_t x474 = INT8_MIN;
	uint32_t x475 = UINT32_MAX;
	static uint32_t x476 = UINT32_MAX;
	volatile uint32_t t98 = 5507U;

	t98 = (((x473-x474)%x475)/x476);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x477 = INT8_MIN;
	volatile int16_t x479 = INT16_MIN;
	int8_t x480 = INT8_MAX;
	volatile int32_t t99 = -472;

	t99 = (((x477-x478)%x479)/x480);

	if (t99 != -1) { NG(); } else { ; }
	
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

