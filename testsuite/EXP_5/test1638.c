#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MAX;
int32_t t2 = 625068425;
int16_t x17 = 112;
static uint8_t x18 = 1U;
static uint64_t x35 = 9425723LLU;
int8_t x56 = -1;
int32_t t13 = -435048066;
uint64_t x59 = UINT64_MAX;
uint32_t t14 = 77476638U;
int32_t x67 = 535900121;
int8_t x68 = INT8_MIN;
volatile int64_t t17 = 27433850978LL;
static int16_t x76 = 3859;
static volatile uint8_t x81 = UINT8_MAX;
int8_t x83 = INT8_MIN;
int32_t t22 = -6;
volatile int32_t t23 = 509;
int16_t x98 = -1;
volatile int8_t x100 = -1;
volatile int64_t t24 = 128317624630LL;
volatile int16_t x106 = -1;
volatile int64_t t29 = 974926209756LL;
int64_t x121 = -15893425609235090LL;
int8_t x134 = 0;
int32_t x135 = -1;
uint8_t x136 = 5U;
static volatile int32_t t33 = 9656151;
int8_t x139 = -1;
static int16_t x140 = INT16_MAX;
uint64_t x143 = 6316752004177LLU;
static uint32_t x156 = UINT32_MAX;
static int8_t x157 = 1;
int16_t x158 = INT16_MAX;
int16_t x163 = INT16_MAX;
int64_t x164 = -12075612208LL;
int8_t x167 = INT8_MAX;
uint8_t x175 = UINT8_MAX;
int64_t x182 = -1LL;
static volatile int8_t x186 = -1;
int32_t t47 = -23258390;
int32_t t48 = 116;
volatile int8_t x197 = -1;
int32_t x198 = 564787188;
int32_t t49 = 1926;
int64_t x201 = INT64_MIN;
static uint64_t x202 = 95LLU;
int32_t t52 = 1795;
uint8_t x216 = UINT8_MAX;
int16_t x221 = INT16_MIN;
volatile int32_t x223 = 876;
int8_t x229 = INT8_MIN;
volatile int8_t x234 = INT8_MAX;
static int8_t x248 = INT8_MAX;
static uint64_t t61 = 1458324526395334331LLU;
uint8_t x251 = 92U;
int32_t x254 = INT32_MIN;
int32_t t64 = 26995806;
static uint8_t x272 = UINT8_MAX;
volatile int32_t t67 = 34785566;
int32_t x278 = -1;
static int64_t x280 = -308629461602LL;
int8_t x285 = INT8_MIN;
uint8_t x288 = UINT8_MAX;
int16_t x300 = -1;
volatile int32_t x313 = -2740345;
static uint64_t x314 = 16012393759687817LLU;
uint64_t x316 = 123503441315LLU;
uint32_t x329 = 6997526U;
static uint32_t x331 = 25292328U;
int8_t x335 = INT8_MIN;
uint32_t x337 = 1U;
static uint32_t t84 = 43964U;
static volatile uint64_t x349 = 25LLU;
volatile uint32_t x360 = UINT32_MAX;
int32_t x363 = INT32_MIN;
int32_t x370 = -57795326;
int32_t t92 = 53;
int32_t x373 = -1;
static volatile int32_t t94 = -17;
volatile uint64_t x382 = 561295562578851LLU;
int32_t x389 = INT32_MIN;
volatile uint64_t t98 = UINT64_MAX;
volatile int32_t x397 = 7853169;
int32_t t99 = -5;


