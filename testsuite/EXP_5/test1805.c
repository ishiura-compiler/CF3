#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 1;
volatile int32_t t0 = -112637615;
uint64_t x6 = UINT64_MAX;
volatile int32_t x13 = INT32_MIN;
volatile int64_t t4 = -1631246239LL;
int8_t x26 = INT8_MIN;
uint8_t x31 = UINT8_MAX;
volatile int32_t x37 = INT32_MIN;
static int32_t x43 = INT32_MIN;
volatile int32_t x44 = -10;
int16_t x47 = 1;
int8_t x48 = 1;
int32_t t11 = 11;
int8_t x49 = INT8_MIN;
int32_t t12 = 208;
volatile int64_t x55 = INT64_MIN;
int64_t x56 = 280LL;
static int8_t x69 = INT8_MAX;
int8_t x85 = INT8_MAX;
static int32_t x86 = INT32_MAX;
static uint64_t x92 = 29060511809LLU;
uint8_t x93 = 126U;
int32_t x94 = INT32_MIN;
int16_t x98 = INT16_MIN;
int32_t x104 = INT32_MIN;
volatile int64_t x115 = 0LL;
volatile int8_t x119 = INT8_MIN;
uint64_t x127 = UINT64_MAX;
uint16_t x133 = 1U;
uint64_t x135 = 182413LLU;
uint8_t x136 = UINT8_MAX;
int32_t x140 = -906220643;
volatile uint32_t x142 = 934147278U;
volatile int32_t t35 = -56498739;
uint32_t x151 = 14738465U;
int16_t x153 = 100;
int64_t x155 = INT64_MAX;
uint8_t x159 = 0U;
uint8_t x167 = 22U;
uint32_t x177 = UINT32_MAX;
uint32_t t44 = 8096U;
volatile uint8_t x182 = UINT8_MAX;
static uint8_t x185 = 2U;
volatile uint32_t x214 = 54145U;
static volatile uint64_t x224 = UINT64_MAX;
uint8_t x227 = UINT8_MAX;
int16_t x234 = INT16_MAX;
int32_t t58 = -13539679;
int16_t x238 = 1424;
int32_t x240 = INT32_MAX;
static int32_t x252 = -1;
uint8_t x255 = 1U;
int64_t t63 = 5554LL;
int64_t x260 = INT64_MIN;
volatile int64_t x261 = 1792LL;
volatile int64_t x264 = 2794013886452LL;
int32_t x265 = INT32_MIN;
uint16_t x266 = 3110U;
uint16_t x278 = UINT16_MAX;
volatile int32_t t70 = -102266638;
int8_t x293 = INT8_MIN;
static uint32_t x295 = UINT32_MAX;
int8_t x296 = INT8_MIN;
int32_t x297 = -1;
volatile int32_t t74 = 3;
static uint32_t x301 = 0U;
uint8_t x302 = UINT8_MAX;
uint8_t x307 = UINT8_MAX;
static int64_t t76 = 279581562911LL;
int16_t x309 = INT16_MIN;
volatile int32_t x312 = INT32_MIN;
int64_t x315 = INT64_MIN;
int32_t x318 = INT32_MIN;
int32_t t79 = -113;
uint16_t x321 = 6U;
volatile uint32_t x337 = 3122723U;
uint8_t x349 = 1U;
int32_t x350 = INT32_MAX;
static int16_t x355 = 414;
volatile int64_t x356 = -123566LL;
volatile int32_t t88 = 0;
static int32_t x363 = INT32_MIN;
volatile int8_t x369 = INT8_MAX;
int32_t t94 = 203;
uint32_t t95 = 227060U;
int32_t x389 = -181425846;
uint32_t x397 = UINT32_MAX;


