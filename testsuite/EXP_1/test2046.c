#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
static volatile int64_t x5 = INT64_MAX;
volatile uint16_t x9 = 0U;
int8_t x10 = -1;
volatile int32_t t2 = -479250;
int32_t x18 = -1;
static volatile int32_t x19 = -494298;
volatile uint64_t t4 = 8LLU;
static volatile uint64_t t5 = 506072LLU;
int8_t x38 = INT8_MIN;
volatile int32_t t8 = 2377523;
volatile int8_t x45 = -27;
static int64_t x47 = -1LL;
int32_t t12 = -37981447;
volatile int64_t x63 = -1LL;
static int64_t t13 = 44998LL;
int16_t x67 = INT16_MIN;
int8_t x77 = INT8_MIN;
int64_t x89 = 446919491584687265LL;
volatile int8_t x92 = INT8_MIN;
int64_t x100 = 56371299912LL;
int64_t t21 = 103028046LL;
volatile int8_t x110 = 0;
int32_t x113 = 67786;
int64_t x122 = INT64_MIN;
int64_t t25 = -445813598044454566LL;
static volatile uint32_t x148 = UINT32_MAX;
static int32_t x160 = -1;
int16_t x163 = INT16_MIN;
static uint64_t x165 = UINT64_MAX;
volatile int64_t x166 = 17798999299LL;
static int16_t x169 = 0;
int64_t x173 = -128400804287752LL;
static uint64_t x176 = 5654909868392436LLU;
uint64_t x179 = 472394691974796315LLU;
static int8_t x187 = -1;
static volatile int64_t t41 = -3161116LL;
uint32_t x192 = 245U;
volatile int16_t x195 = INT16_MIN;
volatile int64_t x196 = INT64_MAX;
static volatile uint32_t t46 = 1235335871U;
volatile int64_t t47 = -1973228196405982665LL;
int64_t x218 = -67681338669070234LL;
int32_t x222 = -1;
int8_t x228 = -1;
int32_t x232 = -1;
volatile uint8_t x240 = UINT8_MAX;
volatile int32_t t54 = 329;
volatile int16_t x243 = INT16_MIN;
static volatile int16_t x248 = 4;
int16_t x253 = INT16_MIN;
uint16_t x255 = 650U;
uint8_t x261 = UINT8_MAX;
static volatile int32_t t60 = 59146;
static int8_t x271 = INT8_MIN;
volatile int64_t t61 = 32545041LL;
volatile uint32_t t62 = 255297188U;
int64_t t66 = 1794780176LL;
int16_t x300 = -640;
static uint8_t x311 = 50U;
uint16_t x315 = 22202U;
int16_t x318 = -1253;
static int16_t x320 = -1;
int64_t x325 = 3LL;
uint32_t x326 = 0U;
uint8_t x329 = UINT8_MAX;
uint8_t x330 = UINT8_MAX;
uint32_t x332 = UINT32_MAX;
static volatile int64_t x336 = INT64_MIN;
int64_t t77 = 1779LL;
uint32_t x339 = 1440841596U;
int32_t x341 = -1;
uint32_t x343 = UINT32_MAX;
static uint8_t x349 = 1U;
uint16_t x352 = 50U;
int32_t x360 = INT32_MIN;
int64_t x382 = 863972985903657974LL;
static int64_t t89 = 9408LL;
int64_t t90 = -436306589LL;
volatile uint32_t x391 = UINT32_MAX;
static int16_t x413 = INT16_MIN;
int16_t x415 = -1;
static int64_t x419 = INT64_MAX;
volatile uint64_t t95 = 11294239006369770LLU;
int32_t x421 = -4073005;
static uint32_t x432 = UINT32_MAX;
static uint32_t t98 = 440U;


