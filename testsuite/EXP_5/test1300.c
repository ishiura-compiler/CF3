#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int32_t t0 = -510;
int8_t x8 = 1;
volatile int16_t x11 = INT16_MAX;
int16_t x16 = -2;
uint64_t x24 = 361718227482147647LLU;
int64_t x30 = INT64_MAX;
volatile int32_t t7 = 28613;
int8_t x34 = -1;
int16_t x40 = -6;
int32_t t9 = -4108;
int8_t x41 = 0;
static int64_t x43 = INT64_MIN;
int32_t t12 = -816;
static volatile uint16_t x53 = UINT16_MAX;
static uint64_t x64 = 2838468349844003LLU;
int16_t x67 = -34;
uint64_t x69 = 2959302LLU;
uint64_t x71 = UINT64_MAX;
int16_t x73 = 56;
static int8_t x78 = INT8_MIN;
volatile int8_t x80 = -1;
volatile int32_t x81 = 12;
int8_t x89 = INT8_MAX;
volatile int8_t x96 = -10;
static int32_t x108 = -1;
uint64_t x114 = UINT64_MAX;
volatile int32_t t29 = 234;
uint8_t x122 = 1U;
uint32_t x124 = UINT32_MAX;
int32_t t31 = 18136625;
static volatile uint64_t x133 = 129270898536LLU;
static volatile int32_t x137 = INT32_MAX;
static volatile int32_t t35 = 818960621;
int16_t x146 = INT16_MAX;
int16_t x148 = INT16_MIN;
int16_t x152 = INT16_MAX;
int64_t t38 = 286920821999563LL;
int8_t x164 = INT8_MIN;
volatile int32_t t40 = 12743;
uint32_t t42 = 484U;
volatile uint64_t t44 = 258153287697525LLU;
uint16_t x191 = UINT16_MAX;
static int32_t t48 = 0;
int8_t x205 = INT8_MIN;
uint32_t x213 = 25778567U;
static int16_t x225 = -18;
volatile uint8_t x226 = 3U;
volatile int32_t t56 = -859781;
uint8_t x232 = 16U;
volatile int32_t x233 = -1;
int16_t x234 = -1;
int32_t t60 = -1;
uint8_t x247 = 108U;
volatile int32_t t61 = 3;
int8_t x259 = -1;
volatile int8_t x264 = -1;
uint16_t x265 = 0U;
int32_t x267 = 16253;
static volatile int32_t t66 = 33213;
volatile int64_t x274 = -362LL;
uint32_t x282 = 191U;
static volatile uint8_t x285 = UINT8_MAX;
static uint16_t x288 = UINT16_MAX;
static int8_t x290 = -22;
int16_t x300 = -242;
volatile uint32_t t74 = 315U;
int16_t x303 = 1;
uint64_t x316 = 21LLU;
int64_t x327 = INT64_MAX;
static int64_t x335 = INT64_MIN;
int8_t x348 = -11;
int16_t x352 = INT16_MAX;
static volatile int64_t t87 = 158033105710418378LL;
static uint16_t x355 = UINT16_MAX;
uint8_t x360 = 12U;
int32_t x366 = -58350;
volatile uint64_t x368 = UINT64_MAX;
int16_t x373 = 7;
uint32_t x375 = 55544404U;
static volatile int32_t t93 = -51;
int8_t x391 = INT8_MIN;
volatile int32_t t98 = 3;
int64_t x398 = INT64_MIN;