void f0(void) {
	volatile int16_t x1 = 174;
	static int64_t x2 = INT64_MIN;
	volatile int16_t x3 = INT16_MAX;

	t0 = (x1&((x2&x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -61459;
	static int16_t x7 = INT16_MAX;
	uint16_t x8 = 14947U;
	int32_t t1 = 7429401;

	t1 = (x5&((x6&x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 62U;
	int64_t x12 = -382367739LL;
	int32_t t2 = -536462;

	t2 = (x9&((x10&x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = 28521569091142062LL;
	volatile int16_t x15 = -79;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -3;

	t3 = (x13&((x14&x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = -1LL;
	int32_t x18 = INT32_MAX;
	static int8_t x19 = INT8_MAX;
	int16_t x20 = INT16_MIN;

	t4 = (x17&((x18&x19)<x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 3U;
	int64_t x22 = INT64_MIN;
	static volatile int32_t x23 = INT32_MIN;
	uint32_t x24 = 173033U;
	volatile uint32_t t5 = 245080720U;

	t5 = (x21&((x22&x23)<x24));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 51U;
	uint64_t x27 = 655950484LLU;
	static int64_t x28 = INT64_MIN;
	static int32_t t6 = 1;

	t6 = (x25&((x26&x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int32_t x30 = INT32_MIN;
	static int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = 0;

	t7 = (x29&((x30&x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	static uint64_t x35 = 605LLU;
	volatile uint32_t x36 = 18579U;
	int32_t t8 = -27345530;

	t8 = (x33&((x34&x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MAX;
	static uint16_t x40 = 15603U;
	volatile int32_t t9 = -98;

	t9 = (x37&((x38&x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 108721109;
	uint32_t x42 = UINT32_MAX;
	int32_t t10 = -43;

	t10 = (x41&((x42&x43)<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x46 = UINT8_MAX;

	t11 = (x45&((x46&x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = INT64_MIN;
	static int8_t x51 = 2;
	static int16_t x52 = INT16_MAX;

	t12 = (x49&((x50&x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = UINT64_MAX;
	int8_t x54 = INT8_MIN;
	static uint64_t t13 = 127473292LLU;

	t13 = (x53&((x54&x55)<x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = -1;
	int32_t x58 = 1679;
	int8_t x59 = INT8_MIN;
	int16_t x60 = 2;
	volatile int32_t t14 = 16690838;

	t14 = (x57&((x58&x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MAX;
	static int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 15;

	t15 = (x61&((x62&x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -94;
	volatile uint16_t x66 = 3664U;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -37735666;

	t16 = (x65&((x66&x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 30U;
	uint64_t x71 = 11610405703LLU;
	volatile int32_t x72 = -1;
	volatile int32_t t17 = -215;

	t17 = (x69&((x70&x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 48U;
	static volatile uint8_t x74 = 24U;
	static int32_t x75 = INT32_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 7183;

	t18 = (x73&((x74&x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	volatile int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MAX;
	uint32_t x80 = 21297U;
	volatile int32_t t19 = 27;

	t19 = (x77&((x78&x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int16_t x82 = 1;
	volatile int64_t x83 = INT64_MIN;
	uint16_t x84 = 11709U;
	int32_t t20 = 239;

	t20 = (x81&((x82&x83)<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x87 = 332333U;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = 439;

	t21 = (x85&((x86&x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 5850724U;
	static int8_t x90 = 12;
	int32_t x91 = -1;
	uint32_t t22 = 6215U;

	t22 = (x89&((x90&x91)<x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = INT16_MAX;
	static uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = 1;

	t23 = (x93&((x94&x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1997U;
	volatile uint64_t x99 = UINT64_MAX;
	static uint8_t x100 = 17U;
	static uint32_t t24 = 188461U;

	t24 = (x97&((x98&x99)<x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MIN;
	int64_t t25 = -1890099050LL;

	t25 = (x101&((x102&x103)<x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 52;
	int8_t x106 = INT8_MAX;
	volatile uint64_t x107 = 7004861LLU;
	static volatile uint32_t x108 = 8U;
	static int32_t t26 = -1;

	t26 = (x105&((x106&x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MIN;
	int32_t x111 = -1;
	static uint32_t x112 = 609320U;
	int32_t t27 = 2;

	t27 = (x109&((x110&x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	uint32_t x114 = 38U;
	static int16_t x116 = INT16_MAX;
	volatile int64_t t28 = 832LL;

	t28 = (x113&((x114&x115)<x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MAX;
	volatile int64_t x120 = -3941020LL;
	volatile int32_t t29 = -7;

	t29 = (x117&((x118&x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static uint32_t x122 = UINT32_MAX;
	int64_t x123 = INT64_MIN;
	static int16_t x124 = INT16_MAX;
	uint32_t t30 = 213U;

	t30 = (x121&((x122&x123)<x124));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 116U;
	volatile int64_t x126 = INT64_MIN;
	volatile uint8_t x128 = 0U;
	int32_t t31 = 96237228;

	t31 = (x125&((x126&x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MAX;
	volatile int32_t x130 = INT32_MIN;
	volatile uint32_t x131 = UINT32_MAX;
	uint8_t x132 = 100U;
	volatile int32_t t32 = -583;

	t32 = (x129&((x130&x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -1LL;
	int32_t t33 = -131702581;

	t33 = (x133&((x134&x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 1U;
	static int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MIN;
	volatile int32_t t34 = 194;

	t34 = (x137&((x138&x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -1;
	int64_t x143 = -1LL;
	static int32_t x144 = -1;

	t35 = (x141&((x142&x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 1;
	int32_t x146 = INT32_MAX;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MAX;
	int32_t t36 = 22067752;

	t36 = (x145&((x146&x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int16_t x150 = -1;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -5;

	t37 = (x149&((x150&x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 358U;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = -3;

	t38 = (x153&((x154&x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 9730U;
	uint16_t x158 = UINT16_MAX;
	uint32_t x160 = 59307176U;
	int32_t t39 = 8507986;

	t39 = (x157&((x158&x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 36949412271198339LLU;
	int16_t x162 = 1;
	int64_t x163 = -26834LL;
	int32_t x164 = -1;
	uint64_t t40 = 32672153637387LLU;

	t40 = (x161&((x162&x163)<x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	int64_t x168 = INT64_MAX;
	int32_t t41 = 327519597;

	t41 = (x165&((x166&x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 105;
	volatile int8_t x170 = -3;
	static int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t42 = -7339760;

	t42 = (x169&((x170&x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 304223089;
	static uint8_t x174 = 113U;
	volatile uint16_t x175 = 1U;
	static int32_t x176 = 62740154;
	volatile int32_t t43 = 4674596;

	t43 = (x173&((x174&x175)<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x178 = INT32_MAX;
	int16_t x179 = -1;
	int8_t x180 = INT8_MAX;

	t44 = (x177&((x178&x179)<x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 22640;
	static int8_t x183 = -3;
	uint8_t x184 = UINT8_MAX;
	int32_t t45 = 5;

	t45 = (x181&((x182&x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = 34109632874LL;
	uint8_t x187 = 39U;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = -209509289;

	t46 = (x185&((x186&x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 52U;
	volatile int8_t x190 = 46;
	static int64_t x191 = INT64_MIN;
	int64_t x192 = -61238846LL;
	int32_t t47 = 5;

	t47 = (x189&((x190&x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	static uint16_t x194 = 2U;
	int32_t x195 = 65242299;
	volatile uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = 1;

	t48 = (x193&((x194&x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x197 = 1340370U;
	int8_t x198 = INT8_MIN;
	int16_t x199 = 6;
	static volatile uint32_t x200 = UINT32_MAX;
	uint32_t t49 = 1U;

	t49 = (x197&((x198&x199)<x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = -1;
	int32_t x203 = INT32_MIN;
	volatile int16_t x204 = -50;
	static volatile int32_t t50 = -24529;

	t50 = (x201&((x202&x203)<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -1;
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = 7;
	static uint8_t x208 = 99U;
	int32_t t51 = -195984;

	t51 = (x205&((x206&x207)<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	volatile int64_t x211 = INT64_MIN;
	int64_t x212 = -382998038LL;
	volatile int32_t t52 = -57850133;

	t52 = (x209&((x210&x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MAX;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t53 = 317445982;

	t53 = (x213&((x214&x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 0U;
	int16_t x218 = 3;
	int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MAX;
	volatile int32_t t54 = 0;

	t54 = (x217&((x218&x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 516U;
	volatile uint32_t x222 = 552425508U;
	volatile int8_t x223 = 1;
	volatile int32_t t55 = 299;

	t55 = (x221&((x222&x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MAX;
	int32_t x226 = -5578;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -5;

	t56 = (x225&((x226&x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 2;
	uint64_t x230 = 0LLU;
	int8_t x231 = -1;
	int8_t x232 = INT8_MIN;
	static int32_t t57 = -4209789;

	t57 = (x229&((x230&x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -1;
	volatile int16_t x235 = INT16_MIN;
	static int32_t x236 = 220;

	t58 = (x233&((x234&x235)<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	volatile uint32_t x239 = 107511U;
	volatile int64_t t59 = -470678031LL;

	t59 = (x237&((x238&x239)<x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 6;
	int32_t x242 = INT32_MAX;
	int16_t x243 = -7;
	int32_t x244 = INT32_MAX;
	int32_t t60 = -126420060;

	t60 = (x241&((x242&x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	uint8_t x246 = UINT8_MAX;
	static int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	uint32_t t61 = 5U;

	t61 = (x245&((x246&x247)<x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MAX;
	static volatile int16_t x250 = INT16_MIN;
	static uint32_t x251 = 27456U;
	int32_t t62 = -81296989;

	t62 = (x249&((x250&x251)<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = 3183LL;
	volatile int32_t x254 = INT32_MIN;
	uint64_t x256 = 25257248349905445LLU;

	t63 = (x253&((x254&x255)<x256));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = 32990140613711LL;
	int64_t x258 = -1LL;
	uint8_t x259 = 1U;
	volatile int64_t t64 = 24686500LL;

	t64 = (x257&((x258&x259)<x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x262 = 1;
	volatile int64_t x263 = INT64_MIN;
	volatile int64_t t65 = 2296432LL;

	t65 = (x261&((x262&x263)<x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x267 = -148140LL;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 3838;

	t66 = (x265&((x266&x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = 340;
	int8_t x271 = -1;
	static uint32_t x272 = UINT32_MAX;
	int32_t t67 = -450123104;

	t67 = (x269&((x270&x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -57LL;
	uint32_t x274 = 50407U;
	int8_t x275 = INT8_MIN;
	static int64_t x276 = INT64_MIN;
	int64_t t68 = 29LL;

	t68 = (x273&((x274&x275)<x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	static int32_t x279 = INT32_MIN;
	uint64_t x280 = 302462027839602810LLU;
	volatile int64_t t69 = 2644LL;

	t69 = (x277&((x278&x279)<x280));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 317U;
	volatile uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = -544494459678224LL;
	static uint16_t x284 = 1465U;

	t70 = (x281&((x282&x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	int16_t x286 = -125;
	static int16_t x287 = 0;
	int64_t x288 = -78748738678616260LL;
	volatile int32_t t71 = 50804228;

	t71 = (x285&((x286&x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = INT16_MIN;
	volatile uint32_t x291 = 9U;
	int8_t x292 = 1;
	static int32_t t72 = -2328;

	t72 = (x289&((x290&x291)<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MIN;
	int32_t t73 = 935;

	t73 = (x293&((x294&x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MAX;
	uint64_t x299 = 189420716909097788LLU;
	int32_t x300 = INT32_MIN;

	t74 = (x297&((x298&x299)<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x303 = -1;
	static int64_t x304 = INT64_MIN;
	volatile uint32_t t75 = 230343641U;

	t75 = (x301&((x302&x303)<x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	uint16_t x306 = 491U;
	int16_t x308 = 0;

	t76 = (x305&((x306&x307)<x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x310 = INT8_MIN;
	static int8_t x311 = -1;
	int32_t t77 = 37;

	t77 = (x309&((x310&x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	uint16_t x314 = 3U;
	volatile uint32_t x316 = 22U;
	static int32_t t78 = -16026;

	t78 = (x313&((x314&x315)<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 1992U;
	uint8_t x319 = 21U;
	volatile int32_t x320 = -4;

	t79 = (x317&((x318&x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x322 = -1LL;
	int16_t x323 = 0;
	uint16_t x324 = 11U;
	static volatile int32_t t80 = 1024;

	t80 = (x321&((x322&x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x326 = -5547642;
	uint8_t x327 = 34U;
	uint32_t x328 = 94U;
	volatile int32_t t81 = -2421;

	t81 = (x325&((x326&x327)<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MAX;
	int32_t x330 = -204;
	uint8_t x331 = 49U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -1;

	t82 = (x329&((x330&x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 0U;
	static volatile int16_t x334 = INT16_MIN;
	uint16_t x335 = UINT16_MAX;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -4;

	t83 = (x333&((x334&x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x338 = INT32_MAX;
	volatile int64_t x339 = -2372618003693392283LL;
	uint16_t x340 = UINT16_MAX;
	static uint32_t t84 = 5626283U;

	t84 = (x337&((x338&x339)<x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MIN;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -1;

	t85 = (x341&((x342&x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	uint64_t x346 = 485987768260191LLU;
	int8_t x347 = -1;
	static uint8_t x348 = UINT8_MAX;
	int32_t t86 = -19;

	t86 = (x345&((x346&x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = INT32_MIN;
	static int8_t x352 = -1;
	static int32_t t87 = 25;

	t87 = (x349&((x350&x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -563;
	int16_t x354 = INT16_MAX;

	t88 = (x353&((x354&x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint32_t x358 = 57287694U;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 8410412U;
	int64_t t89 = -861041409775577684LL;

	t89 = (x357&((x358&x359)<x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	volatile int32_t x362 = INT32_MIN;
	int32_t x364 = 462868;
	int64_t t90 = 4040143219LL;

	t90 = (x361&((x362&x363)<x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1U;
	volatile uint64_t x366 = UINT64_MAX;
	int32_t x367 = INT32_MIN;
	static int8_t x368 = -6;
	volatile uint32_t t91 = 47805441U;

	t91 = (x365&((x366&x367)<x368));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	uint8_t x372 = 34U;
	volatile int32_t t92 = 221115172;

	t92 = (x369&((x370&x371)<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x374 = INT16_MIN;
	static int32_t x375 = 54281;
	int64_t x376 = 9883571633407097LL;
	volatile int32_t t93 = -467;

	t93 = (x373&((x374&x375)<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	uint32_t x378 = 5278U;
	int16_t x379 = INT16_MAX;
	uint8_t x380 = UINT8_MAX;

	t94 = (x377&((x378&x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 50065U;
	int8_t x382 = 27;
	static int64_t x383 = -1LL;
	static int64_t x384 = INT64_MIN;

	t95 = (x381&((x382&x383)<x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = UINT16_MAX;
	volatile int64_t x386 = INT64_MIN;
	volatile int8_t x387 = -13;
	volatile int8_t x388 = 1;
	volatile int32_t t96 = -246956402;

	t96 = (x385&((x386&x387)<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = -3727049501290LL;
	volatile int16_t x391 = INT16_MIN;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 14919;

	t97 = (x389&((x390&x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1378579LL;
	int8_t x394 = INT8_MAX;
	uint32_t x395 = 9338U;
	volatile int32_t x396 = INT32_MIN;
	int64_t t98 = 6626374488409343LL;

	t98 = (x393&((x394&x395)<x396));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MIN;
	int64_t x400 = -55270332LL;
	uint32_t t99 = 0U;

	t99 = (x397&((x398&x399)<x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