void f0(void) {
	uint64_t x1 = 3127LLU;
	int8_t x2 = INT8_MAX;
	uint8_t x3 = UINT8_MAX;
	static volatile uint64_t t0 = 250018074175803LLU;

	t0 = (((x1^x2)-x3)%x4);

	if (t0 != 2889LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = -1;
	uint64_t x7 = 1647957LLU;
	static int32_t x8 = 115566;
	volatile uint64_t t1 = 8717961051LLU;

	t1 = (((x5^x6)-x7)%x8);

	if (t1 != 59141LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;

	t2 = (((x9^x10)-x11)%x12);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -235323507;
	static int8_t x14 = INT8_MIN;
	int16_t x15 = 3;
	uint32_t x16 = 152464U;
	volatile uint32_t t3 = 73799945U;

	t3 = (((x13^x14)-x15)%x16);

	if (t3 != 71450U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MAX;
	uint64_t x20 = UINT64_MAX;

	t4 = (((x17^x18)-x19)%x20);

	if (t4 != 461530LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MAX;
	int64_t x23 = 2LL;
	uint64_t x24 = UINT64_MAX;

	t5 = (((x21^x22)-x23)%x24);

	if (t5 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	volatile uint64_t x30 = 897LLU;
	int32_t x31 = -1;
	volatile int16_t x32 = INT16_MIN;
	volatile uint64_t t6 = 3466446LLU;

	t6 = (((x29^x30)-x31)%x32);

	if (t6 != 64639LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 224839LL;
	static volatile int32_t x34 = -1;
	uint32_t x35 = 3227U;
	int64_t x36 = -18554763LL;
	static int64_t t7 = -4128853318189065LL;

	t7 = (((x33^x34)-x35)%x36);

	if (t7 != -228067LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	int16_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;

	t8 = (((x37^x38)-x39)%x40);

	if (t8 != -32640) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	static volatile uint8_t x43 = 18U;
	uint16_t x44 = 112U;
	static volatile int32_t t9 = 0;

	t9 = (((x41^x42)-x43)%x44);

	if (t9 != 30) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t10 = 1316869LLU;

	t10 = (((x45^x46)-x47)%x48);

	if (t10 != 27LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	static volatile int8_t x50 = -1;
	int8_t x51 = 3;
	int64_t x52 = INT64_MAX;
	volatile int64_t t11 = 134325583661776LL;

	t11 = (((x49^x50)-x51)%x52);

	if (t11 != 32764LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = 169;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	int16_t x56 = 6;

	t12 = (((x53^x54)-x55)%x56);

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	uint32_t x62 = UINT32_MAX;
	int8_t x64 = INT8_MAX;

	t13 = (((x61^x62)-x63)%x64);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x65 = UINT64_MAX;
	static int32_t x66 = INT32_MIN;
	volatile uint8_t x68 = 3U;
	uint64_t t14 = 62008536551740694LLU;

	t14 = (((x65^x66)-x67)%x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	static uint32_t x70 = 11U;
	int64_t x71 = INT64_MIN;
	int8_t x72 = -23;
	static volatile int64_t t15 = -786LL;

	t15 = (((x69^x70)-x71)%x72);

	if (t15 != 14LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int32_t x74 = -39380;
	uint32_t x75 = 4341U;
	static uint16_t x76 = 3U;
	uint32_t t16 = 0U;

	t16 = (((x73^x74)-x75)%x76);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = -1;
	volatile uint32_t x79 = 829999U;
	int8_t x80 = -1;
	volatile uint32_t t17 = 3095534U;

	t17 = (((x77^x78)-x79)%x80);

	if (t17 != 4294137424U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x85 = UINT16_MAX;
	static uint32_t x86 = 7U;
	static int64_t x87 = -161554688LL;
	int16_t x88 = 10;
	static volatile int64_t t18 = -26LL;

	t18 = (((x85^x86)-x87)%x88);

	if (t18 != 6LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x90 = INT64_MAX;
	static volatile int16_t x91 = -1;
	volatile int64_t t19 = 41LL;

	t19 = (((x89^x90)-x91)%x92);

	if (t19 != 95LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MIN;
	int16_t x94 = -5;
	int8_t x95 = INT8_MAX;
	int16_t x96 = -9;
	volatile int32_t t20 = 34;

	t20 = (((x93^x94)-x95)%x96);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -1;
	uint16_t x98 = 131U;
	uint8_t x99 = 10U;

	t21 = (((x97^x98)-x99)%x100);

	if (t21 != -142LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = 135;
	uint64_t x107 = 618019204598478076LLU;
	uint32_t x108 = 120976939U;
	volatile uint64_t t22 = 1LLU;

	t22 = (((x105^x106)-x107)%x108);

	if (t22 != 50891167LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = -1;
	static uint8_t x111 = 29U;
	int64_t x112 = 987634537659LL;
	static volatile int64_t t23 = -3547LL;

	t23 = (((x109^x110)-x111)%x112);

	if (t23 != -30LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x114 = -1;
	int64_t x115 = 219LL;
	int64_t x116 = INT64_MIN;
	volatile int64_t t24 = 8183644756LL;

	t24 = (((x113^x114)-x115)%x116);

	if (t24 != -68006LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x121 = 55U;
	int8_t x123 = -1;
	static uint32_t x124 = 158148U;

	t25 = (((x121^x122)-x123)%x124);

	if (t25 != -46752LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int64_t x126 = INT64_MIN;
	static uint8_t x127 = 5U;
	uint64_t x128 = UINT64_MAX;
	uint64_t t26 = 563531565787103LLU;

	t26 = (((x125^x126)-x127)%x128);

	if (t26 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	uint16_t x130 = 1U;
	volatile uint32_t x131 = 49U;
	static volatile uint32_t x132 = 2U;
	volatile uint32_t t27 = 120U;

	t27 = (((x129^x130)-x131)%x132);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -1;
	int32_t x134 = 6029;
	int16_t x135 = INT16_MIN;
	static int64_t x136 = INT64_MIN;
	static volatile int64_t t28 = -4486379821681029175LL;

	t28 = (((x133^x134)-x135)%x136);

	if (t28 != 26738LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	static volatile int16_t x138 = INT16_MIN;
	int16_t x139 = 961;
	static volatile int32_t x140 = -1125484;
	volatile int32_t t29 = -225;

	t29 = (((x137^x138)-x139)%x140);

	if (t29 != 31679) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = 30949833626LLU;
	uint32_t x142 = 12U;
	int16_t x143 = INT16_MIN;
	int64_t x144 = -1LL;
	static uint64_t t30 = 2053377273LLU;

	t30 = (((x141^x142)-x143)%x144);

	if (t30 != 30949866390LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = -4;
	int8_t x146 = INT8_MIN;
	static volatile int64_t x147 = INT64_MAX;
	static int64_t t31 = 0LL;

	t31 = (((x145^x146)-x147)%x148);

	if (t31 != -2147483523LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = -1LL;
	volatile uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	int64_t t32 = -179602475952612424LL;

	t32 = (((x149^x150)-x151)%x152);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x153 = 89U;
	volatile int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = 1241771850379464LLU;
	uint64_t t33 = 1742LLU;

	t33 = (((x153^x154)-x155)%x156);

	if (t33 != 4294934618LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x157 = -925724596LL;
	int64_t x158 = INT64_MIN;
	int32_t x159 = -74;
	int64_t t34 = 459877116275315LL;

	t34 = (((x157^x158)-x159)%x160);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x161 = 85U;
	uint64_t x162 = 89779371822124716LLU;
	int32_t x164 = INT32_MIN;
	uint64_t t35 = 263315259LLU;

	t35 = (((x161^x162)-x163)%x164);

	if (t35 != 89779371822157561LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x167 = -1;
	int32_t x168 = -1;
	uint64_t t36 = 325269822LLU;

	t36 = (((x165^x166)-x167)%x168);

	if (t36 != 18446744055910552317LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x170 = UINT16_MAX;
	static volatile int16_t x171 = INT16_MIN;
	volatile uint8_t x172 = 20U;
	int32_t t37 = 1;

	t37 = (((x169^x170)-x171)%x172);

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	volatile uint64_t t38 = 2685337288LLU;

	t38 = (((x173^x174)-x175)%x176);

	if (t38 != 128402951771399LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1LL;
	int32_t x178 = 0;
	int8_t x180 = INT8_MAX;
	uint64_t t39 = 229662724LLU;

	t39 = (((x177^x178)-x179)%x180);

	if (t39 != 4LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = -1;
	uint8_t x182 = 27U;
	uint64_t x183 = 96234913808437559LLU;
	int16_t x184 = INT16_MIN;
	uint64_t t40 = 797412655767971045LLU;

	t40 = (((x181^x182)-x183)%x184);

	if (t40 != 18350509159901114029LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = 1;
	int64_t x186 = -1LL;
	volatile int8_t x188 = INT8_MIN;

	t41 = (((x185^x186)-x187)%x188);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -311;
	int8_t x190 = 1;
	int64_t x191 = 797LL;
	volatile int64_t t42 = -309LL;

	t42 = (((x189^x190)-x191)%x192);

	if (t42 != -129LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x193 = 146554980018068LLU;
	static int64_t x194 = INT64_MIN;
	volatile uint64_t t43 = 7811853857699495285LLU;

	t43 = (((x193^x194)-x195)%x196);

	if (t43 != 146554980050837LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x197 = INT8_MAX;
	volatile int64_t x198 = -1LL;
	static uint16_t x199 = 928U;
	int8_t x200 = -1;
	static volatile int64_t t44 = -78347LL;

	t44 = (((x197^x198)-x199)%x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 125U;
	int8_t x202 = 5;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = -17;
	uint32_t t45 = 4160U;

	t45 = (((x201^x202)-x203)%x204);

	if (t45 != 121U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 949939U;
	volatile uint16_t x206 = 56U;
	uint16_t x207 = 7U;
	static volatile int16_t x208 = INT16_MIN;

	t46 = (((x205^x206)-x207)%x208);

	if (t46 != 949892U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	static int16_t x210 = INT16_MIN;
	uint16_t x211 = 27357U;
	uint8_t x212 = UINT8_MAX;

	t47 = (((x209^x210)-x211)%x212);

	if (t47 != -73LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x213 = UINT32_MAX;
	int64_t x214 = INT64_MIN;
	static int64_t x215 = INT64_MIN;
	uint8_t x216 = 11U;
	int64_t t48 = -118546374LL;

	t48 = (((x213^x214)-x215)%x216);

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = INT32_MAX;
	int64_t x219 = INT64_MIN;
	static int64_t x220 = INT64_MAX;
	volatile int64_t t49 = -780829675871782777LL;

	t49 = (((x217^x218)-x219)%x220);

	if (t49 != 9155690697289562009LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -1;
	int8_t x223 = -6;
	static uint64_t x224 = 2555088190718283LLU;
	volatile uint64_t t50 = 8884365624298802494LLU;

	t50 = (((x221^x222)-x223)%x224);

	if (t50 != 6LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = -37691896051353548LL;
	volatile int32_t x226 = INT32_MAX;
	int8_t x227 = 1;
	int64_t t51 = 51921858695388LL;

	t51 = (((x225^x226)-x227)%x228);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MAX;
	uint64_t x230 = 69206820860680LLU;
	int8_t x231 = INT8_MIN;
	volatile uint64_t t52 = 5LLU;

	t52 = (((x229^x230)-x231)%x232);

	if (t52 != 69204942703991LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MIN;
	volatile int16_t x234 = 976;
	static volatile int16_t x235 = -177;
	uint8_t x236 = 90U;
	volatile int32_t t53 = -1031233926;

	t53 = (((x233^x234)-x235)%x236);

	if (t53 != -55) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -1;
	int32_t x238 = -1;
	int8_t x239 = 36;

	t54 = (((x237^x238)-x239)%x240);

	if (t54 != -36) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = 52U;
	int32_t x242 = -1;
	uint8_t x244 = 19U;
	static volatile int32_t t55 = -91406;

	t55 = (((x241^x242)-x243)%x244);

	if (t55 != 16) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = 1;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 0U;
	int64_t t56 = -1923389530LL;

	t56 = (((x245^x246)-x247)%x248);

	if (t56 != -3LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MIN;
	volatile uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = 1;
	volatile int8_t x252 = INT8_MIN;
	int32_t t57 = -17;

	t57 = (((x249^x250)-x251)%x252);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x254 = 4247151311114LLU;
	static uint16_t x256 = UINT16_MAX;
	uint64_t t58 = 31774LLU;

	t58 = (((x253^x254)-x255)%x256);

	if (t58 != 38066LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MAX;
	uint32_t x259 = UINT32_MAX;
	volatile int8_t x260 = -1;
	uint32_t t59 = 187035116U;

	t59 = (((x257^x258)-x259)%x260);

	if (t59 != 2147483776U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x262 = INT8_MAX;
	int16_t x263 = 169;
	int16_t x264 = -1;

	t60 = (((x261^x262)-x263)%x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x269 = 24974U;
	uint8_t x270 = UINT8_MAX;
	int64_t x272 = -84567174LL;

	t61 = (((x269^x270)-x271)%x272);

	if (t61 != 25073LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = 259095248U;
	int32_t x274 = INT32_MAX;
	volatile uint16_t x275 = 185U;
	volatile int8_t x276 = INT8_MIN;

	t62 = (((x273^x274)-x275)%x276);

	if (t62 != 1888388214U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = INT64_MIN;
	static int32_t x278 = INT32_MIN;
	int64_t x279 = 206395598LL;
	uint64_t x280 = 287343794304711465LLU;
	volatile uint64_t t63 = 790LLU;

	t63 = (((x277^x278)-x279)%x280);

	if (t63 != 28370616750129682LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x281 = 80482LLU;
	volatile uint16_t x282 = 47U;
	static int32_t x283 = INT32_MAX;
	uint32_t x284 = UINT32_MAX;
	uint64_t t64 = 148778589LLU;

	t64 = (((x281^x282)-x283)%x284);

	if (t64 != 2147564110LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x285 = -6;
	int16_t x286 = 1;
	volatile int8_t x287 = -30;
	static int64_t x288 = INT64_MIN;
	int64_t t65 = -111LL;

	t65 = (((x285^x286)-x287)%x288);

	if (t65 != 25LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x289 = -20913079;
	int64_t x290 = -1LL;
	int8_t x291 = INT8_MAX;
	int64_t x292 = -3346964852LL;

	t66 = (((x289^x290)-x291)%x292);

	if (t66 != 20912951LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x293 = -1;
	static int32_t x294 = INT32_MAX;
	volatile int8_t x295 = INT8_MIN;
	uint32_t x296 = 772285U;
	static volatile uint32_t t67 = 4806446U;

	t67 = (((x293^x294)-x295)%x296);

	if (t67 != 531476U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = UINT32_MAX;
	static int8_t x298 = 3;
	int8_t x299 = INT8_MIN;
	static volatile uint32_t t68 = 10U;

	t68 = (((x297^x298)-x299)%x300);

	if (t68 != 124U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = INT32_MIN;
	static uint64_t x302 = 8669140380184LLU;
	int16_t x303 = -414;
	int64_t x304 = INT64_MIN;
	uint64_t t69 = 2620499332LLU;

	t69 = (((x301^x302)-x303)%x304);

	if (t69 != 9223363369359666102LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x305 = INT16_MIN;
	static uint32_t x306 = 3184U;
	int16_t x307 = -1;
	volatile int8_t x308 = INT8_MIN;
	static volatile uint32_t t70 = 1U;

	t70 = (((x305^x306)-x307)%x308);

	if (t70 != 4294937713U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x309 = 908174390087506231LL;
	volatile int32_t x310 = INT32_MAX;
	uint64_t x312 = 392LLU;
	uint64_t t71 = 1551LLU;

	t71 = (((x309^x310)-x311)%x312);

	if (t71 != 14LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = INT16_MAX;
	static int16_t x314 = -1;
	volatile int8_t x316 = 24;
	int32_t t72 = 257705;

	t72 = (((x313^x314)-x315)%x316);

	if (t72 != -10) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 2U;
	uint64_t x319 = 7282996942LLU;
	volatile uint64_t t73 = 12189496445LLU;

	t73 = (((x317^x318)-x319)%x320);

	if (t73 != 18446744070721520715LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x321 = INT64_MAX;
	volatile int64_t x322 = INT64_MAX;
	int64_t x323 = INT64_MAX;
	int8_t x324 = -24;
	volatile int64_t t74 = 1750453471LL;

	t74 = (((x321^x322)-x323)%x324);

	if (t74 != -7LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x327 = INT32_MIN;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t75 = 621LL;

	t75 = (((x325^x326)-x327)%x328);

	if (t75 != 2147483651LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x331 = -1;
	uint32_t t76 = 17374U;

	t76 = (((x329^x330)-x331)%x332);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MAX;
	static volatile uint8_t x335 = 1U;

	t77 = (((x333^x334)-x335)%x336);

	if (t77 != -2147483522LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x337 = -1;
	int64_t x338 = -1LL;
	uint8_t x340 = UINT8_MAX;
	volatile int64_t t78 = 70331730099925373LL;

	t78 = (((x337^x338)-x339)%x340);

	if (t78 != -51LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x342 = 56;
	int8_t x344 = -1;
	volatile uint32_t t79 = 1U;

	t79 = (((x341^x342)-x343)%x344);

	if (t79 != 4294967240U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = -1LL;
	int32_t x346 = -1;
	int64_t x347 = -1LL;
	int64_t x348 = INT64_MIN;
	volatile int64_t t80 = 97333LL;

	t80 = (((x345^x346)-x347)%x348);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x350 = 201842347U;
	int32_t x351 = INT32_MIN;
	volatile uint32_t t81 = 2648U;

	t81 = (((x349^x350)-x351)%x352);

	if (t81 != 44U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x353 = 10;
	int16_t x354 = INT16_MIN;
	int64_t x355 = 17323042022025LL;
	int64_t x356 = INT64_MIN;
	int64_t t82 = 1254370LL;

	t82 = (((x353^x354)-x355)%x356);

	if (t82 != -17323042054783LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x357 = UINT8_MAX;
	static int64_t x358 = -4496LL;
	int8_t x359 = INT8_MIN;
	static int64_t t83 = 7LL;

	t83 = (((x357^x358)-x359)%x360);

	if (t83 != -4337LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x361 = UINT64_MAX;
	volatile int8_t x362 = -27;
	uint8_t x363 = 86U;
	volatile int8_t x364 = -1;
	uint64_t t84 = 260295367040LLU;

	t84 = (((x361^x362)-x363)%x364);

	if (t84 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x365 = 255419U;
	volatile int64_t x366 = 258822093941LL;
	volatile uint64_t x367 = 39558LLU;
	volatile int8_t x368 = INT8_MIN;
	uint64_t t85 = 5LLU;

	t85 = (((x365^x366)-x367)%x368);

	if (t85 != 258821832520LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = 0LL;
	volatile uint16_t x370 = UINT16_MAX;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t86 = 4002338706338LL;

	t86 = (((x369^x370)-x371)%x372);

	if (t86 != -4294901760LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -1;
	static int32_t x376 = -732057;
	int32_t t87 = -1617;

	t87 = (((x373^x374)-x375)%x376);

	if (t87 != 32641) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x377 = INT8_MIN;
	static int32_t x378 = -1779;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MAX;
	int32_t t88 = -978;

	t88 = (((x377^x378)-x379)%x380);

	if (t88 != -31091) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = INT8_MIN;
	int32_t x383 = 30338;
	volatile int8_t x384 = -1;

	t89 = (((x381^x382)-x383)%x384);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = 112U;
	static volatile int64_t x386 = -631LL;
	int32_t x387 = 154417744;
	uint32_t x388 = 2392679U;

	t90 = (((x385^x386)-x387)%x388);

	if (t90 != -1286807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = 11;
	int8_t x390 = -1;
	uint8_t x392 = UINT8_MAX;
	uint32_t t91 = 101U;

	t91 = (((x389^x390)-x391)%x392);

	if (t91 != 245U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -29;
	static volatile int64_t x394 = INT64_MIN;
	uint16_t x395 = UINT16_MAX;
	static int64_t x396 = INT64_MIN;
	volatile int64_t t92 = -120092281153LL;

	t92 = (((x393^x394)-x395)%x396);

	if (t92 != 9223372036854710244LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = 61;
	static int8_t x398 = -3;
	volatile uint16_t x399 = 6158U;
	uint32_t x400 = UINT32_MAX;
	uint32_t t93 = 60199382U;

	t93 = (((x397^x398)-x399)%x400);

	if (t93 != 4294961074U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x414 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t94 = -115;

	t94 = (((x413^x414)-x415)%x416);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x417 = UINT64_MAX;
	volatile int8_t x418 = -51;
	volatile uint8_t x420 = UINT8_MAX;

	t95 = (((x417^x418)-x419)%x420);

	if (t95 != 179LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x422 = 109LL;
	int16_t x423 = -1;
	static int8_t x424 = INT8_MIN;
	volatile int64_t t96 = 262001LL;

	t96 = (((x421^x422)-x423)%x424);

	if (t96 != -65LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = 174;
	uint32_t x426 = UINT32_MAX;
	volatile int8_t x427 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	volatile uint32_t t97 = 225273589U;

	t97 = (((x425^x426)-x427)%x428);

	if (t97 != 2147483601U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = 87U;
	volatile uint32_t x430 = 46U;
	static uint8_t x431 = 0U;

	t98 = (((x429^x430)-x431)%x432);

	if (t98 != 121U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = INT8_MIN;
	volatile uint16_t x434 = 4U;
	static int8_t x435 = 28;
	static uint16_t x436 = 55U;
	volatile int32_t t99 = -144021;

	t99 = (((x433^x434)-x435)%x436);

	if (t99 != -42) { NG(); } else { ; }
	
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

