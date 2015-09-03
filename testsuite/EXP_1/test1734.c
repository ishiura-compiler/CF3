#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static int32_t x9 = INT32_MAX;
int32_t x10 = -1;
int64_t x20 = -1LL;
int64_t t3 = 1LL;
int32_t t4 = 5405;
uint32_t x30 = 68093U;
int64_t x32 = -1LL;
int8_t x33 = INT8_MIN;
volatile int32_t t8 = -1;
uint32_t x46 = 56U;
int8_t x54 = INT8_MAX;
uint64_t x59 = 1452306319991862LLU;
uint64_t x60 = 30813888LLU;
uint32_t x61 = 12357773U;
int64_t x62 = 570553LL;
int8_t x64 = -1;
volatile uint32_t t14 = 1041U;
uint32_t x78 = 133158899U;
int32_t x80 = INT32_MAX;
volatile int16_t x81 = -1;
volatile int32_t t18 = 88986;
static int64_t t20 = 4247719656541001913LL;
volatile int64_t x95 = -1LL;
int64_t x114 = 4436662906LL;
int64_t t24 = -254733LL;
volatile uint64_t t25 = 2LLU;
int64_t x126 = INT64_MAX;
uint8_t x129 = UINT8_MAX;
static uint64_t x137 = 134300541979507LLU;
int16_t x139 = INT16_MIN;
int8_t x142 = 1;
volatile uint8_t x146 = UINT8_MAX;
uint64_t x148 = 229402355382LLU;
volatile uint8_t x156 = UINT8_MAX;
volatile int8_t x165 = INT8_MIN;
uint8_t x167 = 39U;
volatile int32_t x168 = INT32_MAX;
static volatile int32_t t37 = -8288504;
uint16_t x177 = 3117U;
uint8_t x178 = 1U;
uint8_t x182 = 2U;
int64_t t42 = 55308773338LL;
int32_t x193 = INT32_MIN;
int16_t x199 = INT16_MAX;
uint64_t x203 = 58255372LLU;
volatile uint64_t t45 = 17368182936625LLU;
static uint8_t x208 = UINT8_MAX;
int8_t x211 = -1;
uint64_t x212 = 13433493516601688LLU;
static uint64_t t47 = 61723153LLU;
int16_t x218 = INT16_MIN;
int64_t x230 = -1LL;
int16_t x235 = INT16_MIN;
static int64_t x238 = -2971104377614404122LL;
uint64_t x252 = 182996LLU;
uint64_t x253 = 647LLU;
uint32_t x257 = 52018038U;
int32_t x267 = INT32_MAX;
volatile int64_t x270 = INT64_MAX;
int32_t x271 = INT32_MIN;
int64_t t60 = 1923729LL;
uint64_t x273 = 222400998LLU;
static int32_t x281 = -15;
static int64_t t63 = -1128LL;
int8_t x288 = 52;
uint32_t t64 = 6U;
uint16_t x290 = UINT16_MAX;
static int64_t x296 = -2561605372190417627LL;
int64_t t66 = -771762288260875LL;
int8_t x298 = -1;
int64_t x303 = -60729370448LL;
int64_t x313 = INT64_MIN;
int32_t x314 = -114781;
volatile int8_t x318 = -1;
uint32_t t72 = 3855841U;
int8_t x326 = -1;
uint32_t t74 = 1928585638U;
uint8_t x330 = 6U;
uint16_t x337 = UINT16_MAX;
uint64_t t78 = 18LLU;
static volatile uint64_t x348 = UINT64_MAX;
uint64_t t79 = 89072LLU;
int8_t x349 = 0;
volatile uint32_t t80 = 134012U;
uint64_t x374 = UINT64_MAX;
static volatile uint32_t x384 = 735812U;
volatile int64_t t87 = -9114LL;
int8_t x387 = INT8_MAX;
volatile int64_t t88 = 1207537838LL;
uint8_t x393 = 1U;
volatile int64_t t90 = -17502694780135036LL;
int8_t x404 = -1;
static volatile uint32_t x406 = UINT32_MAX;
int32_t x421 = -4700505;
uint32_t x423 = 611804184U;
uint8_t x432 = 8U;