void f0(void) {
	static volatile uint8_t x1 = 109U;
	int8_t x3 = 15;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -232524;

	t0 = (x1^((x2<=x3)<x4));

	if (t0 != 108) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint16_t x6 = 19U;
	int16_t x7 = 242;
	static uint32_t x8 = 5U;
	int64_t t1 = 3070658739349LL;

	t1 = (x5^((x6<=x7)<x8));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	static uint32_t x10 = 2708U;
	uint8_t x11 = 1U;
	uint32_t x12 = UINT32_MAX;

	t2 = (x9^((x10<=x11)<x12));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint8_t x14 = 79U;
	int8_t x15 = 2;
	int64_t x16 = 1234974820880808935LL;
	volatile int32_t t3 = -39500808;

	t3 = (x13^((x14<=x15)<x16));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = 343234438786867983LL;
	volatile int32_t x20 = -1;
	volatile int32_t t4 = 4383;

	t4 = (x17^((x18<=x19)<x20));

	if (t4 != 112) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	int64_t x22 = -1LL;
	int32_t x23 = 24;
	int32_t x24 = INT32_MAX;
	volatile int64_t t5 = -1271LL;

	t5 = (x21^((x22<=x23)<x24));

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MAX;
	static int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -23;

	t6 = (x25^((x26<=x27)<x28));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -3686;
	volatile uint8_t x30 = 10U;
	volatile int16_t x31 = 5739;
	int8_t x32 = INT8_MAX;
	int32_t t7 = -1154;

	t7 = (x29^((x30<=x31)<x32));

	if (t7 != -3685) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 49LL;
	static uint64_t x34 = UINT64_MAX;
	int64_t x36 = -1LL;
	int64_t t8 = 17702LL;

	t8 = (x33^((x34<=x35)<x36));

	if (t8 != 49LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MAX;
	int64_t x39 = -1LL;
	int8_t x40 = -3;
	volatile int32_t t9 = INT32_MIN;

	t9 = (x37^((x38<=x39)<x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 0;
	static volatile uint16_t x42 = 42U;
	uint16_t x43 = UINT16_MAX;
	static int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 302704556;

	t10 = (x41^((x42<=x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = 10260414294478867LL;
	int16_t x47 = INT16_MIN;
	static volatile int8_t x48 = 2;
	volatile int64_t t11 = -2005781031LL;

	t11 = (x45^((x46<=x47)<x48));

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MAX;
	volatile int32_t x51 = INT32_MAX;
	int16_t x52 = -423;
	int64_t t12 = INT64_MIN;

	t12 = (x49^((x50<=x51)<x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1U;
	int16_t x54 = 3;
	int32_t x55 = -144205;

	t13 = (x53^((x54<=x55)<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = 255421U;
	static int8_t x58 = 17;
	uint16_t x60 = 1023U;

	t14 = (x57^((x58<=x59)<x60));

	if (t14 != 255420U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1782786452LLU;
	int32_t x62 = INT32_MIN;
	static int8_t x63 = -6;
	int64_t x64 = 1108097274733LL;
	uint64_t t15 = 56407929443469382LLU;

	t15 = (x61^((x62<=x63)<x64));

	if (t15 != 1782786453LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = INT32_MAX;
	static volatile int32_t t16 = 19596106;

	t16 = (x65^((x66<=x67)<x68));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 1LL;
	int8_t x70 = INT8_MAX;
	uint8_t x71 = UINT8_MAX;
	int8_t x72 = INT8_MIN;

	t17 = (x69^((x70<=x71)<x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 6U;
	int32_t x74 = -6282;
	static int16_t x75 = INT16_MAX;
	int32_t t18 = 942622887;

	t18 = (x73^((x74<=x75)<x76));

	if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int16_t x78 = INT16_MIN;
	int16_t x79 = -1;
	uint64_t x80 = 302LLU;
	int32_t t19 = -16197498;

	t19 = (x77^((x78<=x79)<x80));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 1U;
	int32_t x84 = 2571;
	volatile int32_t t20 = 695299288;

	t20 = (x81^((x82<=x83)<x84));

	if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 2597723438983591396LLU;
	int16_t x86 = INT16_MIN;
	int32_t x87 = 14063;
	int32_t x88 = INT32_MIN;
	uint64_t t21 = 112784343LLU;

	t21 = (x85^((x86<=x87)<x88));

	if (t21 != 2597723438983591396LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = INT32_MIN;
	uint32_t x92 = 1951337503U;

	t22 = (x89^((x90<=x91)<x92));

	if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	static uint32_t x94 = 349640298U;
	uint8_t x95 = UINT8_MAX;
	int8_t x96 = -1;

	t23 = (x93^((x94<=x95)<x96));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -79350550811421LL;
	static volatile int16_t x99 = 34;

	t24 = (x97^((x98<=x99)<x100));

	if (t24 != -79350550811421LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 85U;
	int32_t x102 = INT32_MAX;
	static volatile int8_t x103 = 1;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -1;

	t25 = (x101^((x102<=x103)<x104));

	if (t25 != 85) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int32_t x107 = INT32_MAX;
	int8_t x108 = 23;
	int64_t t26 = -1048807273622683456LL;

	t26 = (x105^((x106<=x107)<x108));

	if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = 0;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = -12;
	int64_t t27 = INT64_MIN;

	t27 = (x109^((x110<=x111)<x112));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 97U;
	static int32_t x114 = -1;
	int32_t x115 = INT32_MAX;
	volatile uint64_t x116 = 620125019909532LLU;
	volatile int32_t t28 = -15;

	t28 = (x113^((x114<=x115)<x116));

	if (t28 != 96) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -48578538962LL;
	int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	static uint16_t x120 = 24460U;

	t29 = (x117^((x118<=x119)<x120));

	if (t29 != -48578538961LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 1782458U;
	int32_t x123 = -7938003;
	int8_t x124 = INT8_MIN;
	int64_t t30 = -1719LL;

	t30 = (x121^((x122<=x123)<x124));

	if (t30 != -15893425609235090LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	static uint16_t x127 = 285U;
	int16_t x128 = -2343;
	uint64_t t31 = UINT64_MAX;

	t31 = (x125^((x126<=x127)<x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MAX;
	uint32_t x131 = UINT32_MAX;
	static int16_t x132 = -430;
	volatile int32_t t32 = 118;

	t32 = (x129^((x130<=x131)<x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;

	t33 = (x133^((x134<=x135)<x136));

	if (t33 != 32766) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = 1319491264941313361LL;
	static volatile int32_t t34 = -161;

	t34 = (x137^((x138<=x139)<x140));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 20076557290166871LLU;
	int16_t x142 = 16;
	static volatile uint64_t x144 = 33172396232LLU;
	static uint64_t t35 = 1344LLU;

	t35 = (x141^((x142<=x143)<x144));

	if (t35 != 20076557290166870LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = -40085;
	volatile int8_t x147 = 10;
	static int16_t x148 = -1;
	static int32_t t36 = 5;

	t36 = (x145^((x146<=x147)<x148));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MAX;
	uint32_t x150 = 1U;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = 509546272;

	t37 = (x149^((x150<=x151)<x152));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 3U;
	int32_t x154 = -1;
	volatile int64_t x155 = -1LL;
	volatile int32_t t38 = 316;

	t38 = (x153^((x154<=x155)<x156));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x159 = INT16_MIN;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = -52;

	t39 = (x157^((x158<=x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x162 = 0;
	volatile int32_t t40 = -692987756;

	t40 = (x161^((x162<=x163)<x164));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MAX;
	static int8_t x168 = INT8_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x165^((x166<=x167)<x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	uint16_t x171 = 878U;
	int16_t x172 = INT16_MIN;
	static int32_t t42 = INT32_MIN;

	t42 = (x169^((x170<=x171)<x172));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -25;
	static int16_t x174 = -1;
	uint64_t x176 = 1628298672939937219LLU;
	volatile int32_t t43 = -647741;

	t43 = (x173^((x174<=x175)<x176));

	if (t43 != -26) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	static volatile int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	int64_t x180 = -20301958437901160LL;
	volatile int32_t t44 = -190059;

	t44 = (x177^((x178<=x179)<x180));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1065035186526225LL;
	int32_t x183 = -1;
	uint64_t x184 = 56112LLU;
	volatile int64_t t45 = 18720017LL;

	t45 = (x181^((x182<=x183)<x184));

	if (t45 != -1065035186526226LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	volatile int8_t x187 = INT8_MIN;
	static int32_t x188 = INT32_MAX;
	int32_t t46 = -987469;

	t46 = (x185^((x186<=x187)<x188));

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = -1;
	volatile uint16_t x192 = UINT16_MAX;

	t47 = (x189^((x190<=x191)<x192));

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 14;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = 1109U;
	volatile uint32_t x196 = 146U;

	t48 = (x193^((x194<=x195)<x196));

	if (t48 != 15) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x199 = 1132294U;
	volatile int16_t x200 = 227;

	t49 = (x197^((x198<=x199)<x200));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = INT8_MIN;
	static uint64_t x204 = UINT64_MAX;
	static int64_t t50 = 338332LL;

	t50 = (x201^((x202<=x203)<x204));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	int32_t t51 = 6653;

	t51 = (x205^((x206<=x207)<x208));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = 1;
	int32_t x211 = INT32_MAX;
	uint16_t x212 = 591U;

	t52 = (x209^((x210<=x211)<x212));

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 2578945834340LLU;
	uint32_t x214 = 14817U;
	int32_t x215 = -7362208;
	volatile uint64_t t53 = 22179LLU;

	t53 = (x213^((x214<=x215)<x216));

	if (t53 != 2578945834341LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = -1LL;
	int8_t x219 = INT8_MIN;
	volatile int32_t x220 = -496;
	static volatile int32_t t54 = -94;

	t54 = (x217^((x218<=x219)<x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MAX;
	int32_t x224 = 18;
	int32_t t55 = 52080;

	t55 = (x221^((x222<=x223)<x224));

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;
	static int64_t t56 = -14167338586108878LL;

	t56 = (x225^((x226<=x227)<x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = 1131;
	int16_t x232 = INT16_MAX;
	int32_t t57 = -2;

	t57 = (x229^((x230<=x231)<x232));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -462;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = 1466239;

	t58 = (x233^((x234<=x235)<x236));

	if (t58 != -461) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	uint32_t x238 = 4U;
	static volatile uint32_t x239 = 23U;
	int64_t x240 = 167411886765118LL;
	int64_t t59 = -7313087911533843LL;

	t59 = (x237^((x238<=x239)<x240));

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MIN;
	static uint64_t x243 = UINT64_MAX;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 3286;

	t60 = (x241^((x242<=x243)<x244));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 251347372253126048LLU;
	int8_t x246 = INT8_MAX;
	volatile int16_t x247 = -1;

	t61 = (x245^((x246<=x247)<x248));

	if (t61 != 251347372253126049LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MAX;
	static volatile int8_t x250 = INT8_MIN;
	int64_t x252 = 37LL;
	int32_t t62 = 2418;

	t62 = (x249^((x250<=x251)<x252));

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 1LLU;
	int32_t x255 = -1;
	static int32_t x256 = INT32_MAX;
	volatile uint64_t t63 = 69502910305595LLU;

	t63 = (x253^((x254<=x255)<x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x258 = 46253U;
	int64_t x259 = INT64_MAX;
	static int32_t x260 = 225355;

	t64 = (x257^((x258<=x259)<x260));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MAX;
	static int16_t x262 = INT16_MAX;
	volatile int64_t x263 = INT64_MAX;
	volatile int64_t x264 = -1LL;
	int32_t t65 = -452483;

	t65 = (x261^((x262<=x263)<x264));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -218892551727815230LL;
	uint16_t x266 = 4U;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = -1;
	static int64_t t66 = 1145761801239070546LL;

	t66 = (x265^((x266<=x267)<x268));

	if (t66 != -218892551727815230LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint8_t x270 = 1U;
	volatile int16_t x271 = INT16_MIN;

	t67 = (x269^((x270<=x271)<x272));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = 455967317697LLU;
	int16_t x274 = -1;
	int16_t x275 = -1;
	int8_t x276 = INT8_MIN;
	uint64_t t68 = 353966856467330227LLU;

	t68 = (x273^((x274<=x275)<x276));

	if (t68 != 455967317697LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int8_t x279 = -1;
	int32_t t69 = 0;

	t69 = (x277^((x278<=x279)<x280));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -21;
	int64_t x282 = INT64_MAX;
	volatile int8_t x283 = INT8_MIN;
	int16_t x284 = -1;
	static volatile int32_t t70 = 76;

	t70 = (x281^((x282<=x283)<x284));

	if (t70 != -21) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = 274981782U;
	int64_t x287 = 58403145975229440LL;
	volatile int32_t t71 = 145;

	t71 = (x285^((x286<=x287)<x288));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MAX;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = -27938;

	t72 = (x289^((x290<=x291)<x292));

	if (t72 != 2147483646) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MAX;
	int64_t x296 = -1LL;
	int32_t t73 = INT32_MIN;

	t73 = (x293^((x294<=x295)<x296));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MAX;
	int8_t x299 = -11;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x297^((x298<=x299)<x300));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = 45369;
	int8_t x302 = INT8_MAX;
	uint8_t x303 = 1U;
	int64_t x304 = 215643938371898LL;
	int32_t t75 = -18769512;

	t75 = (x301^((x302<=x303)<x304));

	if (t75 != 45368) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x305 = -1;
	static int16_t x306 = 162;
	int64_t x307 = -4011909450368611487LL;
	volatile uint8_t x308 = 23U;
	static volatile int32_t t76 = 987939575;

	t76 = (x305^((x306<=x307)<x308));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 0;
	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MIN;
	int16_t x312 = -1;
	volatile int32_t t77 = -519450773;

	t77 = (x309^((x310<=x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x315 = INT16_MAX;
	volatile int32_t t78 = -32548;

	t78 = (x313^((x314<=x315)<x316));

	if (t78 != -2740346) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MAX;
	uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MAX;
	int32_t t79 = 129;

	t79 = (x317^((x318<=x319)<x320));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -53;
	static int64_t x322 = INT64_MIN;
	int64_t x323 = 1017312LL;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 1720;

	t80 = (x321^((x322<=x323)<x324));

	if (t80 != -53) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x325 = UINT64_MAX;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	static volatile int64_t x328 = -128329872LL;
	uint64_t t81 = UINT64_MAX;

	t81 = (x325^((x326<=x327)<x328));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 180923906LLU;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t82 = 764U;

	t82 = (x329^((x330<=x331)<x332));

	if (t82 != 6997527U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint64_t x334 = 3490101254784655LLU;
	int32_t x336 = 286;
	int32_t t83 = -1;

	t83 = (x333^((x334<=x335)<x336));

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = -1;
	int32_t x339 = INT32_MIN;
	int16_t x340 = -1;

	t84 = (x337^((x338<=x339)<x340));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 3626;
	int16_t x342 = -1;
	volatile int16_t x343 = INT16_MAX;
	int8_t x344 = -26;
	int32_t t85 = -11683129;

	t85 = (x341^((x342<=x343)<x344));

	if (t85 != 3626) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 0U;
	int8_t x346 = -52;
	uint8_t x347 = 0U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 94;

	t86 = (x345^((x346<=x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MIN;
	int16_t x351 = 15244;
	uint32_t x352 = 0U;
	static uint64_t t87 = 16840869633238LLU;

	t87 = (x349^((x350<=x351)<x352));

	if (t87 != 25LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x353 = -1;
	int32_t x354 = 6808078;
	int32_t x355 = -1;
	volatile int64_t x356 = 1306296587530796LL;
	int32_t t88 = 428000;

	t88 = (x353^((x354<=x355)<x356));

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	volatile uint8_t x358 = UINT8_MAX;
	int32_t x359 = -1;
	static volatile int32_t t89 = -413067;

	t89 = (x357^((x358<=x359)<x360));

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 7U;
	uint64_t x362 = UINT64_MAX;
	static int8_t x364 = INT8_MIN;
	static volatile uint32_t t90 = 29U;

	t90 = (x361^((x362<=x363)<x364));

	if (t90 != 7U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	volatile int32_t x366 = INT32_MAX;
	int16_t x367 = -1;
	static int8_t x368 = -1;
	static volatile int64_t t91 = INT64_MIN;

	t91 = (x365^((x366<=x367)<x368));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	volatile int16_t x371 = -1;
	static int8_t x372 = INT8_MIN;

	t92 = (x369^((x370<=x371)<x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x374 = 15300U;
	int16_t x375 = INT16_MAX;
	static volatile uint64_t x376 = UINT64_MAX;
	int32_t t93 = 205849;

	t93 = (x373^((x374<=x375)<x376));

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 29U;
	static uint16_t x378 = 12U;
	int16_t x379 = INT16_MIN;
	static volatile int8_t x380 = INT8_MIN;

	t94 = (x377^((x378<=x379)<x380));

	if (t94 != 29) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = -1358;

	t95 = (x381^((x382<=x383)<x384));

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = 93717204562LL;
	int32_t x386 = INT32_MAX;
	static int32_t x387 = INT32_MAX;
	static int16_t x388 = INT16_MAX;
	int64_t t96 = 85491277355LL;

	t96 = (x385^((x386<=x387)<x388));

	if (t96 != 93717204563LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -25;
	int16_t x391 = -1;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t97 = INT32_MIN;

	t97 = (x389^((x390<=x391)<x392));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = UINT64_MAX;
	static int32_t x394 = -247931;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;

	t98 = (x393^((x394<=x395)<x396));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x398 = INT32_MIN;
	uint8_t x399 = 0U;
	uint32_t x400 = 451U;

	t99 = (x397^((x398<=x399)<x400));

	if (t99 != 7853168) { NG(); } else { ; }
	
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