void f0(void) {
	static uint8_t x1 = 2U;
	int32_t x2 = INT32_MAX;
	int64_t x3 = INT64_MIN;

	t0 = (x1^((x2==x3)<x4));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 190377LL;
	volatile uint16_t x6 = 5U;
	static int8_t x7 = INT8_MAX;
	int64_t t1 = 491586LL;

	t1 = (x5^((x6==x7)<x8));

	if (t1 != 190376LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -155195;
	int16_t x10 = INT16_MIN;
	uint32_t x12 = 1827881U;
	volatile int32_t t2 = 1989340;

	t2 = (x9^((x10==x11)<x12));

	if (t2 != -155196) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -11122;
	volatile int32_t t3 = 194616798;

	t3 = (x13^((x14==x15)<x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MIN;
	int32_t x20 = -1;
	volatile int32_t t4 = -7491;

	t4 = (x17^((x18==x19)<x20));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static int16_t x22 = INT16_MIN;
	int16_t x23 = 1618;
	static int32_t t5 = 398;

	t5 = (x21^((x22==x23)<x24));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint16_t x26 = 3479U;
	volatile uint16_t x27 = 270U;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 206;

	t6 = (x25^((x26==x27)<x28));

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -15;
	volatile int8_t x31 = -10;
	int64_t x32 = INT64_MIN;

	t7 = (x29^((x30==x31)<x32));

	if (t7 != -15) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	int32_t x35 = INT32_MAX;
	int16_t x36 = 19;
	uint32_t t8 = 13U;

	t8 = (x33^((x34==x35)<x36));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = -213516;
	int8_t x39 = INT8_MAX;

	t9 = (x37^((x38==x39)<x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = UINT32_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -13;

	t10 = (x41^((x42==x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int64_t x46 = INT64_MIN;
	static uint16_t x47 = 530U;
	volatile uint16_t x48 = 6791U;
	static volatile int32_t t11 = -477184;

	t11 = (x45^((x46==x47)<x48));

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MAX;
	int8_t x51 = -56;
	int8_t x52 = INT8_MIN;

	t12 = (x49^((x50==x51)<x52));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MAX;
	int32_t t13 = -485;

	t13 = (x53^((x54==x55)<x56));

	if (t13 != 65534) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 11715613LLU;
	int8_t x58 = -34;
	volatile int64_t x59 = INT64_MIN;
	volatile uint16_t x60 = 290U;
	static uint64_t t14 = 49390529027882LLU;

	t14 = (x57^((x58==x59)<x60));

	if (t14 != 11715612LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 77015020664LLU;
	volatile uint8_t x62 = 1U;
	int32_t x63 = INT32_MIN;
	uint64_t t15 = 53LLU;

	t15 = (x61^((x62==x63)<x64));

	if (t15 != 77015020665LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	static volatile int64_t x66 = -6851719LL;
	static uint8_t x68 = 0U;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x65^((x66==x67)<x68));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -1LL;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 1041321728384867LLU;

	t17 = (x69^((x70==x71)<x72));

	if (t17 != 2959303LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 43342763915972LLU;
	static uint8_t x75 = 6U;
	uint64_t x76 = UINT64_MAX;
	int32_t t18 = 51601450;

	t18 = (x73^((x74==x75)<x76));

	if (t18 != 57) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int8_t x79 = -55;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x77^((x78==x79)<x80));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = -30;
	int64_t x83 = INT64_MIN;
	volatile int64_t x84 = INT64_MIN;
	static volatile int32_t t20 = 2;

	t20 = (x81^((x82==x83)<x84));

	if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -190;
	static int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -65568;

	t21 = (x85^((x86==x87)<x88));

	if (t21 != -190) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = 825;
	static int16_t x91 = 1077;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -81350;

	t22 = (x89^((x90==x91)<x92));

	if (t22 != 126) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 39LLU;
	uint32_t x94 = 9126763U;
	static volatile int32_t x95 = INT32_MIN;
	volatile uint64_t t23 = 967825LLU;

	t23 = (x93^((x94==x95)<x96));

	if (t23 != 39LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = -5;
	int64_t x99 = -1LL;
	int64_t x100 = INT64_MIN;
	static volatile int32_t t24 = -48;

	t24 = (x97^((x98==x99)<x100));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 1U;
	static volatile int8_t x102 = 0;
	uint32_t x103 = 106U;
	int64_t x104 = -1LL;
	volatile int32_t t25 = 70500340;

	t25 = (x101^((x102==x103)<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint16_t x106 = 904U;
	uint64_t x107 = 1028058510155590889LLU;
	static int32_t t26 = -8561972;

	t26 = (x105^((x106==x107)<x108));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = 922868U;
	int8_t x111 = 1;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = -118392;

	t27 = (x109^((x110==x111)<x112));

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 8104U;
	int64_t x115 = 13722765253LL;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -1;

	t28 = (x113^((x114==x115)<x116));

	if (t28 != 8105) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = UINT8_MAX;
	int8_t x118 = 0;
	volatile int16_t x119 = INT16_MAX;
	uint8_t x120 = 4U;

	t29 = (x117^((x118==x119)<x120));

	if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 8;
	int8_t x123 = -1;
	volatile int32_t t30 = 250899;

	t30 = (x121^((x122==x123)<x124));

	if (t30 != 9) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int64_t x126 = -495LL;
	int16_t x127 = -9;
	uint64_t x128 = 326207639701800LLU;

	t31 = (x125^((x126==x127)<x128));

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 203412;

	t32 = (x129^((x130==x131)<x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	volatile uint64_t x136 = 5298LLU;
	volatile uint64_t t33 = 1LLU;

	t33 = (x133^((x134==x135)<x136));

	if (t33 != 129270898537LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 3916886329244369120LLU;
	int32_t x139 = INT32_MIN;
	volatile int32_t x140 = -28803553;
	int32_t t34 = INT32_MAX;

	t34 = (x137^((x138==x139)<x140));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 0;
	int16_t x142 = INT16_MAX;
	int8_t x143 = -5;
	static uint8_t x144 = 5U;

	t35 = (x141^((x142==x143)<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -60;
	int16_t x147 = -6468;
	volatile int32_t t36 = 161157;

	t36 = (x145^((x146==x147)<x148));

	if (t36 != -60) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x149 = INT8_MIN;
	static uint16_t x150 = 3U;
	uint16_t x151 = 2268U;
	volatile int32_t t37 = -265865903;

	t37 = (x149^((x150==x151)<x152));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -136613571LL;
	static volatile int32_t x154 = -1;
	int32_t x155 = -1495;
	int8_t x156 = INT8_MAX;

	t38 = (x153^((x154==x155)<x156));

	if (t38 != -136613572LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint8_t x158 = UINT8_MAX;
	uint8_t x159 = UINT8_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -489505;

	t39 = (x157^((x158==x159)<x160));

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 0;
	int64_t x162 = -1LL;
	int8_t x163 = INT8_MIN;

	t40 = (x161^((x162==x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint8_t x166 = 1U;
	int64_t x167 = -8629933774032LL;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = -12124888;

	t41 = (x165^((x166==x167)<x168));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 44U;
	int32_t x170 = INT32_MIN;
	static uint8_t x171 = 5U;
	volatile int64_t x172 = 33870466849334677LL;

	t42 = (x169^((x170==x171)<x172));

	if (t42 != 45U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MIN;
	volatile uint16_t x175 = 670U;
	volatile uint32_t x176 = 330931556U;
	static int64_t t43 = -1539149957228768LL;

	t43 = (x173^((x174==x175)<x176));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 1751845221314LLU;
	static int32_t x178 = INT32_MAX;
	int32_t x179 = 1;
	volatile int32_t x180 = INT32_MIN;

	t44 = (x177^((x178==x179)<x180));

	if (t44 != 1751845221314LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 9448689392103LLU;
	int32_t x182 = INT32_MIN;
	static int8_t x183 = INT8_MIN;
	int32_t x184 = -18057;
	static uint64_t t45 = 41796LLU;

	t45 = (x181^((x182==x183)<x184));

	if (t45 != 9448689392103LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = 1496U;
	volatile int16_t x188 = -1;
	int32_t t46 = 3280;

	t46 = (x185^((x186==x187)<x188));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 1;
	volatile int16_t x190 = -1;
	int16_t x192 = 1;
	int32_t t47 = 0;

	t47 = (x189^((x190==x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 25343U;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 248422391699LLU;
	int16_t x196 = INT16_MIN;

	t48 = (x193^((x194==x195)<x196));

	if (t48 != 25343) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static int32_t x198 = INT32_MAX;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = -32545025946305LL;
	volatile int32_t t49 = 8256;

	t49 = (x197^((x198==x199)<x200));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 269512671U;
	int32_t x202 = -318860;
	static int8_t x203 = 0;
	static volatile int32_t x204 = INT32_MIN;
	volatile uint32_t t50 = 3179259U;

	t50 = (x201^((x202==x203)<x204));

	if (t50 != 269512671U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x206 = 50U;
	static int64_t x207 = -1LL;
	int64_t x208 = INT64_MIN;
	int32_t t51 = 1;

	t51 = (x205^((x206==x207)<x208));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 4U;
	uint32_t x210 = 3388U;
	uint8_t x211 = UINT8_MAX;
	static int8_t x212 = INT8_MAX;
	int32_t t52 = 12918042;

	t52 = (x209^((x210==x211)<x212));

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MIN;
	int8_t x215 = -1;
	int32_t x216 = 13;
	volatile uint32_t t53 = 5144U;

	t53 = (x213^((x214==x215)<x216));

	if (t53 != 25778566U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 4U;
	uint32_t x218 = 4947521U;
	int16_t x219 = -3750;
	int16_t x220 = -100;
	static int32_t t54 = -26461272;

	t54 = (x217^((x218==x219)<x220));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MAX;
	static int64_t x224 = 132LL;
	static volatile int32_t t55 = -1874;

	t55 = (x221^((x222==x223)<x224));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x227 = 258U;
	volatile int8_t x228 = INT8_MIN;

	t56 = (x225^((x226==x227)<x228));

	if (t56 != -18) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 3029;
	int8_t x230 = -1;
	static int8_t x231 = INT8_MIN;
	volatile int32_t t57 = 45;

	t57 = (x229^((x230==x231)<x232));

	if (t57 != 3028) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x235 = -29;
	uint8_t x236 = 45U;
	volatile int32_t t58 = 1;

	t58 = (x233^((x234==x235)<x236));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 1U;
	int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	volatile int32_t x240 = -1;
	int32_t t59 = 632989402;

	t59 = (x237^((x238==x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MAX;
	static uint32_t x242 = 1994050443U;
	volatile int64_t x243 = -8505993328343LL;
	volatile int64_t x244 = INT64_MIN;

	t60 = (x241^((x242==x243)<x244));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 22;
	uint64_t x246 = UINT64_MAX;
	uint8_t x248 = 58U;

	t61 = (x245^((x246==x247)<x248));

	if (t61 != 23) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	static int64_t x250 = 597529917802450424LL;
	static uint8_t x251 = 52U;
	static int64_t x252 = -700731839148LL;
	static volatile int32_t t62 = 195;

	t62 = (x249^((x250==x251)<x252));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1LL;
	uint64_t x254 = 469LLU;
	volatile int32_t x255 = INT32_MAX;
	uint16_t x256 = 2U;
	static volatile int64_t t63 = 23292320353897493LL;

	t63 = (x253^((x254==x255)<x256));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	volatile int32_t x258 = INT32_MIN;
	uint16_t x260 = UINT16_MAX;
	int64_t t64 = 12965471863032558LL;

	t64 = (x257^((x258==x259)<x260));

	if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	int8_t x262 = -1;
	static uint64_t x263 = UINT64_MAX;
	static volatile int32_t t65 = -104560457;

	t65 = (x261^((x262==x263)<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int32_t x268 = 3442495;

	t66 = (x265^((x266==x267)<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 4U;
	uint8_t x270 = UINT8_MAX;
	int8_t x271 = -31;
	volatile int32_t x272 = 0;
	int32_t t67 = -1;

	t67 = (x269^((x270==x271)<x272));

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 76U;
	int32_t x275 = INT32_MAX;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t68 = 265041447U;

	t68 = (x273^((x274==x275)<x276));

	if (t68 != 76U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	volatile int64_t x278 = -217390LL;
	int8_t x279 = -13;
	static uint64_t x280 = UINT64_MAX;
	static int32_t t69 = -1;

	t69 = (x277^((x278==x279)<x280));

	if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 105U;
	volatile int16_t x283 = INT16_MIN;
	static int32_t x284 = 780302;
	static int32_t t70 = -374184;

	t70 = (x281^((x282==x283)<x284));

	if (t70 != 104) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -1;
	int16_t x287 = -8;
	int32_t t71 = -384;

	t71 = (x285^((x286==x287)<x288));

	if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 3U;
	static int16_t x291 = INT16_MIN;
	int8_t x292 = -5;
	int32_t t72 = 76209;

	t72 = (x289^((x290==x291)<x292));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = -7600938967LL;
	static volatile int16_t x294 = INT16_MIN;
	int16_t x295 = 166;
	uint16_t x296 = 335U;
	volatile int64_t t73 = -636161247546222LL;

	t73 = (x293^((x294==x295)<x296));

	if (t73 != -7600938968LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 216880U;
	int32_t x298 = INT32_MIN;
	volatile int16_t x299 = INT16_MIN;

	t74 = (x297^((x298==x299)<x300));

	if (t74 != 216880U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 25933U;
	int8_t x302 = INT8_MIN;
	uint64_t x304 = 32820656328LLU;
	int32_t t75 = -1896;

	t75 = (x301^((x302==x303)<x304));

	if (t75 != 25932) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = -1;
	volatile int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	static int32_t t76 = -144262192;

	t76 = (x305^((x306==x307)<x308));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int32_t x310 = -858;
	int8_t x311 = INT8_MAX;
	static int8_t x312 = -1;
	volatile int32_t t77 = INT32_MAX;

	t77 = (x309^((x310==x311)<x312));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	uint8_t x314 = 10U;
	int8_t x315 = -1;
	int32_t t78 = -4;

	t78 = (x313^((x314==x315)<x316));

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 3U;
	int8_t x318 = INT8_MAX;
	static uint8_t x319 = UINT8_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -6094;

	t79 = (x317^((x318==x319)<x320));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	static int16_t x322 = INT16_MIN;
	int8_t x323 = 1;
	uint32_t x324 = 185326U;
	int32_t t80 = -3373;

	t80 = (x321^((x322==x323)<x324));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int64_t x326 = 9LL;
	uint16_t x328 = UINT16_MAX;
	static int32_t t81 = 5;

	t81 = (x325^((x326==x327)<x328));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = UINT64_MAX;
	uint16_t x330 = 2851U;
	uint32_t x331 = 4759647U;
	static volatile int16_t x332 = INT16_MIN;
	static uint64_t t82 = UINT64_MAX;

	t82 = (x329^((x330==x331)<x332));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	static uint8_t x334 = 8U;
	uint64_t x336 = UINT64_MAX;
	static int32_t t83 = -419751;

	t83 = (x333^((x334==x335)<x336));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = 16159000;
	static int32_t x338 = -1;
	int64_t x339 = -1LL;
	int64_t x340 = -4528LL;
	int32_t t84 = -141;

	t84 = (x337^((x338==x339)<x340));

	if (t84 != 16159000) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = -69;
	volatile int64_t x343 = INT64_MIN;
	static uint8_t x344 = 2U;
	static volatile int32_t t85 = -6094;

	t85 = (x341^((x342==x343)<x344));

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 48U;
	uint32_t x346 = 698790U;
	static int32_t x347 = INT32_MAX;
	uint32_t t86 = 7U;

	t86 = (x345^((x346==x347)<x348));

	if (t86 != 48U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;

	t87 = (x349^((x350==x351)<x352));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 160180849U;
	volatile uint32_t x354 = 30027694U;
	int8_t x356 = 2;
	static volatile uint32_t t88 = 15742481U;

	t88 = (x353^((x354==x355)<x356));

	if (t88 != 160180848U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	static int8_t x358 = 3;
	uint32_t x359 = UINT32_MAX;
	static int32_t t89 = -15609016;

	t89 = (x357^((x358==x359)<x360));

	if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	int64_t x362 = INT64_MAX;
	uint64_t x363 = 22178LLU;
	int16_t x364 = 1431;
	volatile int32_t t90 = 156580502;

	t90 = (x361^((x362==x363)<x364));

	if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 347580LL;
	int16_t x367 = -1;
	volatile int64_t t91 = 389783314589551LL;

	t91 = (x365^((x366==x367)<x368));

	if (t91 != 347581LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	uint8_t x370 = 6U;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x369^((x370==x371)<x372));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = UINT64_MAX;
	static volatile int32_t x376 = -30131860;

	t93 = (x373^((x374==x375)<x376));

	if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 2037870067U;
	static uint8_t x378 = 23U;
	int16_t x379 = INT16_MIN;
	int8_t x380 = 12;
	static uint32_t t94 = 7344520U;

	t94 = (x377^((x378==x379)<x380));

	if (t94 != 2037870066U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	static volatile int32_t x384 = INT32_MIN;
	int32_t t95 = INT32_MIN;

	t95 = (x381^((x382==x383)<x384));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -1;
	volatile uint32_t x386 = 154440U;
	int64_t x387 = INT64_MIN;
	uint16_t x388 = 0U;
	int32_t t96 = -56;

	t96 = (x385^((x386==x387)<x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	uint64_t x390 = 104LLU;
	int16_t x392 = 195;
	static int32_t t97 = -9148891;

	t97 = (x389^((x390==x391)<x392));

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MAX;
	static volatile int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MAX;

	t98 = (x393^((x394==x395)<x396));

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 2447;
	int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 192793;

	t99 = (x397^((x398==x399)<x400));

	if (t99 != 2447) { NG(); } else { ; }
	
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