void f0(void) {
	uint16_t x1 = 9063U;
	volatile int32_t x2 = INT32_MIN;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 44715;

	t0 = (((x1&x2)/x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x11 = INT16_MIN;
	uint64_t x12 = 9824243LLU;
	volatile uint64_t t1 = 724388131LLU;

	t1 = (((x9&x10)/x11)%x12);

	if (t1 != 5976088LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	volatile uint16_t x14 = 1U;
	uint16_t x15 = 6276U;
	static volatile int16_t x16 = -1;
	int64_t t2 = -172232305168032814LL;

	t2 = (((x13&x14)/x15)%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -6;
	int16_t x18 = 0;
	static int8_t x19 = 5;

	t3 = (((x17&x18)/x19)%x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 2;
	int8_t x22 = -17;
	uint16_t x23 = 1U;
	static int8_t x24 = INT8_MIN;

	t4 = (((x21&x22)/x23)%x24);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 329U;
	int32_t x26 = -1;
	uint64_t x27 = 469LLU;
	static volatile uint64_t x28 = 7622557LLU;
	volatile uint64_t t5 = 4LLU;

	t5 = (((x25&x26)/x27)%x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x31 = 507696418225946LLU;
	volatile uint64_t t6 = 26551049LLU;

	t6 = (((x29&x30)/x31)%x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = 19;
	static volatile uint64_t x35 = 92569LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t7 = 13LLU;

	t7 = (((x33&x34)/x35)%x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -63;
	int32_t x38 = INT32_MAX;
	int16_t x39 = -1;
	int16_t x40 = INT16_MIN;

	t8 = (((x37&x38)/x39)%x40);

	if (t8 != -32705) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	uint16_t x47 = 10607U;
	uint8_t x48 = 3U;
	volatile uint32_t t9 = 32334508U;

	t9 = (((x45&x46)/x47)%x48);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -90;
	volatile uint8_t x50 = 59U;
	int64_t x51 = -3760371549LL;
	int64_t x52 = 527331448509212LL;
	int64_t t10 = -1179949721371911LL;

	t10 = (((x49&x50)/x51)%x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	int64_t x55 = -1LL;
	static int32_t x56 = -1;
	volatile uint64_t t11 = 13766820487LLU;

	t11 = (((x53&x54)/x55)%x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = INT64_MIN;
	uint8_t x58 = UINT8_MAX;
	volatile uint64_t t12 = 189898089972026LLU;

	t12 = (((x57&x58)/x59)%x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x63 = INT8_MAX;
	int64_t t13 = 313475798732LL;

	t13 = (((x61&x62)/x63)%x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 6065168;
	static uint32_t x66 = 665788U;
	static int32_t x67 = 61011456;
	volatile int32_t x68 = INT32_MIN;

	t14 = (((x65&x66)/x67)%x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = UINT64_MAX;
	static uint8_t x72 = 3U;
	uint64_t t15 = 46750652LLU;

	t15 = (((x69&x70)/x71)%x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	static uint64_t x74 = 108LLU;
	static uint16_t x75 = UINT16_MAX;
	int8_t x76 = INT8_MAX;
	uint64_t t16 = 486LLU;

	t16 = (((x73&x74)/x75)%x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -1;
	static int64_t x79 = INT64_MIN;
	static int64_t t17 = -168609078603202LL;

	t17 = (((x77&x78)/x79)%x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = INT16_MIN;
	uint16_t x83 = 11U;
	int8_t x84 = -1;

	t18 = (((x81&x82)/x83)%x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = INT64_MAX;
	uint32_t x86 = 3498687U;
	static int32_t x87 = INT32_MIN;
	int8_t x88 = -1;
	volatile int64_t t19 = -169397928542419662LL;

	t19 = (((x85&x86)/x87)%x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 6298U;
	int32_t x90 = -1;
	int64_t x91 = -355305628693LL;
	static int32_t x92 = INT32_MIN;

	t20 = (((x89&x90)/x91)%x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = -1;
	static uint16_t x94 = 28U;
	static int8_t x96 = INT8_MAX;
	volatile int64_t t21 = 1LL;

	t21 = (((x93&x94)/x95)%x96);

	if (t21 != -28LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	static volatile int8_t x106 = -35;
	volatile uint64_t x107 = 125099LLU;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t22 = 1870712439650LLU;

	t22 = (((x105&x106)/x107)%x108);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t x112 = -1;
	volatile int32_t t23 = 83689;

	t23 = (((x109&x110)/x111)%x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x113 = INT64_MAX;
	static volatile int32_t x115 = INT32_MIN;
	int16_t x116 = 82;

	t24 = (((x113&x114)/x115)%x116);

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = -977739893;
	int64_t x118 = -1LL;
	int64_t x119 = -3900574385186808LL;
	uint64_t x120 = 562764512LLU;

	t25 = (((x117&x118)/x119)%x120);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x121 = 12135U;
	volatile int32_t x122 = INT32_MIN;
	int8_t x123 = 1;
	uint16_t x124 = 4U;
	int32_t t26 = 78507707;

	t26 = (((x121&x122)/x123)%x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 1963783868U;
	uint32_t x127 = 1768565U;
	int64_t x128 = INT64_MIN;
	int64_t t27 = 107903949994735LL;

	t27 = (((x125&x126)/x127)%x128);

	if (t27 != 1110LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x130 = INT8_MAX;
	int32_t x131 = -1;
	int16_t x132 = INT16_MIN;
	volatile int32_t t28 = -912;

	t28 = (((x129&x130)/x131)%x132);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = -1LL;
	uint16_t x135 = 16206U;
	volatile int16_t x136 = INT16_MIN;
	int64_t t29 = -969214306831LL;

	t29 = (((x133&x134)/x135)%x136);

	if (t29 != 4LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = INT16_MIN;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t30 = 1129638748797285709LLU;

	t30 = (((x137&x138)/x139)%x140);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = -2225254LL;
	volatile int16_t x143 = INT16_MAX;
	int64_t x144 = 211LL;
	static volatile int64_t t31 = 54639751761LL;

	t31 = (((x141&x142)/x143)%x144);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	int16_t x147 = 8171;
	volatile uint64_t t32 = 353196LLU;

	t32 = (((x145&x146)/x147)%x148);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = -1;
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = 6156;
	uint64_t t33 = 2780583LLU;

	t33 = (((x149&x150)/x151)%x152);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = UINT16_MAX;
	static int64_t x154 = INT64_MIN;
	static int32_t x155 = INT32_MIN;
	volatile int64_t t34 = 16408736364LL;

	t34 = (((x153&x154)/x155)%x156);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	volatile int32_t x164 = INT32_MIN;
	int64_t t35 = -10714104LL;

	t35 = (((x161&x162)/x163)%x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x166 = 55U;
	int32_t t36 = 15;

	t36 = (((x165&x166)/x167)%x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x169 = 22U;
	volatile int16_t x170 = INT16_MIN;
	static int32_t x171 = 1;
	int32_t x172 = INT32_MIN;

	t37 = (((x169&x170)/x171)%x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = INT8_MIN;
	int64_t t38 = 755LL;

	t38 = (((x173&x174)/x175)%x176);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x179 = 509424U;
	int32_t x180 = INT32_MIN;
	static volatile uint32_t t39 = 2053120U;

	t39 = (((x177&x178)/x179)%x180);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = 3;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = -13360LL;
	static int64_t t40 = 159345824374201LL;

	t40 = (((x181&x182)/x183)%x184);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = 1892U;
	static int16_t x186 = INT16_MAX;
	volatile int16_t x187 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;
	int32_t t41 = 364682;

	t41 = (((x185&x186)/x187)%x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x189 = 966629580;
	int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MIN;
	int16_t x192 = -2;

	t42 = (((x189&x190)/x191)%x192);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MAX;
	uint32_t t43 = 0U;

	t43 = (((x193&x194)/x195)%x196);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = UINT64_MAX;
	uint32_t x198 = 18U;
	int64_t x200 = INT64_MIN;
	uint64_t t44 = 2587964150922172288LLU;

	t44 = (((x197&x198)/x199)%x200);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = 5043;
	uint32_t x202 = 16U;
	int8_t x204 = INT8_MIN;

	t45 = (((x201&x202)/x203)%x204);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	volatile int64_t t46 = -123761382586517LL;

	t46 = (((x205&x206)/x207)%x208);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = -1;
	volatile int16_t x210 = INT16_MAX;

	t47 = (((x209&x210)/x211)%x212);

	if (t47 != 2557475415401225LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x217 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	volatile int16_t x220 = 702;
	volatile int64_t t48 = 237973252492198311LL;

	t48 = (((x217&x218)/x219)%x220);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -22;
	int8_t x222 = INT8_MIN;
	static int8_t x223 = INT8_MIN;
	int8_t x224 = -36;
	int32_t t49 = -7807159;

	t49 = (((x221&x222)/x223)%x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MAX;
	int16_t x226 = INT16_MIN;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MAX;
	volatile int64_t t50 = -1LL;

	t50 = (((x225&x226)/x227)%x228);

	if (t50 != 25264385LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = 7LL;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = 26U;
	volatile uint64_t t51 = 2172703LLU;

	t51 = (((x229&x230)/x231)%x232);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MAX;
	static volatile int64_t x234 = INT64_MIN;
	uint8_t x236 = UINT8_MAX;
	static int64_t t52 = 1928103300977975LL;

	t52 = (((x233&x234)/x235)%x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = INT32_MIN;
	static volatile int32_t x239 = -54289;
	static volatile int16_t x240 = -1;
	int64_t t53 = 606556928980408395LL;

	t53 = (((x237&x238)/x239)%x240);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = -43228158389860LL;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MAX;
	volatile int64_t t54 = -285534779LL;

	t54 = (((x241&x242)/x243)%x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = UINT32_MAX;
	volatile uint32_t x250 = 931U;
	int8_t x251 = INT8_MIN;
	volatile uint64_t t55 = 22623LLU;

	t55 = (((x249&x250)/x251)%x252);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x254 = 14LLU;
	int16_t x255 = -1;
	int8_t x256 = -7;
	static uint64_t t56 = 322691388LLU;

	t56 = (((x253&x254)/x255)%x256);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x258 = -1;
	volatile uint8_t x259 = 53U;
	volatile int32_t x260 = -1;
	volatile uint32_t t57 = 4U;

	t57 = (((x257&x258)/x259)%x260);

	if (t57 != 981472U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = INT32_MIN;
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MAX;
	volatile uint32_t t58 = 6863U;

	t58 = (((x261&x262)/x263)%x264);

	if (t58 != 16909320U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MAX;
	uint8_t x268 = 3U;
	volatile int64_t t59 = -109958583568501432LL;

	t59 = (((x265&x266)/x267)%x268);

	if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = INT32_MAX;
	int32_t x272 = -13;

	t60 = (((x269&x270)/x271)%x272);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x274 = INT64_MAX;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -1;
	volatile uint64_t t61 = 3380421406LLU;

	t61 = (((x273&x274)/x275)%x276);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = 96718795203981LL;
	int16_t x278 = -1;
	static int32_t x279 = INT32_MIN;
	volatile int16_t x280 = 244;
	static volatile int64_t t62 = 1715066LL;

	t62 = (((x277&x278)/x279)%x280);

	if (t62 != -142LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MIN;
	uint8_t x284 = 1U;

	t63 = (((x281&x282)/x283)%x284);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = 375850;
	int32_t x286 = -1;
	uint32_t x287 = 1U;

	t64 = (((x285&x286)/x287)%x288);

	if (t64 != 46U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x289 = INT8_MAX;
	int16_t x291 = 14633;
	static uint32_t x292 = 3584U;
	static uint32_t t65 = 1935814U;

	t65 = (((x289&x290)/x291)%x292);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = -1;
	int32_t x294 = -21;
	uint8_t x295 = UINT8_MAX;

	t66 = (((x293&x294)/x295)%x296);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MIN;
	static volatile int32_t x299 = -1;
	int32_t x300 = INT32_MAX;
	volatile int32_t t67 = -602426;

	t67 = (((x297&x298)/x299)%x300);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	static uint32_t x304 = 11824U;
	volatile int64_t t68 = 382LL;

	t68 = (((x301&x302)/x303)%x304);

	if (t68 != 9172LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x305 = 56U;
	uint8_t x306 = 111U;
	volatile int8_t x307 = -18;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t69 = 483001U;

	t69 = (((x305&x306)/x307)%x308);

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x309 = INT64_MIN;
	static int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MIN;
	static int64_t t70 = -5LL;

	t70 = (((x309&x310)/x311)%x312);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	int64_t t71 = -79737376LL;

	t71 = (((x313&x314)/x315)%x316);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x317 = 1951094260U;
	int32_t x319 = -1;
	int16_t x320 = INT16_MAX;

	t72 = (((x317&x318)/x319)%x320);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MAX;
	volatile int64_t x322 = 1012464715483873212LL;
	int16_t x323 = INT16_MAX;
	uint8_t x324 = 6U;
	int64_t t73 = 9332850154LL;

	t73 = (((x321&x322)/x323)%x324);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x325 = INT32_MAX;
	static uint32_t x327 = 9664744U;
	uint32_t x328 = 939U;

	t74 = (((x325&x326)/x327)%x328);

	if (t74 != 222U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x329 = 28U;
	int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MIN;
	int64_t t75 = 11768LL;

	t75 = (((x329&x330)/x331)%x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = 11987;
	int64_t x334 = -1073735551481374LL;
	int16_t x335 = 749;
	static int8_t x336 = -1;
	volatile int64_t t76 = -138348128289LL;

	t76 = (((x333&x334)/x335)%x336);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x338 = INT8_MIN;
	volatile int16_t x339 = -2539;
	static int32_t x340 = INT32_MAX;
	int32_t t77 = -82298643;

	t77 = (((x337&x338)/x339)%x340);

	if (t77 != -25) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x341 = 2165LL;
	static volatile uint8_t x342 = 0U;
	uint64_t x343 = UINT64_MAX;
	int16_t x344 = INT16_MIN;

	t78 = (((x341&x342)/x343)%x344);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x345 = 79U;
	uint64_t x346 = 2396500858108094604LLU;
	int16_t x347 = -1;

	t79 = (((x345&x346)/x347)%x348);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x350 = 2198958U;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MIN;

	t80 = (((x349&x350)/x351)%x352);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x353 = 2916U;
	volatile int64_t x354 = 15283LL;
	uint32_t x355 = 14U;
	int32_t x356 = -92;
	volatile int64_t t81 = -109768LL;

	t81 = (((x353&x354)/x355)%x356);

	if (t81 != 19LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	static volatile int32_t x363 = INT32_MAX;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t82 = 48831587801668LLU;

	t82 = (((x361&x362)/x363)%x364);

	if (t82 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = INT32_MAX;
	uint64_t x367 = 557629488456046LLU;
	int8_t x368 = -55;
	volatile uint64_t t83 = 25LLU;

	t83 = (((x365&x366)/x367)%x368);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x369 = -2;
	static volatile int8_t x370 = INT8_MAX;
	int8_t x371 = -5;
	static uint64_t x372 = 169LLU;
	volatile uint64_t t84 = 1602114515586496LLU;

	t84 = (((x369&x370)/x371)%x372);

	if (t84 != 69LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x373 = 1U;
	static volatile int64_t x375 = -2246234LL;
	static int32_t x376 = INT32_MIN;
	static uint64_t t85 = 6937188000659LLU;

	t85 = (((x373&x374)/x375)%x376);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MIN;
	volatile int64_t x378 = -7110LL;
	int64_t x379 = 1946809LL;
	int64_t x380 = INT64_MIN;
	int64_t t86 = 775LL;

	t86 = (((x377&x378)/x379)%x380);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MAX;
	static volatile uint8_t x382 = 39U;
	static volatile int32_t x383 = 952386;

	t87 = (((x381&x382)/x383)%x384);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	uint8_t x388 = 67U;

	t88 = (((x385&x386)/x387)%x388);

	if (t88 != -42LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = 139;
	static uint8_t x391 = 11U;
	static int16_t x392 = INT16_MIN;
	int32_t t89 = 5068253;

	t89 = (((x389&x390)/x391)%x392);

	if (t89 != 11) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x394 = INT16_MIN;
	volatile int32_t x395 = -1;
	int64_t x396 = INT64_MIN;

	t90 = (((x393&x394)/x395)%x396);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = 1;
	volatile int16_t x399 = INT16_MAX;
	uint32_t x400 = 955U;
	volatile uint32_t t91 = 22269U;

	t91 = (((x397&x398)/x399)%x400);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = -1;
	volatile int64_t x402 = INT64_MIN;
	volatile int8_t x403 = INT8_MAX;
	int64_t t92 = 88173LL;

	t92 = (((x401&x402)/x403)%x404);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = -17359;
	static int16_t x407 = 1;
	int16_t x408 = INT16_MIN;
	uint32_t t93 = 1U;

	t93 = (((x405&x406)/x407)%x408);

	if (t93 != 15409U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = INT8_MIN;
	int8_t x412 = 42;
	volatile uint64_t t94 = 21508806661097632LLU;

	t94 = (((x409&x410)/x411)%x412);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MIN;
	static volatile uint64_t x414 = UINT64_MAX;
	volatile uint64_t x415 = 145LLU;
	static volatile uint8_t x416 = UINT8_MAX;
	uint64_t t95 = 0LLU;

	t95 = (((x413&x414)/x415)%x416);

	if (t95 != 183LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = -260;
	int64_t x418 = INT64_MAX;
	int8_t x419 = 62;
	volatile int64_t x420 = INT64_MIN;
	volatile int64_t t96 = -527077387062988LL;

	t96 = (((x417&x418)/x419)%x420);

	if (t96 != 148764065110560895LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x422 = -5009;
	static uint8_t x424 = 2U;
	static volatile uint32_t t97 = 2204209U;

	t97 = (((x421&x422)/x423)%x424);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x429 = -1;
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	int32_t t98 = -9538353;

	t98 = (((x429&x430)/x431)%x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x433 = 50;
	int8_t x434 = INT8_MAX;
	volatile int16_t x435 = INT16_MIN;
	uint8_t x436 = UINT8_MAX;
	int32_t t99 = -834;

	t99 = (((x433&x434)/x435)%x436);

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

